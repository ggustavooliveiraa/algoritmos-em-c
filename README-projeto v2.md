# Polynomial Calculator in C

## 📌 Overview

This project is a console-based Polynomial Calculator developed in C.  
It allows users to create, evaluate, add, and multiply polynomials using structured programming principles.

The system represents polynomials using arrays, where each index corresponds to the exponent and the value stored represents the coefficient.

This project was built to reinforce concepts such as:
- Arrays
- Functions
- Algorithmic logic
- Recursion-free polynomial operations
- Structured programming in C

---

## ⚙️ Features

The program provides a menu with the following operations:

1. **Evaluate a Polynomial**
   - Calculates the numeric value of a polynomial for a given value of x.

2. **Add Two Polynomials**
   - Performs polynomial addition and prints the resulting polynomial.

3. **Multiply Two Polynomials**
   - Performs polynomial multiplication using nested loops and returns the resulting polynomial.

4. **Formatted Polynomial Output**
   - Prints polynomials in standard mathematical notation (e.g., `3x^2 + 2x - 5`).

---

## 🧠 Technical Implementation

- Maximum supported degree: `100`
- Polynomials are stored in integer arrays.
- Dynamic degree handling.
- Uses modular functions:
  - `lerPolinomio()` – Reads polynomial input
  - `imprimePolinomio()` – Prints formatted polynomial
  - `calculaValorPolinomio()` – Evaluates polynomial using `pow()`
  - `somaPolinomios()` – Performs addition
  - `multiplicaPolinomios()` – Performs multiplication

Polynomial multiplication complexity:
- Time Complexity: **O(n × m)**

---

## 🖥️ Example

Menu:
