# Test Case

## C++ program no-sqrt

### Incorrect data

| Input | Output | Comment |
| --: | :-- | ---
| -1 | The number should be positive.|
| -92323.4 | The number should be positive.<br>_The program exits_ | The program exit because of '.' 
| 	-2147483648 | The number should be positive. 
| -2147483649 | _The program loops endlessly_ | We entered number < MIN_VALUE for int
| 2147483648 | _The program loops endlessly_ | We entered number > MAX_VALUE for int
| hi  | _The program exits_ | Any text characters are interpreted as zero
| 0 | _The program exits_ | The expected behavior

### Correct data

```commandline
Enter a natural number (0 for exit):
> 1
(1, 0, 0)
(0, 1, 0)
(0, 0, 1)
Enter a natural number (0 for exit):
> 2
(1, 1, 0)
(1, 0, 1)
(0, 1, 1)
> 3
(1, 1, 1)
> 4
(2, 0, 0)
(0, 2, 0)
(0, 0, 2)
> 5
(2, 1, 0)
(2, 0, 1)
(1, 2, 0)
(1, 0, 2)
(0, 2, 1)
(0, 1, 2)
> 6
(2, 1, 1)
(1, 2, 1)
(1, 1, 2)
> 7
No triples found...
> 8
(2, 2, 0)
(2, 0, 2)
(0, 2, 2)
> 9
(3, 0, 0)
(2, 2, 1)
(2, 1, 2)
(1, 2, 2)
(0, 3, 0)
(0, 0, 3)
> 10
(3, 1, 0)
(3, 0, 1)
(1, 3, 0)
(1, 0, 3)
(0, 3, 1)
(0, 1, 3)
> 11
(3, 1, 1)
(1, 3, 1)
(1, 1, 3)
> 222
(14, 5, 1)
(14, 1, 5)
(13, 7, 2)
(13, 2, 7)
(11, 10, 1)
(11, 1, 10)
(10, 11, 1)
(10, 1, 11)
(7, 13, 2)
(7, 2, 13)
(5, 14, 1)
(5, 1, 14)
(2, 13, 7)
(2, 7, 13)
(1, 14, 5)
(1, 11, 10)
(1, 10, 11)
(1, 5, 14)
> 2147483647
No triples found...
```

## Python program

For Python program I used the simple regex to check the string, so no surprises there.

### Incorrect data

| Input | Output | Comment |
| --: | :-- | ---
| -1 | The input is invalid|
| -92323.4 | The input is invalid |  
| 	-2147483648 | The input is invalid 
| -2147483649 | The input is invalid | 
| hi  | The input is invalid | 
| 0 | _The program exits_ | The expected behavior

### Correct data

| Input | Output | Comment |
| --: | :-- | --- |
| 1 |[1]|The prime number
| 2|[1, 2]|The prime number
|3|[1, 3]|The prime number
|4|[1, 2, 4]
|5|[1, 5]|The prime number
|6|[1, 2, 3, 6]| The perfect number
|7|[1, 7]|The prime number
|8|[1, 2, 4, 8]
|9|[1, 3, 9]
|10|[1, 2, 5, 10]| The deficient number|
|11|[1, 11]|The prime number
|12|[1, 2, 3, 4, 6, 12]| The abudant number
|6563|[1, 6563] | The prime number
|7517|[1, 7517] | The prime number
|999331|[1, 999331]|The circular prime number
|7918|[1, 2, 37, 74, 107, 214, 3959, 7918] | The non prime number
|9801|[1, 3, 9, 11, 27, 33, 81, 99, 121, 297, 363, 891, 1089, 3267, 9801]|The perfect square number
|2147483647|[1, 2147483647]| The maximum integer number (32bit)
|2147483649|[1, 3, 715827883, 2147483649]| The python hasn't limits for numbers
