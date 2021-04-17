"""
  D1
    Given natural number N. 
    Print first N even natural numbers neither divisible by 3 nor 5. 
    Example. N = 10; answer: 2,4,8,14,16,22,26,28,32,34.
"""

n = int(input())
i = 0

while n > 0:
    i += 1
    if i % 3 and i % 5 and 1 - i % 2:
        print(i)
        n -= 1
