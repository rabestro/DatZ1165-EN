# Exercise 6

Two boys are playing card game 10 times. After each set, they count points and enter result of each player into your program. Your program must decide who is winner in current set and count how many sets winner is first player and how many sets winner is second player. To decide who is winner, follow rules:
- If one player has less points as 21 and another has more points than 21 then winner is player with points less than 21.
- If both players have points more than 21 or both have less than 21 then winner is player with result closer to 21.

## Example: 
_Bolded data are entered from keyboard_
```
1.set: 
1 player result is: **18**
2 player result is: **20**
The winner of 1. set is 2 player. Total result is 0:1
2.set: 
1 player result is: **12**
2 player result is: **22**
The winner of 2. set is 1 player. Total result is 1:1
3.set: 
1 player result is: **19**
2 player result is: **19**
Spare in 3. set – no winner. Total result is 1:1
4.set: 
1 player result is: **22**
2 player result is: **23**
The winner of 4. set is 1 player. Total result is 2:1
……
```
## Test case

```text
C:\Projects\DatZ1165-EN\EX6\cmake-build-debug\EX6.exe
1.set:
1 player result is:
17
2 player result is:
19
The winner of 1. set is 2 player.
--> Total result is 0:1
2.set:
1 player result is:
18
2 player result is:
18
Spare in 2. set ΓÇô no winner.
--> Total result is 0:1
3.set:
1 player result is:
22
2 player result is:
21
The winner of 3. set is 2 player.
--> Total result is 0:2
4.set:
1 player result is:
23
2 player result is:
24
The winner of 4. set is 1 player.
--> Total result is 1:2
5.set:
1 player result is:
25
2 player result is:
24
The winner of 5. set is 2 player.
--> Total result is 1:3
6.set:
1 player result is:
14
2 player result is:
15
The winner of 6. set is 2 player.
--> Total result is 1:4
7.set:
1 player result is:
15
2 player result is:
15
Spare in 7. set ΓÇô no winner.
--> Total result is 1:4
8.set:
1 player result is:
15
2 player result is:
14
The winner of 8. set is 1 player.
--> Total result is 2:4
9.set:
1 player result is:
17
2 player result is:
22
The winner of 9. set is 1 player.
--> Total result is 3:4
10.set:
1 player result is:
21
2 player result is:
21
Spare in 10. set ΓÇô no winner.
--> Total result is 3:4

Process finished with exit code 0
```
