# 🔍 Search Engine Optimization using Prefix Sum & Binary Search

## 🚀 About the Project

This project demonstrates how **Data Structures and Algorithms (DSA)** can be used to solve a real-world **search engine optimization** problem.

The program analyzes **relevance scores** and **user click data** to determine the optimal number of search results that should be displayed. By leveraging **Prefix Sum** and **Binary Search**, it efficiently finds the cutoff point that maximizes the **Click-Through Rate (CTR)**.

---

## 🎯 Objective

Search engines rank results based on relevance, but displaying too many results can reduce user engagement.

This project aims to:

* Rank search results by relevance score
* Analyze user click behavior
* Calculate Click-Through Rate (CTR)
* Find the optimal number of results to display
* Demonstrate efficient algorithmic problem solving

---

## ✨ Features

* Sorts search results based on relevance scores
* Efficient CTR calculation using Prefix Sum
* Binary Search optimization for finding the best cutoff point
* Fast and scalable implementation
* Real-world application of DSA concepts
* User-friendly console-based interaction

---

## 🛠️ Tech Stack

* **Language:** C++
* **Concepts:** Prefix Sum, Binary Search, Sorting
* **Paradigm:** Procedural Programming
* **Tools:** VS Code, GCC Compiler, Git, GitHub

---

## 📚 DSA Concepts Used

### 🔹 Sorting

Search results are sorted in descending order of relevance scores to simulate search engine ranking.

### 🔹 Prefix Sum

Used to store cumulative click counts, allowing CTR calculations in **O(1)** time.

### 🔹 Binary Search

Efficiently identifies the optimal number of search results that maximize CTR.

### 🔹 Time Complexity Analysis

Demonstrates how algorithm optimization improves performance on larger datasets.

---

## ⚙️ How It Works

1. User enters relevance scores for search results.
2. User enters click data (1 for clicked, 0 for not clicked).
3. Results are sorted according to relevance.
4. Prefix Sum array is constructed.
5. CTR is calculated for different result counts.
6. Binary Search finds the optimal cutoff point.
7. Program outputs:
   * Optimal number of results
   * Maximum CTR achieved

---

## 📊 Time Complexity

| Operation | Complexity |
|------------|------------|
| Sorting | O(n log n) |
| Prefix Sum Construction | O(n) |
| CTR Calculation | O(1) |
| Binary Search | O(log n) |
| Overall | O(n log n) |

---


