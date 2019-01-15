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

1. As you know, a power function is defined as f(x) = a*x^b, where a and b are real numbers. Write a program that reads two integer numbers - a and b, and prints on the console the derivative of the given function

1. Write a program which asks the user for a **5-digit** number and then prints:
    - the same number in binary
    - the same number in hex
    - the same number in oct
1. Write a program which asks the user for a **5-digit** number and then prints its digits in reverse order  
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

1. Write a program which asks the user to enter 3 numbers - the sides of a triangle and prints whether such a triangle can exist.

1. Write a program which asks the user to enter 2 numbers - coordinates of some 2D point and prints whether that point is contained in the:
    - unit circle
    - unit square

1. Write a program which asks the user to enter 3 numbers and prints them in ascending order.

1. Write a program which asks the user to enter 5 numbers and prints the biggest one.

1. Write a program which asks the user to enter a character and prints whether it is a letter, a digit or a special character.

    | Example input | Example output |
    | ------------- | -------------- |
    | a | letter |
    | 9 | digit |
    | - | special char |

1. Write a poker-hand program. It should ask the user to enter 5 cards. The program must then tell the user what hand does he have (e.g. flush, quads, etc.).
    - use 'S' for spades, 'C' for clubs, 'H' for hearts, 'D' for diamonds
    - use the numbers between 2 and 14 for cards values (J=11, Q=12, K=13, A=14).
    - If you don't know how poker hands work, find a short [tutorial here](https://www.cardplayer.com/rules-of-poker/hand-rankings).

    | Example input | Example output |
    | ------------- | -------------- |
    | C8 C7 C6 C5 C4     | straight flush |
    | H11 D11 S11 C11 D7 | four of a kind |
    | D3 C11 S8 H4 S2    | high card |

## Loops (for/while)

1. Write a program which asks the user for a number `n` and prints the first `n` rounds of the FizzBuzz game. FizzBuzz is a very simple child game. Two children take rounds naming numbers. If the number is divided by 3, the child is supposed to say 'Fizz'. If the number is divided by 5, the child is supposed to say 'Buzz'. If its divisible by both, the child's supposed to say 'FizzBuzz'. Otherwise, the child must say the number itself.
    - For `n=4`, the output must be

      ```
        1
        2
        Fizz
        4
      ```
    - For `n=17`, the output must be

      ```
        1
        2
        Fizz
        4
        Buzz
        Fizz
        7
        8
        Fizz
        Buzz
        11
        Fizz
        13
        14
        FizzBuzz
        16
        17
      ```


1. Write a program which asks the user for a number `n` and prints the first `n` numbers of Fibonacci.

1. Write a program which asks the user for a number and then prints its digits in reverse order (e.g. `1234560` becomes `654321`).

1. Write a program which asks the user for a number `n` and then expects the user to enter exactly `n` more numbers. Print the sum of all numbers.
    - Example input:

      ```
        4
        2
        -5
        3
        9
      ```
    - Expected output:
      ```
      9
      ```

1. Write a program which asks the user for the numbers `n` and `k` and prints the number of combinations C<sup>n</sup><sub>k</sub>. Remember that this number is given by the value of `n! / k!(n-k)!`.

1. Write a program which asks the user for a number smaller than 10 000 and then prints its roman numeral.

    | Example input | Example output |
    | ------------- | -------------- |
    | 8 | VIII |
    | 95 | XCV |

1. Write a program which asks the user for a number `n` and then prints whether `n` is a prime number or not.

1. Write a program which asks the user for a number `n` and then prints all prime numbers smaller than `n`.

1. Write a program which asks the user for a number `n` and then prints all prime factors of `n`

    | Example input | Example output |
    | ------------- | -------------- |
    | 65780         | 2.2.5.11.13.23 |

