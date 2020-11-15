"""
The array increases and then decreases. Find the maximum
"""


def binary_search(array):
    left = 0
    right = len(array) - 1

    while True:
        mid = left + (right - left) // 2

        if mid == left:
            break

        if array[mid] < array[mid - 1]:
            right = mid
        else:
            left = mid

    return array[mid]


if __name__ == '__main__':
    array = [i if i < 90 else 100 - i for i in range(100)]

    peak = binary_search(array)
    print(f'Found peak: {peak}')
