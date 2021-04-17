# Define the notion, describe, and give examples. 
_Returning values from C++ functions using the return statement and parameters._

## Return Values

Once the function performs its intended task, it should return the result to the calling function. 
For this, we need the return type of the function. 
The function can return a single value to the calling function. 
The return type of the function is declared along with the function prototype.

### Example

```cpp
double sum(int a, int b){
    return a + b;
}
```

Here double is return type of the function.

## Pass by Reference

Pass by reference is yet another technique used by C++ to pass parameters to functions. 
In this technique, instead of passing copies of actual parameters, we pass references to actual parameters.

Note: References are nothing but aliases of variables or in simple words, it is another name that is given to a variable. 
Hence a variable and its reference share same memory location. We will learn references in detail in our subsequent tutorial.

In pass by reference technique, we use these references of actual parameters and as a result, 
the changes made to formal parameters in the function are reflected back to the calling function.

### Example 
```cpp
void swap(int &a, int &b){
   int temp = a;
   a = b;
   b = temp;
 }
 ```

### Sources: 
	https://www.softwaretestinghelp.com/functions-in-cpp/

## Links to other tasks:
- B:  https://code.sololearn.com/ca6A14a12a16/#cpp
- C1: https://code.sololearn.com/ca2a17A160A1/#cpp
- C2: https://code.sololearn.com/ca15A3a13a24/#cpp
- D1: https://code.sololearn.com/cA18A7a2531A/#py
- D2: https://code.sololearn.com/ca22a18A8a1a/#py


