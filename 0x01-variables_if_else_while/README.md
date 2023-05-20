# 0x01. C - Variables, if, else, while

## Variables
A variable is a container _(storage area)_ with a unique name _(identifier)_
that holds data
which can be manipulated by a program.
A variable's name can include letters, numbers, and the underscore character.
Either a letter or an underscore must come first. Because C is case-sensitive,
uppercase and lowercase characters are separate.

## Basic variable types
```
char: 1 byte
int: 4 byte(s)
float: 4 byte(s)
double: 8 byte(s)
```

## C keywords 
`auto` `double` `int` `struct` `break` `else` `long` `switch` `case` `enum` `register` `typedef` `char` `extern` `return` `union` `continue` `for` `signed` `void` `do` `if` `static` `while` `default` `goto` `sizeof` `volatile` `const` `float` `short` `unsigned`

## C if ... else statements
### The *if* Statement
the `if` statement is used to specify a block  of code to be executed if a `condition` is `true.`
> Syntax
```
if (condition) {
// block of code to be executed if condtion is true
}
```
### The *else* Statement
the `else` statement is used to specify a block of code to be executed if the `condition` is `false.`
> Syntax
```
if (condition) {
// block of code to be executed if the statement is true
} else {
// block of code to be executed if the condition is false
}
```
### The *else if* Statement
the `else` `if` statement is used to specify a new condition if the first condition is `false`
> Syntax
```
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
```
