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

| Input | Output | Comment |
| --: | :-- | --- |
| 1 |1|The prime number
| 2|1 2|The prime number
|3|1 3|The prime number
|4|1 4 2
|5|1 5|The prime number
|6|1 6 2 3| The perfect number
|7|1 7|The prime number
|8|1 8 2 4
|9|1 9 3
|10|1 10 2 5| The deficient number|
|11|1 11|The prime number
|12|1 12 2 6 3 4| The abudant number
|6563|1 6563 | The prime number
|7517|1 7517 | The prime number
|999331|1 999331|The circular prime number
|7918|1 7918 2 3959 37 214 74 107 | The non prime number
|9801|1 9801 3 3267 9 1089 11 891 27 363 33 297 81 121 99|The perfect square number
|2147483647|1 2147483647| The maximum integer number (32bit)
```
>2147483646
1 2147483646 2 1073741823 3 715827882 6 357913941 7 306783378 9 238609294 11 195225786 14 153391689 18 119304647 21 102261126 22 97612893 31 69273666 33 65075262 42 51130563 62 34636833 63 34087042 66 32537631 77 27889398 93 23091222 99 216 91754 126 17043521 151 14221746 154 13944699 186 11545611 198 10845877 217 9896238 231 9296466 279 7697074 302 7110873 331 6487866 341 6297606 434 4948119 453 4740582 462 4648233 558 3848537 651 3298746 662 3243933 682 3148803 693 3098822 906 2370291 993 2162622 1023 2099202 1057 2031678 1302 1649373 1359 1580194 1386 1549411 1661 1292886 1953 1099582 1986 1081311 2046 1049601 2114 1015839 2317 926838 2387 899658 2718 790097 2979 720874 3069 699734 3171 677226 3322 646443 3641 589806 3906 549791 4634 463419 4681 458766 4774 449829 4983 430962 5958 360437 6138 349867 6342 338613 6951 308946 7161 299886 7282 294903 9362 229383 9513 225742 9966 215481 10261 209286 10923 196602 11627 184698 13902 154473 14043 152922 14322 149943 14949 143654 19026 112871 20522 104643 20853 102982 21483 99962 21846 98301 23254 92349 25487 84258 28086 76461 29898 71827 30783 69762 32767 65538 32769 65534 34881 61566 41706 51491 42129 50974 42966 49981
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
