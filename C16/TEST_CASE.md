# Test Case

## C++ program 

### Examples of use
- [Incorrect data](#Incorrect-data)
- [Size 1](#size-1)
- [Size 2](#size-2)
- [Size 3](#size-3)
- [Size 4](#size-4)
- [Size 5](#size-5)

#### Incorrect data

```commandline
The program checks is given matrix symmetric.

Enter size of square matrix (0 for exit):
-3
The number should be positive or zero.

Enter size of square matrix (0 for exit):
0

Process finished with exit code 0

```
#### Size 1

```commandline
The program checks is given matrix symmetric.

Enter size of square matrix (0 for exit):
1
Enter 1 number representing the matrix:
7
Is the matrix symmetric against ...
     main diagonal: true
     side diagonal: true
   horizontal axis: true
     vertical axis: true
     
Enter size of square matrix (0 for exit):
0

Process finished with exit code 0

```
#### Size 2
```commandline
The program checks is given matrix symmetric.

Enter size of square matrix (0 for exit):
2
Enter 4 numbers representing the square matrix:
0 0 
0 0
Is the matrix symmetric by ...
main diagonal: true
side diagonal: true
   horizontal: true
     vertical: true

Enter size of square matrix (0 for exit):
2
Enter 4 numbers representing the square matrix:
1 2
3 4
Is the matrix symmetric by ...
main diagonal: false
side diagonal: false
   horizontal: false
     vertical: false

Enter size of square matrix (0 for exit):
2
Enter 4 numbers representing the square matrix:
1 2
2 3
Is the matrix symmetric by ...
main diagonal: true
side diagonal: false
   horizontal: false
     vertical: false

Enter size of square matrix (0 for exit):
0

Process finished with exit code 0
```

#### Size 3
```commandline
The program checks is given matrix symmetric.

Enter size of square matrix (0 for exit):
3
Enter 9 numbers representing the square matrix:
1 2 1
1 2 1
1 2 1
Is the matrix symmetric by ...
main diagonal: false
side diagonal: false
   horizontal: true
     vertical: true

Enter size of square matrix (0 for exit):
3
Enter 9 numbers representing the square matrix:
1 2 3
2 1 5
3 5 1
Is the matrix symmetric by ...
main diagonal: true
side diagonal: false
   horizontal: false
     vertical: false

Enter size of square matrix (0 for exit):
0

Process finished with exit code 0

```

#### Size 4

```commandline
C:\dev\DatZ1165-EN\C16\symmetric_matrix\cmake-build-debug\symetric_matrix.exe
The program checks is given matrix symmetric.

Enter size of square matrix (0 for exit):
4
Enter 16 numbers representing the matrix:
5 9 7 1
3 2 1 7
8 1 2 9
1 8 3 5
Is the matrix symmetric against ...
    main diagonal: false
    side diagonal: true
  horizontal axis: false
    vertical axis: false

Enter size of square matrix (0 for exit):
4
Enter 16 numbers representing the matrix:
3 9 8 7
1 2 5 4
1 2 5 4
3 9 8 7
Is the matrix symmetric against ...
    main diagonal: false
    side diagonal: false
  horizontal axis: true
    vertical axis: false

Enter size of square matrix (0 for exit):
4
Enter 16 numbers representing the matrix:
2 2 2 2 2 2 2 2 7 7 7 7 7 7 7 7
Is the matrix symmetric against ...
    main diagonal: false
    side diagonal: false
  horizontal axis: false
    vertical axis: true

Enter size of square matrix (0 for exit):
```

#### Size 5
```commandline
The program checks is given matrix symmetric.

Enter size of square matrix (0 for exit):
5
Enter 25 numbers representing the matrix:
1 0 4 3 7
0 2 9 5 3
4 9 3 9 4
3 5 9 2 0
7 3 4 0 1
Is the matrix symmetric against ...
    main diagonal: true
    side diagonal: true
  horizontal axis: false
    vertical axis: false

Enter size of square matrix (0 for exit):
0

Process finished with exit code 0

```
