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
| 1 |1|
| 2|1 2|
|3|1 3|
|4|1 4 2
|5|1 5
|6|1 6 2 3
|7|1 7
|8|1 8 2 4
|9|1 9 3
|10|1 10 2 5
|11|1 11
|12|1 12 2 6 3 4
|15|
|16|
|17|
|36|
