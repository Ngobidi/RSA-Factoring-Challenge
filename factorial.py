#/usr/bin/env python3
import sys


def primef(x):
    if x <= 3:
        return int(x)
    if x % 2 == 0:
        return 2
    elif x % 3 == 0:
        return 3
    else:
    for a in range(5, int((n)**0.5) + 1, 6):
        if x % a == 0:
            return int(a)
    if x % (a + 2) == 0:
        return primef(x/(a+2))
    return int(x)


print(primef(int(sys.argv[1])))
