# Lab Task D3

## Description

Create program in C++ in OOP structure, splitting it at least into 3 files. 
The class header should be put in header file (program.h).
All the methods should be implemented outside the header – in a special C++ file (program.cpp). 
Function main should be put in yet another C++ file (main.cpp). 
By default, all class fields are private, but class methods - public. 
Unlike previous programs, it is not required to follow specific interface rules regarding repeated execution here (function main can be hard-coded). 
See also other published requirements.

## Lab requirements 

D3. Create class "Date" with three numbers stored - year, month, day. 
The following class methods should be created: 
1. a constructor to initialize an object with given initial values, 
2. destructor which should notify about deleting the object, 
3. method "change" with 3 parameters, 
4. method "tomorrow" – which calculates and prints the next date, 
5. method "print", which prints the date.

## Date class

The Date class that is used in the programm is based on the Gregorian calendar, first established in 1582 by Pope Gregory XIII. This calendar was designed to correct the errors introduced by the less accurate Julian calendar.

In the Gregorian calendar, a normal year consists of 365 days. Because the actual length of a sidereal year (the time required for the Earth to revolve once about the Sun) is actually 365.2425 days, a "leap year" of 366 days is used once every four years to eliminate the error caused by three normal (but short) years. Any year that is evenly divisible by 4 is a leap year: for example, 1988, 1992, and 1996 are leap years.

However, there is still a small error that must be accounted for. To eliminate this error, the Gregorian calendar stipulates that a year that is evenly divisible by 100 (for example, 1900) is a leap year only if it is also evenly divisible by 400.

For this reason, the following years are not leap years:

1700, 1800, 1900, 2100, 2200, 2300, 2500, 2600

This is because they are evenly divisible by 100 but not by 400.

The following years are leap years: 1600, 2000, 2400

This is because they are evenly divisible by both 100 and 400.
