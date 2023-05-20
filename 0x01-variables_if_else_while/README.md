# 0x01. C - Variables, if, else, while

## Variables
A variable is a container _(storage area)_ with a unique name _(identifier)_
that holds data
which can be manipulated by a program.
A variable's name can include letters, numbers, and the underscore character.
Either a letter or an underscore must come first. Because C is case-sensitive,
uppercase and lowercase characters are separate.

## Commonly used data types

| Type | Size (bytes) | Format Specifier |
| ---- | ------------ | ------------ |
| int | 2 OR 4 | %d %i|
| char | 1 | %c |
| float | 4 | %f |
| double | 8 | %lf |
| unsigned int | 2 OR 4 | %u |
| long double | at least 10 usually 12 OR 16 | %LF |

## C keywords 
```c
auto double int struct break else long switch case enum register typedef char extern return union continue for signed void do if static while default goto sizeof volatile const float short unsigned
```

## C if ... else statements
### The *if* Statement
the `if` statement is used to specify a block  of code to be executed if a `condition` is `true.`
> Syntax
```c
if (condition) {
// block of code to be executed if condtion is true
}
```
### The *else* Statement
the `else` statement is used to specify a block of code to be executed if the `condition` is `false.`
> Syntax
```c
if (condition) {
// block of code to be executed if the statement is true
} else {
// block of code to be executed if the condition is false
}
```
### The *else if* Statement
the `else` `if` statement is used to specify a new condition if the first condition is `false`
> Syntax
```c
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
```
# Loops

![loops](https://www.cs.uah.edu/~rcoleman/CS121/ClassTopics/Images/Loops01.jpg 'loops')

A loop is a type of control structure that makes a statement or set of statements execute repeatedly. You will frequently want to repeat an action in a program until a certain condition has been met. We achieve this through Loops.

## C `while` and `do ... while` loop
### The `while loop`

![](https://www.cs.uah.edu/~rcoleman/CS121/ClassTopics/Images/Loops03.jpg)

In C programming language, the `while` Loop is an entry-controlled loop. When the specified condition is still true, this loop may be used to iterate the block of code code.
> Syntax
```c
while (test expression) {
// body of the loop
}
```
### The `do ... while` loop
!['do ... while loop'](https://www.cs.uah.edu/~rcoleman/CS121/ClassTopics/Images/Loops06.jpg 'do while loop')

There is one significant distinction between the `while` loop and the `do..while` loop. The `do...while` loop's body is run at least once. The test expression is only evaluated after that.
> Syntax
```c
do {
// body of the loop
}
while (test expression);
```
## Boolean Variables and Data Type ( or ~~lack thereof in C~~ )
A true boolean data type could be used for storing logical values, and would only have two legal values - `"true"`, and `"false"`.
C does not have boolean data types, and normally uses integers for boolean testing.
Zero is used to represent false, and One is used to represent true.
For interpretation, Zero is interpreted as false and anything non-zero is interpreted as true.
To make life easier, C Programmers typically define the terms "true" and "false" to have values 1 and 0 respectively.

> Don't rush the process, good things takes time.

*--> Anonymous*
