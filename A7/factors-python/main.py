import re
from math import sqrt

"""
 * Lab Task A7.
 *
 * Requirements.
 *
 * Program should output error message for incorrect input data.
 * Program should allow repeated execution without quitting the program.
"""


# For a given number the function returns unsorted vector of it's factors.
# Time Complexity of the algorithm is O(sqrt(N)).
def factors(number):
    divisors = []
    for divisor in range(1, 1 + int(sqrt(number))):
        if number % divisor > 0:
            continue
        divisors.append(divisor)
        paired_divisor = number // divisor
        if paired_divisor != divisor:
            divisors.append(paired_divisor)
    return divisors


def user_interface():
    print("The program prints factors of natural number.")
    while True:
        data = input("Enter a natural number (0 for exit):")
        if not re.match(r"^\d+$", data):
            print("The input is invalid")
            continue
        number = int(data)
        if number == 0:
            return
        divisors = factors(number)
        divisors.sort()
        print(divisors)


if __name__ == '__main__':
    user_interface()
