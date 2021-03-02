# Test plan

## Creating and deleteing objects

The class Date log information about creating and destroing an object. The very first test should demonstrate that constructor and destructor properly called.

## Method change

The test should demonstrate that method change works properly

## Method tomorrow

The test should prof that method tomorrow works properly fore each months as well for regular and [leap years](https://en.wikipedia.org/wiki/Leap_year).

### How to determine whether a year is a leap year
To determine whether a year is a leap year, follow these steps:

1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
4. The year is a leap year (it has 366 days).
5. The year is not a leap year (it has 365 days).
