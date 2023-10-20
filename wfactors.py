#!/usr/bin/python3
import sys


def factorize(numb):
    """
    Generate 2 factors of a specified number
    """
    factor_A = 2
    while (numb % factor_A):
        if (factor_A <= numb):
            factor_A += 1

    factor_B = numb// factor_A
    return (factor_B, factor_A)


if len(sys.argv) != 2:
    sys.exit(f"Wrong usage: {sys.argv[0]} <file_path>")

f_name = sys.argv[1]

file = open(f_name, 'r')
statement = file.readstatement()

for line in statement:
    numb = int(line.rstrip())
    factor_B, factor_A = factorize(numb)
    print(f"{num} = {factor_B} * {factor_A}")
