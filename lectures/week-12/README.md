<h2 align=center>Week 12</h2>

<h1 align=center><code>struct</code>, <code>enum</code>, Arrays, Array/Pointer Duality</h1>

<p align=center><strong><em>Song of the day</strong>: <a href="https://youtu.be/L0tcMxp8Iy8?si=4GItlGCiGh9mQdtM"><strong><u>いかないで (Don't Go)</u></strong></a> by 想太 (Sōta) [feat. 歌愛ユキ] (2013)</em></p>

---

### Sections

1. [**The `struct` Types**](#part-1-the-struct-types)
2. [**The `enum` Types**](#part-2-the-enum-type)
3. [**Passing Arrays By Reference**](#part-3-passing-arrays-by-reference)

---

### Part 1: _The `struct` Types_

A struct in C is a user-defined data type that allows you to group different variables of different data types under a single name. This makes it easier to handle related pieces of information as a single unit. Structs are commonly used to represent complex data structures such as records, objects, or entities in a program. C does not have object-oriented programming, so this is pretty much as close as we can get to it.

To create a struct, you first use the `struct` keyword, followed by the struct tag (the name of the struct) and a list of member variables enclosed in curly braces. Each member variable is declared similarly to regular variables, with a data type and a name.

Here is an example of a simple struct representing a person with attributes such as name, age, and gender:

```c
struct Person 
{
    char name[50];
    int age;
    char gender;
};
```

In this example, we created a struct called `Person` with three member variables: `name` (an array of characters to store the name), `age` (an integer to store the age), and `gender` (a character to store the gender).

To create an instance of the `Person` struct, you can declare a variable of type `struct Person` and assign values to its member variables:

```c
#include <stdio.h>
#include <string.h>  // for strcopy

const int MAX_NAME_LENGTH = 50;

struct Person 
{
    char name[MAX_NAME_LENGTH];
    int age;
    char gender;
};


int main() 
{
    struct Person alice;
    
    strcpy(alice.name, "Alice Sara Ott");
    alice.age = 33;
    alice.gender = 'F';
    
    printf("Name: %s\n", alice.name);
    printf("Age: %d\n", alice.age);
    printf("Gender: %c\n", alice.gender);
    
    return 0;
}
```

<sub>**Note**: In C, the `strcpy` function is used to copy a string from one location to another. When dealing with uninitialized char arrays, it is important to ensure that the destination array has enough space to hold the copied string. If you attempt to copy a string into an uninitialized char array using `strcpy`, you risk overwriting memory that is not part of the array, which can lead to undefined behavior and potentially crash your program. It is always best practice to initialize the destination `char` array with enough space to hold the string you want to copy before using `strcpy`.</sub>

In this example, we declared a variable `alice` of type `struct Person` and assigned values to its member variables using the dot operator (`.`). We then printed out the values stored in each member variable:

```
Name: Alice Sara Ott
Age: 33
Gender: F
```

Structs can also be used to create more complex data structures. For example, you can create a struct representing a point in a 2D coordinate system:

```c
struct Point 
{
    int x;
    int y;
};
```

You can then create instances of the `Point` struct and use them to perform operations such as calculating distances or drawing shapes on a coordinate plane:

```c
#include <stdio.h>
#include <math.h>  // for sqrt and ppw

struct Point 
{
    int x;
    int y;
};

int main() 
{
    struct Point p1 = {2, 3};
    struct Point p2 = {5, 7};

    // Calculate the distance between p1 and p2 using the Pythagorean theorem
    double distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("The distance between p1 (%d, %d) and p2 (%d, %d) is %.2f units.\n", 
           p1.x, p1.y, 
           p2.x, p2.y, 
           distance);

    return 0;
}
```

In this example, we have defined a `Point` struct that represents a point in a 2D coordinate system with `x` and `y` coordinates. We then create two instances of the `Point` struct, `p1` and `p2`, with different coordinates. We calculate the distance between `p1` and `p2` using the Pythagorean theorem formula, and print the result to the console:

```
The distance between p1 (2, 3) and p2 (5, 7) is 5.00 units.
```

Structs in C are great for organizing and representing data in a clear and structured manner. They allow you to group related variables together under a single name, making your code more readable and maintainable. By using structs, you can create complex data structures that accurately model real-world entities or relationships in your programs.

<br>

### Part 2: _The `enum` Type_

In C, an `enum` (short for enumeration) is a user-defined data type that consists of a set of named integer constants. Enums are useful for defining a group of related integer values, making the code more readable and maintainable by giving meaningful names to constant values.

To define an enum in C, you use the `enum` keyword followed by the enum name and a list of named constant values enclosed in curly braces. Each constant value is separated by a comma. For example:

```c
enum Weekday
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};
```

In this example, we define an enum called `Weekday` with seven named constant values corresponding to the days of the week. By default, the first constant value (`MONDAY`) is assigned the value 0, and subsequent values are incremented by one.

You can use enums in switch statements to make the code more readable and maintainable. For example:

```c
#include <stdio.h>

enum Direction 
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

int main() 
{
    enum Direction dir = LEFT;

    switch (dir) {
        case UP:
            printf("Moving up\n");
            break;
        case DOWN:
            printf("Moving down\n");
            break;
        case LEFT:
            printf("Moving left\n");
            break;
        case RIGHT:
            printf("Moving right\n");
            break;
        default:
            printf("Invalid direction\n");
    }
    return 0;
}
```

In this example, we define an enum called `Direction` with four named constant values representing different directions. We then create a variable `dir` of type `Direction` and set it to `LEFT`. We use a switch statement to check the value of `dir` and print a corresponding message based on the direction:

```
Moving left
```

Enums IMPROVE code readability and maintainability by giving meaningful names to constant values. They are commonly used in `switch` statements to handle different cases based on `enum` values.

<br>

### Part 3: _Array / Pointer Duality_

In C, arrays and pointers are closely related concepts, so much so that they exhibit what is known as array/pointer duality. This duality stems from the fact that in C, arrays are essentially treated as pointers to the first element of the array. This means that arrays and pointers can often be used interchangeably in many contexts.

When passing arrays by reference in C, you are essentially passing a pointer to the memory location where the array is stored, rather than passing the actual contents of the array. This means that any modifications made to the array within a function will directly affect the original array outside of the function.

To pass an array by reference in C, you need to use pointers. Here's an explanation of how this works using `char` arrays and `int` arrays:

1. Passing `char` arrays by reference:
    Let's say we have a function that takes a `char` array as a parameter and modifies it in some way. To pass the `char` array by reference, we need to declare the function parameter as a pointer to a `char` array. Here's an example:

    ```c
    #include <stdio.h>

    void modify_char_array(char* arr, int size) 
    {
        for (int i = 0; i < size; i++) {
            arr[i] = 'X'; // Modify each character in the array to 'X'
        }
    }

    int main() 
    {
        char char_array[] = "Hello, World!";
        printf("Before modification: %s\n", char_array);

        // Pass the array by reference to the modify_char_array function
        modify_char_array(char_array, sizeof(char_array) - 1);

        printf("After modification: %s\n", char_array);

        return 0;
    }
    ```

    In the above example, we declare a function `modify_char_array()` that takes a pointer to a `char` array as a parameter. Inside the function, we loop through the array and modify each element to `'X'`. When we call the function in `main()`, we pass the `char_array` by reference using `char_array`. This means that any modifications made in the function will directly affect the original `char_array` outside of the function.

    ```
    Before modification: Hello, World!
    After modification: XXXXXXXXXXXXX
    ```

2. Passing `int` arrays by reference:
    Similarly, we can pass `int` arrays by reference in C using pointers. Here's an example:

    ```c
    #include <stdio.h>

    void modify_int_array(int* arr, int size) 
    {
        for (int i = 0; i < size; i++) 
        {
            arr[i] *= 2; // Multiply each element in the array by 2
        }
    }

    int main()
    {
        int int_array[] = {1, 2, 3, 4, 5};

        printf("Before modification: ");
        for (int i = 0; i < 5; i++) 
        {
            printf("%d ", int_array[i]);
        }
        printf("\n");

        // Pass the array by reference to the modifyIntArray function
        modify_int_array(int_array, 5);

        printf("After modification: ");
        for (int i = 0; i < 5; i++) 
        {
            printf("%d ", int_array[i]);
        }
        printf("\n");

        return 0;
    }
    ```

    In this example, we declare a function `modify_int_array()` that takes a pointer to an `int` array as a parameter. Inside the function, we loop through the array and multiply each element by 2. When we call the function in `main()`, we pass the `int_array` by reference using `int_array`. Any modifications made in the function will directly affect the original `int_array` outside of the function.

Passing arrays by reference in C involves passing a pointer to the array to the function, allowing the function to directly modify the original array. This can be useful for avoiding unnecessary copying of large arrays and for making changes to arrays within functions.