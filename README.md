# 1. EXPERIMENT 1
## Aim:
1) To write a simple "Hello World" program using C++
2) To write a program that gives the sum and average of two numbers using C++
3) To write a program that shows weather a number is even or odd using C++
4) To write a program that shows weather a given year is a leap year or not.


## Apparatus: 
VS Code, Github


## Theory:
"Hello World" and other beginner programs are used to understand the basic syntax of C++ and get used to its standard library. These programs help the programer understand the basic input/output operations, arithematic operations and conditional statements. These programs are essential as they help us understand the basic datatypes,variables and operators that are used in C++.


## Explantion:

### Hello World:
The "Hello World" program is the most basic program written in any programming language by a beginner programmer in order to understand the basic syntax of the programming language. Using this program helps the programmer understand how the basic input/output and print statements work in the given language in this case C++. The line "using namespace std;" at the start of any C++ program is its standard library. It contains all the common funcionalities such as input,output and algorithms. This program introduces basic concepts such as headers, namespaces, the main function, and output statements.

### Sum and Average of two numbers:
This program makes the use of basic arithematic operations in C++ such as + for addition and / for division. This is the same for most programming languages.In this program "cin>>" is used to take input from the user and "cout<<" is used for the output. The command "endl<<" is used to end the line.

### Even/Odd:
Conditional operators are used in this program to display weather a number is even or odd. The particular conditional statement used in this program is the if else statement. The program also makes use of the %(modulus) operator to find the remainder and determine if the number is even or odd.

### Leap year:
This program takes a user inputed year and determines weather it is a leap year or not. To do this we make use of logical operators such as &&(And) and ||(Or). The remaining syntax is similar to other basic programs prevoiusly performed.  

## Code:

### Hello World:
#include< iostream > <br />
// Yaman Hasan Ansari PRN: 23070123155 <br />
using namespace std; <br />
int main() <br />
{ <br />
cout<<"Hello World"; <br />
return 0; <br />
} <br />

### Output:
![Screenshot 2024-07-30 093300](https://github.com/user-attachments/assets/ff38c0c9-9f54-4790-a8b0-328d39193b8c)

### Sum and Average of two numbers:
#include< iostream > <br />
//Yaman Hasan Ansari PRN:23070123155 <br />
using namespace std; <br />
int main() <br />
{ <br />
int a,b; <br />
cout<<"Enter a and b"<<endl; <br />
cin>>a; <br />
cin>>b; <br />
int sum1 = a+b; <br />
cout<<"The sum of a and b is"<<sum1; <br />
int avg = (a+b)/2; <br />
cout<<endl<< "The average of a and b is:"<<avg; <br />
return 0; <br />
} <br />

### Output:
![Screenshot 2024-07-30 094212](https://github.com/user-attachments/assets/df7e4cf2-7650-461b-9a8e-b565264b93ad)

### Even/Odd:
#include< iostream > <br /> 
// Yaman Hasan Ansari PRN: 23070123155 <br /> 
using namespace std: <br /> 
int main() <br /> 
{ <br /> 
int n; <br /> 
cout<<"Enter n"<<endl; <br />  
cin>>n; <br /> 
if (n%2==0){ <br /> 
cout<<endl<<"even"; <br /> 
} <br /> 
else{ <br /> 
cout<<endl<<"odd"; <br /> 
} <br /> 
return 0; <br /> 
} <br /> 

### Output:
![Screenshot 2024-07-30 094451](https://github.com/user-attachments/assets/dce3eb9a-4ce2-46a9-bad9-35b0a49f39c8)

### Leap year:
#include<iostream> <br /> 
//Yaman Hasan Ansari PRN: 23070123155 <br /> 
using namespace std; <br /> 
int main() <br /> 
{ <br /> 
int year; <br /> 
cout<<endl<<"Enter the year"; <br /> 
cin>>year; <br /> 
if (year%400==0 and year%100!=0 or year%4==0){ <br /> 
cout<<"LEAP year"; <br /> 
} <br /> 
else{ <br /> 
cout<<"Non leap year"; <br /> 
} <br /> 
return 0; <br /> 
} <br /> 

### Output:
![Screenshot 2024-07-30 094804](https://github.com/user-attachments/assets/94038677-9b9e-478b-bcbd-ce4ccff9d8c1)


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

