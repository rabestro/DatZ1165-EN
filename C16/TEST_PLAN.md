# Test plan

The [symmetric matrix](https://en.wikipedia.org/wiki/Symmetric_matrix) should be square so for the dimension of the matrix we use only one number: size. 

We limit our tests to size range \[1...5] because it is hard for manual testing to accurate enter all the numbers of large matrix. 

The program should report is the given matrix symmetric against:
- main diagonal
- side diagonal
- horizontal axis
- vertical axis

## Size 1

All matrix of size 1 should be symmetric by main and side diagonals as well vertically and horisontally. 

## Size 2 and up

- Any matrix where all numbers are same should be symmetric.
- If all number diffferent for matrix with size > 1 then it can't be symmtric against any diagonal or axis.
- We provide data to test symmetric matrix against different diagonals and axises. 

