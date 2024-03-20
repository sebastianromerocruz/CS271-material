<h2 align=center>Week 09</h2>

<h1 align=center>Operators, Selections, Loops</h1>

<p align=center><strong><em>Song of the day</strong>: <a href="https://youtu.be/krxU5Y9lCS8?si=6OIopQ6cc6wTyeeN"><strong><u>You Can't Always Get What You Want</u></strong></a> by The Rolling Stones (1969)</em></p>

### Sections

1. [**Operators In C**](#operators-in-c)
    - [**Arithmetic Operators**](#arithmetic-operators)
    - [**Relational Operators**](#relational-operators)
    - [**Logical Operators**](#logical-operators)
    - [**Bitwise Operators**](#bitwise-operators)
    - [**Assignment Operators**](#assignment-operators)
    - [**Other Operators**](#other-operators)
    - [**Operator Precedence**]
2. [**Selections**](#selections)
    - [**`if` And `else`**](#if-and-else)
    - [**`switch`-Statements**](#switch-statements)
3. [**Loops**](#loops)
    - [**`while`-Loops**](#while-loops)
    - [**`for`-Loops**](#for-loops)

<br>

### Operators in C

Now that we know how C represents data through its type system, let's look into how it performs operations on it. C has basically seven types of operators, some of which we will explore more in-depth than others.

#### Arithmetic Operators

Arithmetic operators refer to those that perform mathematical operations on 1, 2, or more operands. Let's look at them in order of precedence:

1. **Unary Increment (`++`) / Decrement (`--`) Operators**

   These special operators increase/decrease the value of a number by 1, and they are called "unary" because they only take one operand. Perhaps you learned this from your Java days, but there are two versions of the increment/decrement operators: prefix and postfix.

   The _postfix_ increment/decrement operator goes after its operand. The thing to keep in mind here is that if the operand is being used in an expression, the value of the operand _before_ incrementing/decrementing is used before it is increased/decreased by 1. See the following example:

   ```c
   int age = 30;

   printf("Before my birthday, I was %d-years-old.\n", age++);
   printf("After my birthday, I was %d-years-old.\n", age);
   ```

   Output:

   ```
   Before my birthday, I was 30-years-old.
   After my birthday, I was 31-years-old.
   ```

   The _prefix_ version of this operator works the exact opposite: it increases/decreases the value of its operand _before_ it is used in the expressions.

   ```c
   int age = 30;

   printf("After my birthday, I was %d-years-old.\n", ++age);
   ```

   Output:

   ```
   After my birthday, I was 31-years-old.
   ```

   In either case, remember that `age` _keeps the incremented/decremented_ value.

2. **Unary Plus (`+`) / Minus (`-`)**

   You might not see `+` very often, but `-` is used to denote negative numbers.

   ```c
   float positive_charge = +0.455f;
   float negative_charge = -0.006f;

   printf("Positive Charge: %f coulombs.\nNegative Charge: %f coulombs.\n", positive_charge, negative_charge);
   ```

   Output:

   ```
   Positive Charge: 0.455000 coulombs.
   Negative Charge: -0.006000 coulombs.
   ```

3. **Multiplication (`*`), Division (`/`), Modulus (`%`)**

   These perform the same operations as they do in other languages and are read left-to-right. For instance, the operation `3 * 2 / 4 % 5` would be performed from left to right.

   Just like in Java and Bash, however, be careful when dividing two integers, as you will be performing integer division. You will need to _cast_ either operand into a `float` if you want to perform float division instead.

   ```c
   int operand_a = 5, 
       operand_b = 4;

   int   int_div   = operand_a / operand_b;
   float float_div = (float) operand_a / operand_b;

   printf("Integer Division: %d\nFloat Division: %f\n", int_div, float_div);
   ```

   Output:

   ```
   Integer Division: 1
   Float Division: 1.250000
   ```

4. **Addition (`+`), Subtraction (`-`)**

   Nothing much to say here. Just good old addition and subtraction.

#### Relational Operators

Relational operators check how two pieces of data relate to each other based on their values. In C, there is a two-tier precedence for these operators:

1. **Relational "Is Equal To (`==`) / "Is Not Equal To (`!=`)**
2. **Relational Less Than (`<`) / Less Than Or Equal To (`<=`) / Greater Than (`>`) / Greater Than Or Equal To (`>=`)**

   ```c
   printf("I am old enough to drink (1 for true, 0 for false): %d\n", 30 >= 21);  // there is no specifier for boolean
   ```

   Output:

   ```
   I am old enough to drink (1 for true, 0 for false): 1
   ```

#### Bitwise Operators

The bitwise operators are as follows, in order of precedence:

- Bitwise AND (`&`)
- Bitwise exclusive OR (`^`)
- Bitwise inclusive OR (`|`)

Bitwise operators are fun to use and perform their "arithmetic" using the binary form of their operands. For example, `3` is `11` in binary, and `2` is `10`. Thus:

```
    11
AND 10
  –––––
    10
```

```
    11
xOR 10
  –––––
    01
```

```
    11
 OR 10
  –––––
    11
```

```c
int operand_a = 3, 
    operand_b = 2;

printf("%d & %d = %d\n", operand_a, operand_b, operand_a & operand_b);
printf("%d ^ %d = %d\n", operand_a, operand_b, operand_a ^ operand_b);
printf("%d | %d = %d\n", operand_a, operand_b, operand_a | operand_b);
```

Output:

```
3 & 2 = 2
3 ^ 2 = 1
3 | 2 = 3
```

<br>

#### Logical Operators

Logical operators work pretty much exactly the same way they do in Java:

|Precedence|Operator|Symbol|Example|
|-|-|-|-|
|1|Logical NOT|`!`|`!true` evaluates to `false`. Logical NOT actually has an even higher precedence than arithmetic operators (_except_ for unary `++`/`--`/`+`/`-`), and has the same precedence as bitwise NOT|
|2|Logical AND|`&&`|`true && false` evaluates to `false`|
|3|Logical OR|`\|\|`|`true \|\| false` evaluates to `true`|

<br>

#### Assignment Operators

Assignment operators refer to those operators that perform arithmetic between two operands and assign the result to the left operand. The order of precedence is as follows. These operators are read **right-to-left**:

|Precedence|Operator|Symbol|Example|
|-|-|-|-|
|1|Assignment|`=`| `int age = 31;`|
|2|Addition / subtraction assignment|`+=`, `-=`|`age += 10;` leaves `age` with a value of `41`|
|3|Multiplication / division assignment|`*=`, `/=`|`age /= 2` leaves `age` with a value of `20`|
|4|Modulus / bitwise AND assignment|`%=`, `&=`|`age %= 2` leaves `age` with a value of `0`|
|5|Bitwise exclusive / inclusive OR assignment|`^=`, `\|=`|`age ^= 2` leaves age with a value of `2`|

```c
int age = 31;

printf("age += 10\t---> %d\n", age += 10);
printf("age /= 2\t---> %d\n", age /= 2);
printf("age %= 2\t---> %d\n", age %= 2);
printf("age ^= 2\t---> %d\n", age ^= 2);
```

Output:

```
age += 10       ---> 41
age /= 2        ---> 20
age %= 2        ---> 0
age ^= 2        ---> 2
```

<br>

#### Operator Precedence

For the full operator precedence table, please refer to the [**official documentation**](https://en.cppreference.com/w/c/language/operator_precedence). Notice that there are quite a few operators we haven't spoken about, but we will get to them in due time.

<br>

### Selections

As C was the precursor language to many of the popular contemporary programmer languages, you will find that its control-flow structures look very similar. This is especially true of its selection statements, which allow us to perform different sets of instructions depending on a condition or a set of conditions.

<br>

#### `if` And `else`

To illustrate how much of an influence C syntax has had in other languages, consider the following Java program, which checks whether the user is old enough to watch an R-rated film:

```java
public class FilmAgeChecker {
    public static void main(String[] args) {
        int age_limit = 18;
        int age = 31;

        if (age > age_limit) {
            System.out.printf("You are old enough to watch an R-Rated film.\n");
        } else if (age == age_limit) {
            System.out.printf("Happy Birthday! You are old enough to watch an R-Rated film.\n");
        } else {
            System.out.printf("You are not old enough to watch an R-Rated film.\n");
        }
    }
}
```

Output:

```
➜  javac FilmAgeChecker.java 
➜  java FilmAgeChecker      
You are old enough to watch an R-Rated film.
```

It's C equivalent would be the following:

```c
#include <stdio.h>

int main(void)
{
    int age_limit = 18;
    int age = 31;

    if (age > age_limit)
    {
        printf("You are old enough to watch R-Rated films.\n");
    } 
    else if (age == age_limit)
    {
        printf("Happy birthday! You are old enough to watch R-Rated films.\n");
    }
    else
    {
        printf("You are not old enough to watch R-Rated films.\n");
    }

    return 0;
}
```

Output:

```
➜  gcc -o FilmAgeChecker film_age_checker.c
➜  ./FilmAgeChecker                        
You are old enough to watch R-Rated films.
```

That's right: aside from a few stylistic-differences, the code is indentical. And that's all there is to them! You can have as many `else if` paths as you like, and you can have as many nested selections as you want–just like in every other C-like language that you've used.

<br>

#### `switch`-Statements

The other selection structure that works exactly the same way it does in Java is the `switch`-statement, which allows for us to perform a different set of steps depending on the value of one piece of data. For example, let's say we wanted to write a program that will tell you whether a day of the week is a weekday or a weekend based on the value of a character. The Java version would look like this:

```java
public class WeekdayChecker {
    public static void main(String[] args) {
        char day = 'H';  // here, let's make H stand for Thursday

        switch (day) {
            // Weekdays
            case 'M':
            case 'T':
            case 'W':
            case 'H':
            case 'F': 
                System.out.printf("%c is a weekday!\n", day); 
                break;

            // Weekend
            case 'S':
            case 'N': // here, let's make N stand for Sunday
                System.out.printf("%c is a weekend!\n", day);
                break;

            // If the user entered an invalid day
            default:
                break;
        }
    }
}
```

Output:

```
➜  javac WeekdayChecker.java
➜  java WeekdayChecker      
H is a weekday!
```

The equivalent in C would be:

```c
#include <stdio.h>

int main(void)
{
    char day = 'H';  // here, let's make H stand for Thursday

    switch (day) {
        // Weekdays
        case 'M':
        case 'T':
        case 'W':
        case 'H':
        case 'F': 
            printf("%c is a weekday!\n", day); 
            break;

        // Weekend
        case 'S':
        case 'D': // here, let's make D stand for Sunday
            printf("%c is a weekend!\n", day);
            break;

        // If the user entered an invalid day
        default:
            break;
    }

    return 0;
}
```

Output:

```
➜  gcc -o WeekdayChecker weekday_checker.c
➜  ./WeekdayChecker 
H is a weekday!
```

...literally the exact same thing.

<br>

### Loops

Not to sound like a broken record here, but all the main loop structures in C are also pretty much identical to how they work in Java, so we're only going to quickly cover them below.

<br>

#### `while`-Loops

The `while`-loop in C executes a block of code repeatedly as long as the specified condition is true. It first evaluates the condition, and if it is true, then the code block inside the loop is executed.
   
Example:

```c
int count = 0;

while (count < 5) 
{
    printf("%d\n", count);
    count++;
}
```
This code will print numbers from `0` to `4`, because the loop will keep running until the condition `count < 5` becomes `false`.

<br>

#### `do`-`while`-Loops

The `do`-`while`-loop is similar to the `while` loop, but it always executes the code block at least once, regardless of the condition being true or false. It evaluates the condition at the end of each iteration.
   
Example:

```c
int number = 5;

do 
{
    printf("%d\n", number);
    number--;
} 
while (number > 0);
```

This code will print numbers from `5` to `1`, because even though the condition `number > 0` becomes `false` after the first iteration, the block is executed at least once.

<br>

#### `for`-Loops

The `for`-loop in C allows you to specify initialization, condition, and increment/decrement all in one line. It is commonly used when you know how many times you need to iterate.

Example:

```c
for (int i = 0; i < 5; i++) 
{
    printf("%d\n", i);
}
```

This code will print numbers from `0` to `4`, because the loop will run for `i` values 0 through 4.