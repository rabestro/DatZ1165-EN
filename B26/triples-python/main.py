import re
from math import sqrt

"""
 * Lab Task B26.
 *
 * Requirements.
 *
 * Program should output error message for incorrect input data.
 * Program should allow repeated execution without quitting the program.
"""


# The function calculates all triples for a given number where x^2+y^2+z^2 = n
# if no such triplets exist then the empty list will be returned
def triples(number):
    result = []
    for x in range(int(sqrt(number)), -1, -1):
        rest_x = number - x * x
        for y in range(int(sqrt(rest_x)), -1, -1):
            rest = rest_x - y * y
            z = int(sqrt(rest))
            if z * z == rest:
                result.append([x, y, z])
    return result


def user_interface():
    print("The program prints all triples of numbers (x, y, z) ")
    print("where x^2+y^2+z^2 = n (if such triplets exist).")
    while True:
        data = input("Enter a natural number (0 for exit):")
        if not re.match(r"^\d+$", data):
            print("The input is invalid")
            continue
        number = int(data)
        if number == 0:
            return
        result = triples(number)
        print(result)


if __name__ == '__main__':
    user_interface()