1. Write a program which asks the user for a number `n` and then prints a square with numbers with as many rows as `n`. Align all numbers in the triangle!
    - For `n=3`, the output must be

      ```
        1 2 3
        4 5 6
        7 8 9
      ```

    - For `n=4`, the output must be (note how all columns are aligned!)

      ```
        1  2  3  4
        5  6  7  8
        9  10 11 12
        13 14 15 16
      ```

1. Write a program which asks the user for a number `n` and then prints a triangle with numbers with as many rows as `n`. Align all numbers in the triangle!
    - For `n=4`, the output must be

      ```
        1
        2 3
        4 5 6
        7 8 9 10
      ```

    - For `n=7`, the output must be (note how all columns are aligned!)

      ```
        1
        2  3
        4  5  6
        7  8  9  10
        11 12 13 14 15
        16 17 18 19 20 21
        22 23 24 25 26 27 28
      ```

1. Write a program which asks the user for an **odd** number `n` and then prints a Christmas tree as wide as `n`. Print an error if `n` is not odd!
    - For `n=5`, the output must be:

      ```
          *
         ***
        *****
          *
      ```
    - For `n=7`, the output must be:

      ```
          *
         ***
        *****
       *******
          *
      ```

1. Write a program which asks the user for an **odd** number `n` and then prints a heart twice as wide as `n`. Print an error if `n` is not odd!
    - For `n=3`, the output must be:

      ```
       *   *
      *** ***
       *****
        ***
         *
      ```
    - For `n=5`, the output must be:

      ```
        *     *
       ***   ***
      ***** *****
       *********
        *******
         *****
          ***
           *
      ```

1. Write a program which asks the user for a number and then prints:
    - the same number in binary
    - the same number in hex
    - the same number in oct

1. Harder task - write a program which asks the user to **think** of a number between 0 and 1024 and tries to guess it by asking questions like *'Is your number bigger than 512?'*, etc. Extra question: how many steps would your program take in the worst case?

## Arrays

1. Write a program which asks the user to enter `n` - the number of numbers he will enter. Then the program should ask for `n` numbers and print the contents of the array in reverse.

    | Example input | Example output |
    | ------------- | -------------- |
    | 3 1 2 3 | 3 2 1 |
    | 5 5 15 0 25 -10 | -10 25 0 15 5 |

1. Write a program which asks the user to enter `n` - the number of numbers he will enter. Then the program should ask for `n` numbers and print only the even numbers.

    | Example input | Example output |
    | ------------- | -------------- |
    | 3 1 2 3       | 2 |
    | 5 7 10 -4 11 3 | 10 -4 |

1. Write a program which asks the user to enter `n` - the number of numbers he will enter. Then the program should ask for `n` numbers and print only the numbers that are smaller than the average of all numbers.

    | Example input | Example output |
    | ------------- | -------------- |
    | 3 1 2 4       | 1 2 |
    | 5 7 10 -6 11 3 | -6 3 |
    
1. Write a program which asks the user to enter `n` - the number of numbers he will enter. Then the program should ask for `n` numbers and print the maximum of them.


    | Example input | Example output |
    | ------------- | -------------- |
    | 4 1 20 4 100      | 100 |
    | 5 -7 -10 -6 -11 -3 | -3 |

1. Write a program which asks the user to enter `n` - the amount of numbers he will enter. Then the program should ask for `n` numbers and determine if the given array is a *hacksaw*. We call a sequence of numbers `hacksaw` if the following is true:
`a1 < a2 > a3 < a4 ... an` or `a1 > a2 < a3 > a4 ... an`.


    | Example input | Example output |
    | ------------- | -------------- |
    | 4 5 4| 1 |
    | 5 4 5| 1 |
    | 4 5 3 8 9 4| 0 |
    | 1 2 1 2 1 2 1| 1 |
    | 10 -200 3 4| 0 |
    
   
1. Write a function which takes two arguments - an int array and its size, and prints all elements of the array on the console. 
   
