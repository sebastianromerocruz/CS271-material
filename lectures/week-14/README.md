<h2 align=center>Week 14</h2>

<h1 align=center>External References, Linkage Editing, Static Variables</h1>

<p align=center><strong><em>Song of the day</strong>: <a href="https://youtu.be/QkdDWaBtK04?si=LeEs5aeHO1BrziBz"><strong><u>きゅうくらりん (Cover)</u></strong></a> by 星街すいせい [Suisei Hoshimachi] (2024)</em></p>

---

### Sections

1. [**External References**](#ext)
2. [**Understanding Linkage Editing**](#link)
3. [**Static Variable**](#static)

---

<a id="ext"></a>

### Part 1: _External References_

In C programming, external references, also known as "externals," allow you to declare functions and variables in one source file and use them in other source files. This separation of declaration and definition enables code modularity, reusability, and collaboration in large-scale projects.

Consider a scenario where you're developing a C program for managing student records. You have multiple source files:

- `main.c`: Contains the main function and user interface.
- `student.c`: Defines functions for student management.
- `grades.c`: Defines functions for grade calculation.

You want to use functions and variables defined in `student.c` and `grades.c` within `main.c`.

```c
// student.c
#include <stdio.h>

int student_count = 0; // Global variable declaration

void add_student() 
{
    student_count++;
    printf("Student added! Total students: %d\n", student_count);
}
```

```c
// grades.c
#include <stdio.h>

void calculate_grade()
{
    printf("Calculating grades...\n");
    // Logic for grade calculation
}
```

```c
// main.c
#include <stdio.h>

extern int student_count; // External reference to student_count in student.c
extern void add_student(); // External reference to add_student() in student.c
extern void calculate_grade(); // External reference to calculate_grade() in grades.c

int main()
{
    printf("Student Management System\n");
    
    add_student(); // Calling function from student.c
    calculate_grade(); // Calling function from grades.c
    
    return 0;
}
```

1. In `student.c` and `grades.c`, we define the `add_student()` function and the `calculate_grade()` function, respectively.
2. We also declare a global variable `student_count` in `student.c`.
3. In `main.c`, we use the `extern` keyword to declare external references to `student_count`, `add_student()`, and `calculate_grade()`. This informs the compiler that these entities are defined in other source files.
4. By declaring these externals, we can use the functions and variables defined in `student.c` and `grades.c` within `main.c`.
5. During the compilation process, all source files are compiled separately, and then the linker combines them to generate the final executable. The linker resolves the external references by linking them to their corresponding definitions.

<br>

<a id="link"></a>

### Part 2: _Understanding Linkage Editing_

In C programming, the compilation process involves translating source code into object files containing machine code and symbols. Linkage editing, often referred to as "linking," combines these object files and resolves symbolic references to create a single executable file. Consider a scenario where you're developing a C program that includes multiple source files and external libraries. You have the following files:

- `main.c`: Contains the main function and user interface.
- `functions.c`: Defines additional functions used in the program.
- `functions.h`: Header file containing function prototypes.

You also want to use a precompiled library, `mathlib.a`, which provides mathematical functions.

```c
// functions.h
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int add(int a, int b);
int subtract(int a, int b);

#endif
```

```c
// functions.c
#include "functions.h"

int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }
```

```c
// main.c
#include <stdio.h>
#include "functions.h"

int main() 
{
    int result_add = add(5, 3);
    int result_subtract = subtract(10, 4);

    printf("Result of addition: %d\n", result_add);
    printf("Result of subtraction: %d\n", result_subtract);

    return 0;
}
```

#### Compilation and Linking Process

1. **Compilation**: Each source file (`main.c` and `functions.c`) is compiled separately into object files (`main.o` and `functions.o`) using the compiler (`gcc` for example). During this process, the compiler checks for syntax errors and generates machine code and symbol tables.

    ```bash
    gcc -c main.c -o main.o
    gcc -c functions.c -o functions.o
    ```

2. **Linking**: The object files and any required libraries are linked together to create the final executable file (`program`). The linker resolves symbolic references between different object files and libraries.

    ```bash
    gcc main.o functions.o -o program
    ```

#### Execution

After the linkage editing process, the resulting executable `program` can be executed to produce the desired output.

```bash
./program
```

<br>

<a id="static"></a>

### Part 3: _Static Variables_

In C, a static variable is a variable that retains its value between function calls. Unlike local variables, which are created and destroyed each time a function is called, static variables persist throughout the program's execution. Static variables are declared using the `static` keyword.

#### Example 1: Static Variable Inside a Function

```c
#include <stdio.h>

void increment() 
{
    static int count = 0;  // Static variable
    count++;
    printf("Count: %d\n", count);
}

int main() 
{
    increment();  // Output: Count: 1
    increment();  // Output: Count: 2
    increment();  // Output: Count: 3
    return 0;
}
```

In this example, the `count` variable inside the `increment()` function is static. It retains its value (`0`) between function calls and increments each time the function is called.

#### Example 2: Static Variable Outside a Function

```c
#include <stdio.h>

static int count = 0;  // Static variable outside any function

void increment() 
{
    count++;
    printf("Count: %d\n", count);
}

int main() 
{
    increment();  // Output: Count: 1
    increment();  // Output: Count: 2
    increment();  // Output: Count: 3
    return 0;
}
```

In this example, the `count` variable is declared outside any function with the `static` keyword. It behaves similarly to the static variable inside a function, retaining its value between function calls.

### Common Use Cases

- **Counter Variables**: Static variables are often used to count function invocations or iterations in loops.
  
- **Memory Management**: Static variables can be used for memory allocation and deallocation in memory management functions.

- **Cache Variables**: Static variables can store cached values or results of expensive computations to avoid redundant calculations.