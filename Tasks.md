# Tasks

This list contains a list of tasks for you to do at home or during uni-hours.

## Hello, world!

1. Write a program which prints 'Hello, [whatever yourn name is]!'
1. Write a program which asks the user to enter his name and then print 'Hello, [whatever the user entered]!'

## Primitive data types

1. Write a program which asks the user for length of side of a triangle and the corresponding height and prints the area of the triangle.
1. Write a program which asks the user for 3 numbers `a`, `b` and `c` and prints the roots of the quadratic equation `ax^2 + bx + c = 0`. Assume that the equation always has roots.
1. Write a program which asks the user how old they are and then prints the number of seconds, days, weeks, months he has lived on the Earth.
1. Write a program which initializes 2 variables and then swaps their values. In other words, write some code that will cause the following snippet to reverse the values:
    ```cpp
    int first;
    cin >> first; // Assume the value is a
    int second;
    cin >> second; // Assume the value is b

    cout << first << second; // This should print a b
    // ---> Write some code goes here which swaps the values <---
    cout << first << second // This should print b a
    ```
    
1. If you know that the gravitational field of the Moon is approximately 17% of that on the Earth, write a program that reads a person's weight on the earth and writes on the console the corresponding weight on the Moon.

1. Write a program that reads a person's weight on the Moon and prints the corresponding weight on the Earth.

1. Write a program that reads 3 numbers - a,b and h - sides and height of a trapezoid, and calculates its area.

1. As you know, a power function is defined as f(x) = a*x^b, where a and b are real numbers.
Write a program that reads two integer numbers - a and b, and prints on the console the derivative of the given function

1. Write a program which asks the user for a **5-digit** number and then prints:
    - the same number in binary
    - the same number in hex
    - the same number in oct
1. Write a program which asks the user for a **5-digit** number and then prints its digits in reverse order (e.g. `12345` becomes `54321`).
1. Write a program which asks the user for three numbers `s`, `d` and `n` and prints the sum of the first `n` numbers of arithmetic progression with starting number `s` and difference `d`.

## Conditionals (if/switch)

1. Write a program which asks the user for a number `n` and prints whether `n` is odd or even.

1. Write a program which asks the user for a number `n` and prints whether `n` is a leap year .

1. Write a program which asks the user for 5 numbers - `a`, `b`, `c`, `p`, `q` and prints the maximum value of the quadratic function `f(x) = ax^2 + bx + c` in the range `[p; q]`.

1. Write a program that asks the user about how many points he scored on his Calculus exam and print the corresponding grade according to the following table:

    | Student points      | Expected output |
    | --------------      | --------------- |
    |  0 <= points <=  20 | 2! Please try again in September                                    |
    | 21 <= points <=  40 | 3! Whew, that was a close one                                       |
    | 41 <= points <=  60 | 4! Not much I can say, you are just a     regular fellow            |
    | 61 <= points <=  80 | 5! If only you didn't go drinking the     night before the exam...  |
    | 81 <= points <= 100 | 6! There's no way you did this by yourself, how did you cheat?  |

1. Write a program which asks the user for a command (a number between 1 and 3). Available commands are:
    1. Addition - If the user selects addition, your program should ask for two other numbers and print 'Their sum is: [sum of the numbers]'
    1. Multiplication - If the user selects multiplication, your program should ask for two other numbers and print 'Their multiple is: [sum of the numbers]'
    1. Power - If the user selects power, your program should ask for two other numbers and print '[first number] to the power of [second number] is [the first number to the power of the second]'

1. Write a program which asks the user to enter 2 days of the year and then computes the number of days between them.
    
    | Example input | Example output | Explanation |
    | ------------- | -------------- | ----------- |
    | 21 08 21 12 | 122 | there are 122 days between August, the 21st and December, the 21st. |

1. Write a program which reads a month( number from 1 to 12 ) and tells how many days are there in this month.(assume a leap year)

1. Write a program which asks the user to enter a day, month and year post 1900. Your program should determine whether the entered date is valid or not.
    
    | Example input | Example output |
    | ------------- | -------------|
    | 21 08 1993 | Valid! |
    | 31 02 1992 | Invalid! |

1. Write a program which asks the user to enter a **2-digit** number and then prints its English name.
    
    | Example input | Example output |
    | ------------- | -------------- |
    | 67 | sixty-seven |

1. Write a program which asks the user to enter 3 numbers - the sides of a triangle and prints whether the triangle is obtuse, right or acute.

1. Write a program which asks the user to enter 2 numbers - coordinates of some 2D point and prints whether that point is contained in the:
    - unit circle
    - unit square

## Loops (for/while)

1. Write a program which asks the user for a number `n` and prints the first `n` numbers of Fibonacci.
1. Write a program which asks the user for a number and then prints:
    - the same number in binary
    - the same number in hex
    - the same number in oct
1. Write a program which asks the user for a number and then prints its digits in reverse order (e.g. `1234560` becomes `0654321`).
1. Write a program which asks the user for a number and then prints its roman numeral.
    
    | Example input | Example output |
    | ------------- | -------------- |
    | 8 | VIII |
    | 95 | XCV |
1. Write a program which asks the user to **think** of a number between 0 and 1024 and tries to guess it by asking questions like *'Is your number bigger than 512?'*, etc. How many steps would your program take in the worst case?
1. Write a program which asks the user for a number `n` and then prints whether `n` is a prime number or not.
1. Write a program which asks the user for a number `n` and then prints all prime numbers smaller than `n`.
1. Write a program which asks the user for a number `n` and then prints all prime factors of `n`
    
    | Example input | Example output |
    | ------------- | -------------- |
    | 65780 | 2.2.5.11.13.23 |
1. TODO: Print numbers in specific order (spirally, diagonally, etc.)
1. TODO: Print shapes of different size (i.e. trees).

## Arrays

1. Write a program which asks the user to enter `n` - the number of numbers he will enter. Then the program should ask for `n` numbers and print the contents of the array in reverse.
    
    | Example input | Example output |
    | ------------- | -------------- |
    | 3 1 2 3 | 3 2 1 |
    | 5 5 15 0 25 -10 | -10 25 0 15 5 |

1. TODO Reflexive, symmetric and transitive relations.
1. TODO Print all subsets of a set.
1. TODO: Print whether a set is a subset of another set.

## Functions and recursion

1. Write a program which asks the user for a number `n` and prints the first `n` numbers of Fibonacci.
1. TODO: Karatsuba multiplication
1. TODO: GCD via Euclid
