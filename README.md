# push_swap - 42 Lisboa 🔢

A highly efficient algorithm project to sort data on a stack, with a limited set of instructions, using the lowest possible number of actions.

## 📝 Description
The **push_swap** project challenges you to sort a random list of integers using two stacks (**Stack A** and **Stack B**) and a restricted set of operations. The goal is to write a program in C that outputs the smallest list of instructions to sort the stack.

## 🚀 Key Features
- **Algorithm Optimization:** Implementation of efficient sorting algorithms (like the "Turkish Algorithm" or "Mechanical Sort") to meet strict movement limits.
- **Stack Manipulation:** Deep understanding of stack-based data structures.
- **Complexity:** Focus on $O(n \log n)$ or better performance to achieve the highest scores on 100 and 500 numbers benchmarks.
- **Input Validation:** Robust handling of errors, such as non-numeric input, duplicates, or integers exceeding the `INT_MIN/MAX` limits.

## 🛠️ Technologies
- **Language:** C
- **Compilation:** Makefile (with `-Wall -Wextra -Werror` flags)
- **Concepts:** Algorithms, Data Structures (Linked Lists or Arrays), Big O Notation.

## ⚙️ Operations
| Instruction | Description |
| :--- | :--- |
| **sa** / **sb** | Swap the first 2 elements at the top of stack A / B. |
| **ss** | `sa` and `sb` at the same time. |
| **pa** / **pb** | Take the first element at the top of B and put it at the top of A (and vice versa). |
| **ra** / **rb** | Shift up all elements of stack A / B by 1 (the first element becomes the last). |
| **rr** | `ra` and `rb` at the same time. |
| **rra** / **rrb** | Shift down all elements of stack A / B by 1 (the last element becomes the first). |
| **rrr** | `rra` and `rrb` at the same time. |

## 💻 Compilation & Usage

### 1. Build the project
Run the following command to generate the `push_swap` executable:
```bash
make
```

### 2. Run the program
Execute the program with a list of integers:
```bash
./push_swap 3 2 5 1 4
```

### 3. Check performance
To count the number of operations:
```bash
ARG="3 2 5 1 4"; ./push_swap $ARG | wc -l
```

---
*Developed as part of my Software Engineering journey at **42 Lisboa** (April 2025 intake).*
