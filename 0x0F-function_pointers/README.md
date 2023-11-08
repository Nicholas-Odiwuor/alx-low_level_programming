# Function Pointers in C

Function pointers are a powerful and versatile features in the C programming language. 
They allow you to store and call functions dynamically at runtime, making them a valuable tool for various programming tasks.

## About Function Pointers

A function pointer is a variable that can hold the address of a function. 
Just like data pointers point to data, function pointers point to executable code. 
This enables dynamic function invocation and is commonly used for implementing callbacks, dynamic function selection, and more.

## Declaring Function Pointers

In C, you declare a function pointer using the following syntax:

```c
return_type (*pointer_name)(parameter_type1, parameter_type2, ...);

