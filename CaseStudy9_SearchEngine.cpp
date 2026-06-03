#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Build prefix sum of clicks
vector<int> buildPrefix(const vector<int>& clicks) {
    int n = clicks.size();
    vector<int> prefix(n);

    prefix[0] = clicks[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + clicks[i];
    }
    return prefix;
}

// O(1) CTR calculation
double getCTR(const vector<int>& prefix, int k) {
    return (double)prefix[k - 1] / k;
}

// Binary search for best k
int findOptimalCutoff(const vector<int>& prefix, int n) {
    int low = 1, high = n;
    int bestK = 1;
    double bestCTR = 0.0;

    while (low <= high) {
        int mid = (low + high) / 2;

        double ctrMid = getCTR(prefix, mid);
        double ctrNext = (mid < n) ? getCTR(prefix, mid + 1) : 0;

        if (ctrMid >= bestCTR) {
            bestCTR = ctrMid;
            bestK = mid;
        }

        if (ctrNext > ctrMid) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return bestK;
}

int main() {
    int n;
    cout << "Enter number of results: ";
    cin >> n;

    vector<pair<double, int>> data(n);

    cout << "Enter relevance scores:\n";
    for (int i = 0; i < n; i++) {
        cin >> data[i].first;
    }

    cout << "Enter clicks (1 or 0):\n";
    for (int i = 0; i < n; i++) {
        cin >> data[i].second;
    }

    // 🔥 Sort by relevance score (descending)
    sort(data.begin(), data.end(), [](auto &a, auto &b) {
        return a.first > b.first;
    });

    // Extract sorted clicks
    vector<int> clicks(n);
    for (int i = 0; i < n; i++) {
        clicks[i] = data[i].second;
    }

    // Build prefix sum
    vector<int> prefix = buildPrefix(clicks);

    // Find optimal cutoff
    int optimalK = findOptimalCutoff(prefix, n);

    cout << "\nOptimal number of results: " << optimalK << endl;
    cout << "Maximum CTR: " << getCTR(prefix, optimalK) << endl;

    return 0;
}