#!/usr/bin/python3

import sys
import time

def factorize(num):
    pairs = []
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            pairs.append((i, num // i))
    return pairs

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("Usage: factors <file>")
        sys.exit(1)

    file_name = sys.argv[1]

    try:
        with open(file_name, 'r') as file:
            numbers = file.read().splitlines()
    except FileNotFoundError:
        print("File not found")
        sys.exit(1)

    start_time = time.time()
    factorization = []

    for number in numbers:
        number = int(number)
        for factors in factorize(number):
            factorization.append(f"{number}={factors[0]}*{factors[1]}")
        if time.time() - start_time > 5:
            print("Time limit exceeded")
            sys.exit(1)

    print(factorization)
