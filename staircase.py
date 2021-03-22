#!/bin/python3

def staircase(n):
    for i in range(n):
        text = "#" * (i+1)
        print(text.rjust(n))

if __name__ == '__main__':
    n = int(input())

    staircase(n)
