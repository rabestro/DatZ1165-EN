# Test Case

## C++ program no-sqrt

| Input | Output | Comment |
| --: | :-- | ---
| -1 | The number should be positive.|
| -92323.4 | The number should be positive. | The program exit because of '.' 
| 	-2147483648 | The number should be positive. 
| -2147483649 | _The program loops endlessly_ | We entered number < MIN_VALUE for int
| 2147483648 | _The program loops endlessly_ | We entered number > MAX_VALUE for int
| hi  | _The program exits_ | Any text characters are interpreted as zero
| 0 | _The program exits_ | The expected behavior
