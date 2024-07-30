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


## Explanation:

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
```
#include<iostream> 
// Yaman Hasan Ansari PRN: 23070123155 
using namespace std; 
int main() 
{ 
cout<<"Hello World"; 
return 0; 
} 
```
### Output:
![Screenshot 2024-07-30 093300](https://github.com/user-attachments/assets/ff38c0c9-9f54-4790-a8b0-328d39193b8c)

### Sum and Average of two numbers:
```
#include<iostream> 
//Yaman Hasan Ansari PRN:23070123155 
using namespace std; 
int main() 
{ 
int a,b; 
cout<<"Enter a and b"<<endl; 
cin>>a; 
cin>>b; 
int sum1 = a+b; 
cout<<"The sum of a and b is"<<sum1; 
int avg = (a+b)/2; 
cout<<endl<< "The average of a and b is:"<<avg; 
return 0; 
} 
```
### Output:
![Screenshot 2024-07-30 094212](https://github.com/user-attachments/assets/df7e4cf2-7650-461b-9a8e-b565264b93ad)

### Even/Odd:
```
#include<iostream>  
// Yaman Hasan Ansari PRN: 23070123155  
using namespace std:  
int main()  
{  
int n;  
cout<<"Enter n"<<endl;   
cin>>n;  
if (n%2==0){  
cout<<endl<<"even";  
}  
else{  
cout<<endl<<"odd";  
}  
return 0;  
}  
```
### Output:
![Screenshot 2024-07-30 094451](https://github.com/user-attachments/assets/dce3eb9a-4ce2-46a9-bad9-35b0a49f39c8)

### Leap year:
```
#include<iostream>  
//Yaman Hasan Ansari PRN: 23070123155  
using namespace std;  
int main()  
{  
int year;  
cout<<endl<<"Enter the year";  
cin>>year;  
if (year%400==0 and year%100!=0 or year%4==0){  
cout<<"LEAP year";  
}  
else{  
cout<<"Non leap year";  
}  
return 0;  
}  
```
### Output:
![Screenshot 2024-07-30 094804](https://github.com/user-attachments/assets/94038677-9b9e-478b-bcbd-ce4ccff9d8c1)


## Conclusion:
These simple programs are used by us as introductory excersies to learn the basic structure and syntax of C++. We learnt how to use the input/output commands. Arithematic operators, logical operators and conditional statements in this experiment. 





# 2. EXPERIMENT 2



## Aim:
To use the sizeof operator to display the sizes of fundamental data types in C++. This helps us gain further knowledge about the memory allocation for different data types in C++.


## Apparatus:
VS Code, Github


## Theory:
The sizeof operator is used to determine the size of a data types in bytes. Understanding this is important for optimizing the program with better memory management. Here are some common data types of C++ and their sizes:

### char:
Represents a single character and occupies 1 byte of memory.

### int:
A standard integer type the size of which can vary but it mostly occupies 4 bytes of memory.

### short int:
A short integer type occupies 2 bytes of memory.

### long:
A long integer type can occupy 4 or 8 bytes of memory.

### long long:
A long long integer type occupies 8 bytes of memory.

### float:
A float type occupies 4 bytes of memory.

### double:
A double type occupies 8 bytes of memory.

### long double:
A long double type can vary in size, it can occupy 8,12 or 16 bytes of memory.

### bool:
Represents a Boolean value which is either true or false, it occupies 1 byte. 

The sizes of these data types can differ depending on the compiler. This program shows code that prints the size of each data type using sizeof operator, allowing users to see the actual sizes of the various data types.

## Explanation:

### sizeof operator:
In this program we input values in various different datatypes such as int, short int, unsigned short int, long long int, char, wchar_t, float, double, long double, unsigned long long int. We then use the sizeof operator to print the ammount of memory that each data type occupies. We also use input values into different storage types such as static int, register int and extern double.

## Code:

### Size of various data types:
```
#include<iostream> 
//Yaman Hasan Ansari 
// PRN: 23070123155 
using namespace std; 
int main() 
{ 
   int a = 10; 
   short int a1 = 15; 
   unsigned short  int a2 = 20; 
   long long int a3; 
   char b = 'B'; 
   wchar_t b1; 
   float c = 3.14; 
   double d; 
   long double d1; 
   unsigned long long int d2; 


  static int e1; 
  register int e2 = 100; 
  extern float e3 ; 
  
   cout<<endl<<sizeof(a); 
   cout<<endl<<sizeof(a1); 
   cout<<endl<<sizeof(a2); 
   cout<<endl<<sizeof(a3); 
   cout<<endl<<sizeof(b); 
   cout<<endl<<sizeof(b1); 
   cout<<endl<<sizeof(c); 
   cout<<endl<<sizeof(d); 
   cout<<endl<<sizeof(d1); 
   cout<<endl<<sizeof(d2); 
   cout<<endl<<sizeof(e1); 
   cout<<endl<<sizeof(e2); 
   cout<<endl<<sizeof(e3); 
    return 0; 
} 
```
### Output:
![Screenshot 2024-07-30 101642](https://github.com/user-attachments/assets/16b3faed-a6b2-407d-9e64-995822d63af1)


## Conclusion:
This program demonstrates the use of sizeof operator to help determine the size of various data types in C++. Understanding the sizes of these data types helps us to make better memory management decisions and optimizing our programs.





# 3. EXPERIMENT 3.



## Aim:
To demonstrate the use of arithmetic operators, assignment operators, and comparison operators in C++.

## Apparatus:
VS Code,Github


## Theory:
This program demonstrates the use of different types of operators in C++:

### Arithmetic Operators:
These include +(addition), -(subtraction), *(multiplication), /(division), and % (modulus). They are used to perform basic mathematical operations in C++.

### Assignment Operators:
These operators are used to assign values to variables. The basic assignment operator = assigns a value to a variable, while operators like +=, -=, *=, and /= combine  the particular arithmetic operation with assignment.

### Comparison Operators:
These include ==(equal to), !=(not equal to), >(greater than), <(less than), >=(greater than or equal to), and <=(less than or equal to). They are used to compare values and give the result as a boolean value either true or false.


## Explanation:

### Arithematic,assignment,comparision operators:
In this program we use the various different types of operators such as Arithematic operators, Assignment operators and comparision operators in order to learn and understand thier syntax and working in C++. We then print thier outputs using the "cout<<" command.

## Code:

### Use of arithematic,assignment and comparision operators:
```
#include<iostream> 
using namespace std; 

//Name: Yaman Hasan Ansari 
//PRN:23070123155 

int main() { 
    // Arithmetic Operators 
    int a = 10; 
    int b = 5; 
    
    cout<< "Arithmetic Operators:" <<endl; 
    cout<< "a + b = " << a + b <<endl; 
    cout<< "a - b = " << a - b <<endl; 
    cout<< "a * b = " << a * b <<endl; 
    cout<< "a / b = " << a / b <<endl; 
    cout<< "a % b = " << a % b <<endl; 

    // Assignment Operators 
    int c = a; 
    c += b; 
    cout<< "Assignment Operators:" <<endl; 
    cout<< "c after c += b: " << c <<endl; 
    c -= b; 
    cout<< "c after c -= b: " << c <<endl; 
    c *= b; 
    cout<< "c after c *= b: " << c <<endl; 
    c /= b; 
    cout<< "c after c /= b: " << c <<endl; 
    c %= b; 
    cout<< "c after c %= b: " << c <<endl; 

    // Comparison Operators 
    cout<< "Comparison Operators:" <<endl; 
    cout<< "a == b: " << (a == b) <<endl; 
    cout<< "a != b: " << (a != b) <<endl; 
    cout<< "a > b: " << (a > b) <<endl; 
    cout<< "a < b: " << (a < b) <<endl; 
    cout<< "a >= b: " << (a >= b) <<endl; 
    cout<< "a <= b: " << (a <= b) <<endl; 

    return 0; 
} 
```

### Output:
![Screenshot 2024-07-30 104208](https://github.com/user-attachments/assets/723cba7e-1d94-412d-ac97-d71e6822ae03)


## Conclusion:
This program provides a overview of how different types of operators are used in C++. Understanding these operators is important for performing various operations and implementing logic in C++ programs. This program serves as a practical guide for beginners to get familiar with operators and their applications in C++.





# 4. EXPERIMENT 4



## Aim:
To demonstrate the use of bitwise operators in C++.


## Apparatus:
Vs Code, Github


## Theory:
Bitwise operators in C++ perform operations in the binary form of integers. These operators can be useful in optimization and situations where performance and memory usage are critical. Here's an overview of common bitwise operators:

### Bitwise AND (&):
Performs a bitwise AND operation between two integers. If both the bits are 1 then the result of the operation is 1 otherwise the result bit is 0.

### Bitwise OR (|):
Performs a bitwise OR operation.If atleast one of the bits is 1 then the result of the operation is 1.

### Bitwise XOR (^):
Performs a bitwise XOR (exclusive OR) operation. If both the bits are different the result of the operation is 1 otherwise the result bit is 0.

### Bitwise NOT (~):
Performs a bitwise NOT operation, also known as bitwise complement. It inverts all the bits. The result of the bit is complimentary to itself, for example if a bit is 1 its result bit is 0.

### Left Shift (<<):
Shifts the bits of the left operand to the left by the number of positions specified by the right operand. New bits on the right are set to 0.

### Right Shift (>>):
Shifts the bits of the left operand to the right by the number of positions specified by the right operand. The behavior of the leftmost bits depends on whether the type is signed or unsigned.


## Explanation: 
This program covers the basic bitwise operators such as AND, OR, XOR, NOT, Left shift, Right shift. We give two inputs and demonstrate how these bitwise operations function and print thier result.


## Code:
```
#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155

int main()
{
    int a = 5;
    int b = 3;
    int AND = a&b;
    int OR = a|b;
    int XOR = a^b;
    int NOT = ~a;
    int LEFT_SHIFT = a<<b;
    int RIGHT_SHIFT = a>>b;
    
    cout<<"AND:"<<AND<<endl;
    cout<<"OR:"<<OR<<endl;
    cout<<"XOR:"<<XOR<<endl;
    cout<<"NOT:"<<NOT<<endl;
    cout<<"LEFT_SHIFT:"<<LEFT_SHIFT<<endl;
    cout<<"RIGHT_SHIFT:"<<RIGHT_SHIFT<<endl;

  return 0;
}
```

## Output:
![Screenshot 2024-07-30 142241](https://github.com/user-attachments/assets/63b966cf-5d42-40aa-bb87-975a901e47a3)


## Conclusion:
This program helps us understand how bitwise operators can be used in C++. These bitwise operations can be used for performance optimization as they pack multiple values in a single variable making the program more memory efficient.
