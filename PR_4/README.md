📦 Stack Data Structure Implementation (C++)

A well-structured and interactive implementation of the Stack (LIFO) data structure using C++. This project demonstrates core stack operations through a menu-driven console application, making it ideal for beginners learning Data Structures and Object-Oriented Programming.

📖 Overview

This project implements a fixed-size stack using an array and encapsulates all operations within a class. It provides a clean and intuitive interface for performing standard stack operations.

The program follows the Last-In, First-Out (LIFO) principle, where the last element inserted is the first one to be removed.

✨ Key Features
  🔹 Object-Oriented design using classes
  🔹 Menu-driven interactive interface
  🔹 Efficient stack operations (O(1) time complexity)
  🔹 Input validation for overflow and underflow conditions
  🔹 Clear console output for better user experience
  
🧠 Core Operations
  Operation	Description
  push()	Inserts an element into the stack
  pop()	Removes the top element
  display()	Displays all elements from top to bottom
  isEmpty()	Checks whether the stack is empty
  isFull()	Checks whether the stack is full
  topElement()	Retrieves the top element without removing it
  
⚙️ Implementation Details
  Language: C++
  Data Structure: Array-based Stack
  Maximum Capacity: 100 elements
  Time Complexity:
  Push: O(1)
  Pop: O(1)
  Top: O(1)

🚀 Getting Started
🔧 Prerequisites
  C++ Compiler (e.g., GCC)
▶️ Compile the Program
  g++ Escalator.cpp 
▶️ Run the Program
  ./a.exe

📸 Output Images 
![Stack Output](PR-4/Output-1.png)
![Stack Output](PR-4/Output-2.png)
![Stack Output](PR-4/Output-3.png)
  
🖥️ Sample Execution
~~~~~~  WELCOME  ~~~~~~
~~~~~ Stack Operation ~~~~~

Enter The Size of Stack : 5

1. Push an Element
2. Pop an Element
3. Display Stack
4. Check if Empty
5. Check if Full
6. Display Top Element
0. Exit

⚠️ Limitations
  Fixed-size implementation (no dynamic resizing)
  Uses static array instead of dynamic memory
  Console-based interface only


🚀 Future Enhancements
🔄 Dynamic stack implementation using pointers (Linked List)
🧵 Exception handling for robust error management
🎨 GUI-based visualization of stack operations
📊 Performance comparison with other data structures
🎯 Learning Outcomes

Through this project, you will understand:

Stack fundamentals and LIFO behavior
Implementation using arrays
Handling edge cases (overflow & underflow)
Basics of Object-Oriented Programming in C++
