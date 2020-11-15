def binary_search(array, target):
    left = 0
    right = len(array) - 1
    mid = left + (right - left) // 2
    current = array[mid]
    
    if current == target:
        return mid
    if right <= left:
        return -1
    if current < target:
        left = mid
    if current > target:
        right = mid

    return binary_search(array[left:right], target)


if __name__ == '__main__':
    array_length = 1000000
    target = 1
    array = [x+1 for x in range(array_length)]

    output = binary_search(array, target)
    print(f'Element {target} found at {output} index.')
