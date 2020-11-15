"""
Algorithm calculates square root for given number
"""


def binary_search(target, precision=1e-9):
    if number < 0:
        return -1

    left = 0
    right = target
    mid = 0

    while right - left > precision:
        mid = left + (right - left) / 2

        if mid ** 2 < target:
            left = mid
        else:
            right = mid

    return mid


if __name__ == '__main__':
    number = 2
    output = binary_search(number)

    print(f'The nearest found square root of number {number} is {output}.')
