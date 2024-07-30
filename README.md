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
