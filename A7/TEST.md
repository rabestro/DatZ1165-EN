# Test plan

We should test two groups of input data - correct and incorrect.

The correct data is positive whole numbers from 1 to MAX_VALUE and 0 for exit.
The incorrect input data is all numbers outside the range as well as float numbers and arbitrary characters. 

## Correct data

### Exit condition

0 - for exit from the program
  
### Border case: small numbers
We should test the first small numbers: 1 ... 12

### Regular numbers
We test the programm for randomly selected numbers

#### Prime numbers
Take random numbers from [the list of prime numbers](https://en.wikipedia.org/wiki/List_of_prime_numbers#:~:text=The%20first%201000%20prime%20numbers%20%20%20,%20%20311%20%2016%20more%20rows) and test them in our program. The program should returns only TWO factors for such numbers.

#### Non prime numbers
Take random numbers that NOT in the [list of prime numbers](https://en.wikipedia.org/wiki/List_of_prime_numbers#:~:text=The%20first%201000%20prime%20numbers%20%20%20,%20%20311%20%2016%20more%20rows) and test them in our program. The program should returns MORE then two factors for such numbers.

#### Perfect, abudant and deficient numbers

Take [perfect numbers](https://en.wikipedia.org/wiki/Perfect_number) from [the list](https://en.wikipedia.org/wiki/List_of_perfect_numbers). Check that the condition for perfect numbers is satisfied. We should test as well [abundant](https://en.wikipedia.org/wiki/Abundant_number) and [deficient](https://en.wikipedia.org/wiki/Deficient_number) numbers. 

### (C++ only) Border case: very big numbers

We should test the numbers very close to MAX_VALUE including the maximum possible number for long int. 

### Border case: squares

The some algorithms uses
