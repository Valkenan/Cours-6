# C++ Programming Course — Cours-6

A comprehensive collection of **60 C++ lessons** covering fundamental to intermediate concepts. Each lesson is a self-contained Visual Studio project with practical examples.

## Quick Start

| Requirement      | Value                                      |
| ---------------- | ------------------------------------------ |
| **Platform**     | Windows                                    |
| **IDE**          | Visual Studio (MSVC) or any C++11 compiler |
| **C++ Standard** | C++11 or later                             |

### Build with Visual Studio

1. Open a lesson folder (e.g., `LESSON_10_RANGED_LOOP`).
2. Double-click the `.sln` file.
3. Build: `Ctrl + Shift + B` → Run: `F5` or `Ctrl + F5`.

### Build from Command Line (Git Bash / MinGW)

```bash
g++ -std=c++11 "LESSON_10_RANGED_LOOP/LESSON_10_RANGED_LOOP.cpp" -o lesson10.exe
./lesson10.exe
```

---

## 📚 Lesson Overview

### Basics & Control Flow

| Lesson | Topic                            |
| ------ | -------------------------------- |
| 02     | Breakpoint Memory Values         |
| 09     | Ternary Operator (Short-hand If) |
| 10     | Ranged Loop                      |
| 11     | Validate Number                  |

### Bitwise Operations

| Lesson | Topic                |
| ------ | -------------------- |
| 12     | Bitwise AND Operator |
| 13     | Bitwise OR Operator  |

### Functions

| Lesson | Topic                       |
| ------ | --------------------------- |
| 14     | Declaration vs Definition   |
| 15     | Default Parameters          |
| 16     | Function Overloading        |
| 17     | Call Stack & Call Hierarchy |
| 18     | VS Function Tips            |
| 19     | Recursion                   |

### Variables & Scope

| Lesson | Topic               |
| ------ | ------------------- |
| 20     | Static Variables    |
| 21     | Automatic Variables |
| 22     | Register Variable   |

### I/O Formatting

| Lesson | Topic                         |
| ------ | ----------------------------- |
| 23     | Integer Format (printf)       |
| 24     | Float Format (printf)         |
| 25     | String & Char Format (printf) |
| 26     | setw Manipulator              |

### Arrays & Vectors

| Lesson | Topic                               |
| ------ | ----------------------------------- |
| 27     | Two-Dimensional Arrays              |
| 28     | Vector Declaration & Initialization |
| 29     | Add Elements                        |
| 30     | Vector of Structure                 |
| 31     | Remove Elements                     |
| 32     | Vector Functions                    |

### References & Pointers

| Lesson | Topic                            |
| ------ | -------------------------------- |
| 33     | Call by Reference vs Value       |
| 34     | Creating References              |
| 35     | What is a Pointer                |
| 36     | Dereferencing Pointer            |
| 37     | Common Pointer Mistakes          |
| 38     | Pointers vs References           |
| 39     | Call by Reference Using Pointers |
| 40     | Pointers and Arrays              |
| 41     | Pointers and Structures          |
| 42     | Pointer to Void                  |

### Memory Management

| Lesson | Topic          |
| ------ | -------------- |
| 43     | new and delete |
| 44     | Dynamic Arrays |
| 45     | Stack vs Heap  |

### Vector Iterators

| Lesson | Topic            |
| ------ | ---------------- |
| 46     | Access Elements  |
| 47     | Change Elements  |
| 48     | Vector Iterators |

### Error Handling & Strings

| Lesson | Topic                 |
| ------ | --------------------- |
| 49     | Try-Catch             |
| 50     | String Object Methods |
| 51     | cctype Functions      |

### File I/O

| Lesson | Topic               |
| ------ | ------------------- |
| 52     | Write Mode          |
| 53     | Append Mode         |
| 54     | Read Mode           |
| 55     | Load Data to Vector |
| 56     | Save Vector to File |
| 57     | Delete Record       |
| 58     | Update Record       |

### Date & Time

| Lesson | Topic              |
| ------ | ------------------ |
| 59     | Local & UTC Time   |
| 60     | DateTime Structure |

---

## Repository Structure

Each lesson folder contains:

-   `.cpp` — main source file
-   `.sln` / `.vcxproj` — Visual Studio project files
-   Optional `.h` headers

---

## Recommended Learning Path

1. **Basics & Control Flow** (Lessons 2–11)
2. **Functions** (Lessons 14–19)
3. **Variables & Scope** (Lessons 20–22)
4. **I/O Formatting** (Lessons 23–26)
5. **Arrays & Vectors** (Lessons 27–32)
6. **Pointers & References** (Lessons 33–42)
7. **Memory Management** (Lessons 43–45)
8. **Iterators** (Lessons 46–48)
9. **Error Handling & Strings** (Lessons 49–51)
10. **File I/O** (Lessons 52–58)
11. **Date & Time** (Lessons 59–60)

---

## Contributing

-   Report issues or open pull requests.
-   Add examples, tests, or clarifying comments.
-   Follow the existing `LESSON_XX_TOPIC` naming convention.

## License

Educational resource — check with the repository owner ([Valkenan](https://github.com/Valkenan)) about reuse.

---

Happy coding! 🚀
