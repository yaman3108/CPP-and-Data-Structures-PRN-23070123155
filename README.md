# 1. EXPERIMENT 1
## Aim:
To demonstrate the basic structure of a C++ program and the syntax for outputting text to the console. To perform basic arithmetic operations and number classifications by calculating the sum, average, and determining whether numbers are even or odd.

## Theory:

### Hello World:
The "Hello, World!" program is a classic first exercise for learning any programming language. It showcases the essential syntax and structure of a C++ program. In C++, the #include <iostream> directive is used to include the standard input-output stream library, which allows the program to use std::cout for outputting text to the console. The main function is the entry point of every C++ program. Inside the main function, std::cout << "Hello, World!"; sends the string "Hello, World!" to the standard output (usually the console), followed by std::endl which ends the line. This program introduces basic concepts such as headers, namespaces, the main function, and output statements.

### Arithmetic Operations:
Basic arithmetic operations include addition, subtraction, multiplication, and division. These operations are performed using operators like +, -, *, and /. The program calculates the sum and average of a series of numbers, demonstrating how to perform and combine arithmetic operations.

### Conditional Statements:
Conditional operators are used to make decisions in the program. For instance, the modulus operator % is used to determine if a number is even or odd. Conditional statements such as if and else help in branching the program flow based on whether the condition is true or false.

### Input/Output Operations:
The program uses std::cin to take input from the user and std::cout to display output. This interaction is essential for creating dynamic programs that can handle user-provided data.

## Apparatus: 
VS Code, Github

## Conclusion:
The "Hello, World!" program serves as an introductory exercise for learning the fundamental syntax and structure of C++. It provides a straightforward example of how to output text to the console and is a foundational step for understanding more complex programming concepts.The program provides practical experience with fundamental C++ concepts, including arithmetic operations and conditional logic. By calculating and classifying numbers, users gain insight into basic programming techniques and how to handle user input effectively. This exercise helps in understanding how to perform and manage basic computations and decision-making in C++.





# 2. EXPERIMENT 2

## Aim:
To demonstrate and illustrate the sizes of various fundamental data types in C++ using the sizeof operator. This file provides insights into the memory allocation for different data types on the target platform.

## Theory:
In C++, the sizeof operator is used to determine the size (in bytes) of a data type or object. Understanding the size of different data types is crucial for memory management, optimization, and ensuring portability of code across different platforms. Here are some common data types and their typical sizes:

### char:
Represents a single character. Typically occupies 1 byte of memory.

### short:
A short integer type. Usually occupies 2 bytes of memory.

### int:
A standard integer type. The size can vary, but it commonly occupies 4 bytes on many platforms.

### long:
A long integer type. On many systems, it occupies 4 bytes, but it can be 8 bytes on some platforms.

### long long:
A long long integer type. Typically occupies 8 bytes of memory.

### float:
A single-precision floating-point type. Usually occupies 4 bytes of memory.

### double:
A double-precision floating-point type. Typically occupies 8 bytes of memory.

### long double:
An extended-precision floating-point type. Its size can vary, but it is often 8, 12, or 16 bytes.

### bool:
Represents a Boolean value (true or false). Usually occupies 1 byte, though the exact size may vary based on the compiler.

The sizes of these data types can differ depending on the compiler and the architecture of the system. This file includes code that prints the size of each data type using sizeof, allowing users to see the actual sizes on their specific platform.

## Apparatus:
VS Code, Github

## Conclusion:
The data_type_sizes.cpp file provides a practical demonstration of how to use the sizeof operator to determine the size of various fundamental data types in C++. Understanding the sizes of these data types helps developers make informed decisions about memory usage and optimization in their programs. Additionally, it provides a valuable reference for ensuring code portability and understanding the effects of different compilers and platforms on data type sizes.






# 3. EXPERIMENT 3.
## Aim:
To illustrate the use of arithmetic operators, assignment operators, and conditional operators in C++.

## Theory:
This program demonstrates the use of different types of operators in C++:

### Arithmetic Operators:
These include + (addition), - (subtraction), * (multiplication), / (division), and % (modulus). They are used to perform basic mathematical operations on numeric data types.

### Assignment Operators:
These operators are used to assign values to variables. The basic assignment operator = assigns a value to a variable, while compound assignment operators like +=, -=, *=, and /= combine arithmetic operations with assignment.

### Conditional (Relational) Operators:
These include == (equality), != (inequality), > (greater than), < (less than), >= (greater than or equal to), and <= (less than or equal to). They are used to compare values and produce Boolean results (true or false).

### Logical Operators:
These operators are used to combine multiple Boolean expressions. They include && (logical AND), || (logical OR), and ! (logical NOT). Logical operators are crucial for controlling the flow of the program based on multiple conditions.

## Apparatus:
VS Code,Github

## Conclusion:
This program provides a comprehensive overview of how different types of operators are used in C++. Understanding these operators is crucial for performing various operations, manipulating data, and implementing logic in C++ programs. This file serves as a practical guide for beginners to get familiar with operators and their applications in programming.





# 4. EXPERIMENT 4
## Aim:
To demonstrate the use and functionality of bitwise operators in C++. This file covers the fundamental bitwise operators, including AND, OR, XOR, NOT, as well as left and right shift operators. The goal is to illustrate how these operators manipulate individual bits within integer data types and to provide practical examples of their usage in bitwise operations.

## Theory:
Bitwise operators in C++ perform operations on the binary representations of integers. These operators manipulate individual bits of data, which can be particularly useful in low-level programming, optimization, and situations where performance and memory usage are critical. Here's an overview of common bitwise operators:

### Bitwise AND (&):
Performs a bitwise AND operation between two integers. Each bit of the result is 1 if the corresponding bits of both operands are 1; otherwise, the result bit is 0.

### Bitwise OR (|):
Performs a bitwise OR operation. Each bit of the result is 1 if at least one of the corresponding bits of the operands is 1.

### Bitwise XOR (^):
Performs a bitwise XOR (exclusive OR) operation. Each bit of the result is 1 if the corresponding bits of the operands are different; otherwise, the result bit is 0.

### Bitwise NOT (~):
Performs a bitwise NOT operation, also known as bitwise complement. It inverts all the bits of the operand. In other words, each bit of the result is the opposite of the corresponding bit in the operand.

### Left Shift (<<):
Shifts the bits of the left operand to the left by the number of positions specified by the right operand. New bits on the right are set to 0.

### Right Shift (>>):
Shifts the bits of the left operand to the right by the number of positions specified by the right operand. The behavior of the leftmost bits depends on whether the type is signed or unsigned.

## Conclusion:
The bitwise_operators.cpp file provides a clear understanding of how bitwise operators can be used for low-level data manipulation in C++. By exploring these operators, users gain insight into performing efficient bitwise operations such as setting, clearing, toggling, and testing specific bits. Bitwise operations are crucial for performance optimization and are commonly used in scenarios involving hardware control, cryptography, and data compression. Mastering these operators enables developers to write more efficient and precise code, particularly in systems programming and performance-critical applications.

