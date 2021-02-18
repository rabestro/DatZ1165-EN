# Test plan

We should test two groups of input data - correct and incorrect.

The correct data is positive whole numbers from 1 to MAX_VALUE and 0 for exit.
The incorrect input data is all numbers outside the range as well as float numbers and arbitrary characters. 

## Incorrect data

For negative numbers the program should print the error message. 

In C++ the program read all non number text as zero, so the C++ program should exit in such cases. 

For python we use regular expression to check the corectness of data so it prints error message on all cases. 

## Correct data

### Exit condition

0 - for exit from the program
  
### Border case: small numbers
We should test the first small numbers: 1 ... 12

### Regular numbers
We test the program for randomly selected numbers in the range from 10 to 1e6.

### (C++ only) Border case: very big numbers

We should test the numbers very close to the maximum values for our implementation. The maximum for long int is 2147483647. We should test not only the smaller numbers but as well slightly bigger like 2147483648. 

### Border case: perfect square numbers

The some algorithms uses square root function. In some cases the sqrt() function may return inaccurate result so we should test [the perfect square numbers](https://www.easycalculation.com/square-roots-perfect-numbers.html).

