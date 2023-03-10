# 0x08. C - Recursion

[Nice video on recursion](https://www.youtube.com/watch?v=STWnc6ZY2fw)

Examples of Recursion functions
#### Factorial
Factorial function(symbol: !) says to multiply all whole numbers from our chosen number down to 1.
Examples:
*4! = 4 × 3 × 2 × 1 = 24
So the rule is:
   n! = n × (n−1)!
   "the factorial of any number is that number times the factorial of (that number minus 1)"
[read more...](https://www.mathsisfun.com/numbers/factorial.html)

#### Fibonacci Sequence
Fibonacci sequence is the series of numbers where the next number is found by adding up the two numbers before it.

Fibonacci Sequence can be written as a rule

The Rule is xn = xn−1 + xn−2
[read more...](https://www.mathsisfun.com/numbers/fibonacci-sequence.html)


### Tasks
#### 0-puts_recursion.c
A function that prints a string, followed by a new line.
* Prototype: void _puts_recursion(char *s);
The standard library provides a similar function: puts.

#### 1-print_rev_recursion.c
A function that prints a string in reverse.
* Prototype:void _print_rev_recursion(char *s);

#### 2-strlen_recursion.c
A function that returns the length of a string.
* Prototype: int _strlen_recursion(char *s);
The standard library provides a similar function: strlen.

#### 3-factorial.c
A function that returns the factorial of a given number.
* Prototype: int factorial(int n);
* If n is lower than 0, the function should return -1 to indicate an error
* Factorial of 0 is 1

#### 4-pow_recursion.c
A function that returns the value of x raised to the [power](https://www.mathsisfun.com/exponent.html) of y.
* Prototype: int _pow_recursion(int x, int y);
* If y is lower than 0, the function should return -1
The standard library provides a different function: [pow](https://www.geeksforgeeks.org/power-function-cc/).