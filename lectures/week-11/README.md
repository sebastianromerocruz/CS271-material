<h2 align=center>Week 11</h2>

<h1 align=center>Functions, Parameter Passing, Pointers</h1>

<p align=center><strong><em>Song of the day</strong>: <a href="https://youtu.be/8ZP5eqm4JqM?si=GinLsPy4AJyfPxg1"><strong><u>Bibbidiba</u></strong></a> by Hoshimachi Suisei (2024)</em></p>

---

### Sections

1. [**Functions In C**](#part-1-functions-in-c)
2. [**Pointers**](#part-2-pointers)
3. [**Passing By Reference**](#part-3-passing-by-reference)
4. [**Passing Arrays By Reference**](#part-4-passing-arrays-by-reference)

---

### Part 1: _Functions In C_

As you should already know, a function is a block of code that performs a specific task. Functions provide modularity to the code by breaking it into smaller, manageable parts. These smaller parts can be easily reused in different parts of the program, enabling the development of more complex applications.

In a function, you can pass values as **parameters** to the function. The parameters are essentially variables that hold values passed from the calling code. When a function is called, the values of the parameters are copied into the function's local variables. 

This is an important distinction we should keep in mind, and is known as **passing by value**, as only the value of the variable is passed, not the actual variable itself.

Let's look at an example to understand how passing by value works with different data types:

#### Passing An `int` Value As A Parameter

```c
#include <stdio.h>

void increment(int num)
{
    num++;
    printf("Incremented value: %d\n", num);
}

int main() 
{
    int number = 5;

    increment(number);
    printf("Original value: %d\n", number);

    return 0;
}
```
Output:
```
Incremented value: 6
Original value: 5
```

In the above example, the `increment` function takes an `int` parameter. When we pass the `number` variable from `main()`, its value is copied to the `num` parameter within the `increment` function. Any changes made to `num` do not affect the original `number` variable.

#### Passing A `float` Value As A Parameter

```c
#include <stdio.h>

void multiply(float num)
{
    num *= 2;
    printf("Multiplied value: %.2f\n", num);
}

int main() 
{
    float number = 3.5;

    multiply(number);
    printf("Original value: %.2f\n", number);

    return 0;
}
```
Output:
```
Multiplied value: 7.00
Original value: 3.50
```

Similarly to the `int` example, the `multiply` function takes a `float` parameter. The `number` value is copied into the `num` parameter, and any modifications to `num` do not affect the original `number` variable.

#### Passing A `char` Value As A Parameter

```c
#include <stdio.h>

void change_case(char c) 
{
    if (c >= 'a' && c <= 'z') 
    {
        c = c - 'a' + 'A';
    }

    printf("Changed character: %c\n", c);
}

int main() 
{
    char letter = 'b';

    change_case(letter);
    printf("Original character: %c\n", letter);

    return 0;
}
```

Output:

```
Changed character: B
Original character: b
```

In this example, the `change_case` function takes a `char` parameter. The `letter` value is copied into the `c` parameter. However, changing the value of `c` within the function does not affect the original `letter` variable.

#### Passing A `char[]` (String) As A Parameter

```c
#include <stdio.h>

void capitalize(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    printf("Capitalized string: %s\n", str);
}

int main() 
{
    char text[] = "hello";

    capitalize(text);
    printf("Original string: %s\n", text);

    return 0;
}
```

Output:

```
Capitalized string: HELLO
Original string: hello
```

When passing a `char[]` (a string) as a parameter to a function, the entire array is not passed, but a pointer to the first element of the array is passed. Any modifications made to the array within the function will affect the original array passed from `main()`.

---

When passing values as parameters to functions in C, the values are passed by value. Any changes made to the parameters within the function do not affect the original variables that were passed. This behavior ensures that the original data remains unchanged, allowing for safer function interactions and modular code design.

<br>

### Part 2: _Pointers_

#### Syntax

Oooooh boy, pointers. This is one of those topics that every computer scientist should know about, but are so very scared of talking about.

Pointers, in essence, are variables that store _memory addresses_ rather than actual data values. They are used to indirectly reference a location in memory. 

In C, a pointer variable is declared by adding an asterisk (`*`) before the variable name. For example:

```c
int *ptr;
float *ptr_float;
char *ptr_char;
char *ptr_array;
```

To assign a memory address to a pointer variable, you can use the address-of operator (`&`) followed by the variable name. For example:

```c
int num = 10;
ptr = &num;
```

In this example, the pointer variable `ptr` now holds the memory address of the variable `num`. 

To access the value stored at the memory address pointed to by a pointer, you can use the dereference operator (`*`) before the pointer variable name. For example:

```c
printf("%d", *ptr);
```

This will print the value stored at the memory address pointed to by `ptr`, which is the value of `num` (in this case, `10`).

#### `char[]` vs `char*`

In C, `char` arrays can be represented as both `char[]` and `char*` due to the way arrays and pointers work in the language. 

1. `char[]` representation:
    When you declare a `char` array in C, you are essentially creating a contiguous block of memory to store characters. This memory block is represented by the array name and can be accessed using array index notation. The array name itself acts as a pointer to the first element of the array.

    Example:
    ```c
    char name[] = "John";
    ```

    Memory representation:

    ```
    +-----+-----+-----+-----+-----+
    name | 'J' | 'o' | 'h' | 'n' | '\0' |
    +-----+-----+-----+-----+-----+
    ```

2. `char*` representation:
    In C, arrays are converted to pointers when passed to functions or used in expressions. Therefore, when you use the array name in an expression, it decays into a pointer to the first element of the array. Since a pointer is just a memory address pointing to a location, the `char*` representation allows you to easily access or manipulate the contents of the array by moving the pointer through the memory location.

    Example:
    ```c
    char name[] = "John";
    char *ptr = name; // equivalent to &name[0]
    ```

    Memory representation:

    ```
    +-----+-----+-----+-----+-----+
    ptr  | 'J' | 'o' | 'h' | 'n' | '\0' |
    +-----+-----+-----+-----+-----+
    ```

    In both representations, the underlying memory layout remains the same. The main difference lies in how the array is accessed or manipulated - using array index notation for `char[]` and pointer arithmetic for `char*`.

To demonstrate using pointers with different data types, consider the following examples:

```c
// Pointer to an int
int a = 5;
int *ptr_int;
ptr_int = &a;
printf("%d", *ptr_int); // Output: 5

// Pointer to a float
float b = 3.14;
float *ptr_float;
ptr_float = &b;
printf("%f", *ptr_float); // Output: 3.140000

// Pointer to a char
char c = 'A';
char *ptr_char;
ptr_char = &c;
printf("%c", *ptr_char); // Output: A

// Pointer to a char array
char string[5] = "Hello";
char *ptr_array;
ptr_array = string;
printf("%s", ptr_array); // Output: Hello
```

In the last example, `ptr_array` points to the first element of the char array `string`, which allows us to print the entire string using the pointer. 

<br>

### Part 3: _Passing By Reference_

In C, **passing by reference** is a way to allow a function to modify the value of a variable that is passed to it. When a variable is passed by reference, the function receives the memory address of the variable rather than a copy of its value. This allows the function to directly access and modify the contents of the variable in memory.

To pass a variable by reference in C, you need to use pointers. A pointer is a special type of variable that stores memory addresses. When you pass a variable by reference, you pass a pointer to the variable instead of the variable itself.

Here's an example of passing an `int` by reference in C:

```c
#include <stdio.h>

void increment(int *num) 
{
    (*num)++; // Increment the value at the address pointed to by num
}

int main() {
    int x = 5;

    printf("Before increment: %d\n", x);
    increment(&x); // Pass the address of x to the increment function
    printf("After increment: %d\n", x);
    
    return 0;
}
```

In this example, the `increment` function takes a pointer to an integer as a parameter. Inside the function, we dereference the pointer using the `*` operator to access the value at the address pointed to by `num` and then increment that value.

Similarly, you can pass `float` and `char` variables by reference using pointers:

```c
#include <stdio.h>

void changeFloat(float *num)
{
    (*num) *= 2; // Multiply the value at the address pointed to by num by 2
}

void changeChar(char *c) 
{
    (*c) = 'B'; // Change the value of the char at the address pointed to by c to 'B'
}

int main() 
{
    float pi = 3.14;
    char ch = 'A';
    
    changeFloat(&pi); // Pass the address of y to the changeFloat function
    changeChar(&ch); // Pass the address of ch to the changeChar function
    
    printf("Changed float: %.2f\n", pi);
    printf("Changed char: %c\n", ch);

    return 0;
}
```

In the above example, the `changeFloat` function multiplies the value at the address pointed to by `num` by 2, and the `changeChar` function changes the value of the `char` at the address pointed to by `c` to 'B'.

Passing variables by reference in C using pointers is commonly used in situations where you want to modify the original value of a variable within a function.

<br>

### Part 4: _Passing Arrays By Reference_

When passing arrays by reference in C, you are essentially passing a pointer to the memory location where the array is stored, rather than passing the actual contents of the array. This means that any modifications made to the array within a function will directly affect the original array outside of the function.

To pass an array by reference in C, you need to use pointers. Here's an explanation of how this works using `char` arrays and `int` arrays:

1. Passing `char` arrays by reference:
    Let's say we have a function that takes a `char` array as a parameter and modifies it in some way. To pass the `char` array by reference, we need to declare the function parameter as a pointer to a `char` array. Here's an example:

    ```c
    #include <stdio.h>

    void modifyCharArray(char* arr, int size) 
    {
        for (int i = 0; i < size; i++) {
            arr[i] = 'X'; // Modify each character in the array to 'X'
        }
    }

    int main() 
    {
        char charArray[] = "Hello, World!";
        printf("Before modification: %s\n", charArray);

        // Pass the array by reference to the modifyCharArray function
        modifyCharArray(charArray, sizeof(charArray));

        printf("After modification: %s\n", charArray);

        return 0;
    }
    ```

    In the above example, we declare a function `modifyCharArray` that takes a pointer to a `char` array as a parameter. Inside the function, we loop through the array and modify each element to 'X'. When we call the function in `main`, we pass the `charArray` by reference using `charArray`. This means that any modifications made in the function will directly affect the original `charArray` outside of the function.

2. Passing `int` arrays by reference:
    Similarly, we can pass `int` arrays by reference in C using pointers. Here's an example:

    ```c
    #include <stdio.h>

    void modifyIntArray(int* arr, int size) 
    {
        for (int i = 0; i < size; i++) 
        {
            arr[i] *= 2; // Multiply each element in the array by 2
        }
    }

    int main()
    {
        int intArray[] = {1, 2, 3, 4, 5};

        printf("Before modification: ");
        for (int i = 0; i < 5; i++) 
        {
            printf("%d ", intArray[i]);
        }
        printf("\n");

        // Pass the array by reference to the modifyIntArray function
        modifyIntArray(intArray, 5);

        printf("After modification: ");
        for (int i = 0; i < 5; i++) 
        {
            printf("%d ", intArray[i]);
        }
        printf("\n");

        return 0;
    }
    ```

    In this example, we declare a function `modifyIntArray` that takes a pointer to an `int` array as a parameter. Inside the function, we loop through the array and multiply each element by 2. When we call the function in `main`, we pass the `intArray` by reference using `intArray`. Any modifications made in the function will directly affect the original `intArray` outside of the function.

Passing arrays by reference in C involves passing a pointer to the array to the function, allowing the function to directly modify the original array. This can be useful for avoiding unnecessary copying of large arrays and for making changes to arrays within functions.