1. Write a function which takes two arguments - an int array and its size, and reverses the array.
    Example: {7, 5, 13, -8, 6} -> {6, -8, 13, 5, 7}

1. Write a function which takes three arguments - two int arrays - `source` and `destination` and unsigned `s` - size of the source.The function has to copy all elements from `source` to `destination`(assume destination is big enough).

1. Write a function which takes two arguments - an int array and its size, and sorts the array.

1. Write a function which takes two arguments - an int array and its size, and returns its median.

1. Write a function which takes two arguments - an int array and its size, and returns its mode.

1. Write a function which takes three arguments - a *sorted* int array, size of the array and wanted value `c`. Using the algorithm binary search, the function should return the index of `c` if it exists in the array, or -1 if it does not exist.

1. Write a program which asks the user to enter `n` - the number of numbers he will enter. Then the program should ask for `n` numbers. Then the program should print on the console the elements of the longest increasing sequence in the array. In case there are two sequences with the same length, print the first one.

    | Example input | Example output |
    | ------------- | -------------- |
    | 4 1 20 4 100      | 1 20 |
    | 10 1 7 10 15 -5 0 1 2 3 4 | -5 0 1 2 3 4 |    
    

1. TODO Reflexive, symmetric and transitive relations.
1. TODO Print all subsets of a set.
1. TODO: Print whether a set is a subset of another set.
    

## Matrices

1. Write a program which asks the user to enter `n` and `k` - the rows and columns count of a matrix. Then the program should ask for `n*k` numbers and fill a 2D array(matrix) with the given values.

1. Write a function which takes a matrix and prints it on the console in the appropriate format.

1. Write a function which takes a matrix and prints it on the console `transposed`.

1. Write a program which reads a matrix from the console, then prints the `sum` of `each row`.

1. Write a program which reads a square matrix from the console and prints the `sum` of the `main diagonal elements`.

1. Write a program which reads a matrix from the console and prints the `average` of `each row`.

1. Write a program which reads a matrix from the console and prints the elements of the 2x2 submatrix in it that has the `maximum sum`.
Example:

      ```    
      1 2 3 -5 
      2 7 9 11 
      9 3 1 7  
      ```
    Results in  `9 11 1 7 `

1. Write a program which asks the user for a number `n` and generates (also prints) 4 `nxn` matrices in the pattern of the given example:


    - For `n=4` (note how all the numbers are aligned!)

    a/ 
     ```
      1  5  9 13
      2  6 10 14
      3  7 11 15
      4  8 12 16
      ```
    b/ 
      ```
      1  8  9 16
      2  7 10 15
      3  6 11 14
      4  5 12 13
      ```
    
    c/
      ```
      7 11 14 16
      4  8 12 15
      2  5  9 13
      1  3  6 10
      ```
    
    d/
      ```
      1  2  3  4
      12 13 14 5
      11 16 15 6
      10 9  8  7
      ```
1. [Game of Life](http://en.wikipedia.org/wiki/Conway's_Game_of_Life) is a game for zero :confused: players and consists of a surface, devided in cells. Every cell is [dead or alive](https://www.youtube.com/watch?v=SRvCvsRp5ho). The game is played in turns. Every turn depends on the state of the game in the previous turn following these rules:

  - Every cell with less than two living neighours dies(of loneliness).
  - Every living cell with more than three living neighbours dies(too crowded).
  - Evey living cell with two or three living neighbours stays alive for the next turn.
  - Every dead cell with exactly three living neighbours comes back to live.
  
  Your task is to simulate this game. The initial state of the surface should be hard-coded. On every turn the state of the     cells should be written to the console: 'X' for a living cell, ' ' for a dead cell.

10. How many `islands and peninsulas` are there on the "map"?

You are given a numbers `n`, `m` and a `nxm` matrix that consists of numbers `0 through 9`. Your task is to create a program that says `how many` islands and peninsulas are there. These are the 'rules':

  - 0 is water
  - 1-9 is the height of the ground
  - Islands are pieces of land connected by different grounds.
  Example of an island:
   ```
   000000000000
   000001100000
   000012321000
   000011210000
   000000100000
   000000000000
   ```
  - Peninsulas are like islands but on the edge of the 'map'.
  Example of a peninsula:
   ```
   984321000
   544200000
   321000000
   100000000
   ```
  - Note that we don't actually care if the land is an island or peninsula. We care about the number of different connected lands.
   
Example input:
```
10 5

4321000020
3210000010
2100000000
2100000000
1000010001
```
Output should be:
```4```


## Functions and recursion

1. Write a function that takes two numbers as parameters and returns their sum.
1. Write a function that takes one number and returns its absolute value.
1. Write a function that takes two numbers as parameters and returns the greater one.
1. Write a function that takes two integer numbers and returns if they are equal.
1. Write a function that takes three numbers - `a` , `b` and `epsilon`, and returns if the distance between `a` and `b` is less than `epsilon`.
1. Write a function that takes two numbers - `a` and `b` and returns `a^b`.
1. Write a function that takes one integer and returns it reversed. (e.g. `12345` becomes `54321`).
1. Write a function that takes three numbers and returns the smallest one of them.
1. Write a function that takes one number and returns if it is prime.
1. Write a function that takes three numbers and returns if the smallest one of them is prime.
1. Write a function that takes a char and returns if it is a digit.
1. Write a function that takes a char and returns if it is a letter.
1. Write a function that takes two bools and returns if they are both true.
1. Write a function that takes two numbers and returns if the first is divisible by the second.
1. Write a function that takes one integer `n` and returns the sum 1+2+...+(n-1)+n.
1. Write a function that takes two numbers - `a` and `b`, and returns the root of the equation `ax + b = 0`.
1. Write a function that takes four numbers - coordinates of two points in 2D - `x1`, `y1`, `x2`, `y2`, and returns the distance between `(x1,y1)` and `(x2,y2)`.
1. Write a function that takes six numbers - coordinates of three points in 2D, and returns if they lie on a straight line.
1. Write a function that takes tree numbers - coordinates of a vector in 3D, and returns the length of the vector.
1. Write a function that takes one integer `n` and returns `n!`.
1. Write a function that takes two integers - `n` and `k` and returns `n choose k`(binomial coefficient).
1. Write a program which asks the user for a number `n` and prints the first `n` numbers of Fibonacci.
1. Write a program which asks the user for a number `n` and prints the first `n` numbers of Tribonacci.


1. TODO: Karatsuba multiplication
1. TODO: GCD via Euclid

## Strings

1. Write an implementation of:
    - [`strlen`](http://www.cplusplus.com/reference/cstring/strlen/)
    - [`strcmp`](http://www.cplusplus.com/reference/cstring/strcmp/)
    - [`strcat`](http://www.cplusplus.com/reference/cstring/strcat/)
    - [`strcpy`](http://www.cplusplus.com/reference/cstring/strcpy/)

1. Write the following program:
You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

    - In the first line print two space-separated integers, representing the length of `a` and `b` respectively. 
    - In the second line print the string produced by concatenating `a` and `b`. 
    - In the third line print two strings separated by a space, `a'` and `b'`.`a'` and `b'` are the same as `a` and `b`, respectively, except that their first characters are swapped.

    - Example input:
    ```
    abcd
    ef
    ```
    - Output:
    ```
    4 2
    abcdef
    ebcd af
    ```

1. Write a function that counts the `words` in a given string.

    | Example input | Example output |
    | ------------- | -------------- |
    | This is random. | 3 |
    | the answer to life is 42. | 6 |
    | !-..- is not a word | 4|

1. Write a function that checks whether a given word is a `palindrome`.

    | Example input | Example output |
    | ------------- | -------------- |
    | kapak | 1 |
    | traicho | 0 |
    | civic | 1|

1. Write a function that takes a string and prints out a char `histogram` of that string. Each string will consist of lower case Latin characters ('a'-'z').

    - Input:
    ```aaaabb```
    - Output:
    ```
    a - 4
    b - 2 
    ```
    
    - Input:
    ```randomness```
    - Output:
    ```
    r - 1
    a - 1
    n - 2
    d - 1
    o - 1
    m - 1
    e - 1
    s - 2
    ```
!!!NOTE: The order of the output is irrelevant. The only importance is the histogram accuracy

## Complex tasks
1. Tisho wants to play [Bulls and cows](https://en.wikipedia.org/wiki/Bulls_and_Cows), but he is confused by the rules, so he needs ouр help. We have to write a program that reads two integer numbers `A` and `B` in the range \[0,9999\] from the console and prints back the number of bulls and cows for these numbers. Numbers smaller than 1000 we should pad with zeros, for example 19 should be interpreted as 0019.

    | Example input | Example output |
    | ------------- | -------------- |
    | 1001 2010| 1 2 |
    | 0 1      | 3 0 |
    | 9988 1234| 0 0 |
    | 1010 1001| 2 2 |

1. Tisho really enjoyed our help and he needs us again. Now he asked us to do the following:
Given a number `A`- Tisho's suggestion for his opponent's number,`b`-number of bulls and `c`- number of cows, we have to print every number `N` that has `b` bulls and `c` cows with the number `A`.

1. Strahil and Pesho really love hamburgers. And they have a game, which they play in rounds - they try to eat as much as they can. And since it is very hard to overeat, they can't remember how many burgers they ate, so they write the result in a single number `B` with the following format:
The sum of the left digits of `B` gives the number of burgers Strahil ate, and the sum of the right digits gives the burger count for Pesho. For example 3489 means that Strahil ate 3 + 4 = 7 and Pesho ate 8 + 9 = 17.
If the number `B` has odd number of digits, then the one in the middle is shared between them both. For example 324 means 3 + 2 = 5 for Strahil and 2 + 4 = 6 for Pesho.
The number `B` will never be more than 9 digits long.
Your task is to help them decide who is better and print who won the game and how much burgers he ate. If they have equal results, print that the result is even.

    | Example input | Example output |
    | ------------ | -------------- |
    | 1001 | Even       |
    |  17  | Pesho 7    |
    | 9988 | Strahil 18 |
    | 578  | Pesho 15   |
    
Example valid sudoku:

int sudoku[9][9] = { 
{ 2, 9, 5,  7, 4, 3,  8, 6, 1 },
{ 4, 3, 1,  8, 6, 5,  9, 2, 7 },
{ 8, 7, 6,  1, 9, 2,  5, 4, 3 },

{ 3, 8, 7,  4, 5, 9,  2, 1, 6 },
{ 6, 1, 2,  3, 8, 7,  4, 9, 5 },
{ 5, 4, 9,  2, 1, 6,  7, 3, 8 },

{ 7, 6, 3,  5, 2, 4,  1, 8, 9 },
{ 9, 2, 8,  6, 7, 1,  3, 5, 4 },
{ 1, 5, 4,  9, 3, 8,  6, 7, 2 }
};

Задача от изпит:

Напишете програма, която прочита от клавиатурата цяло, положително число n≤500, следвано от символен низ с точно n символа. След това тя трябва да извежда на екрана различните думи от низа, по една на ред, подредени лексикографски започвайки от най-малката. Всяка памет, която програмата използва, трябва да е динамично заделена с точния размер. Забранено е използването на библиотеки, различни от iostream. Приемаме, че думите са съставени само от малки и главни латински букви, а всички останали символи считаме за разделители между тях. При лексикографската наредба да се използва стандартната наредбата на символите спрямо кодовата таблица, отчитайки, че главните букви са преди малките.
