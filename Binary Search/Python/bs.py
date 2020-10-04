def binary_search(array, target, num_of_iterations=0):
    num_of_iterations += 1
    left = 0
    right = len(array) - 1
    mid = left + (right - left) // 2
    
    if array[mid] == target:
        return mid, num_of_iterations
    if right <= left:
        return -1, num_of_iterations
    if array[mid] < target:
        left = mid
    if array[mid] > target:
        right = mid

    return binary_search(array[left:right], target, num_of_iterations)


if __name__ == '__main__':
    array_length = 1000000
    target = 1

    array = [x+1 for x in range(array_length)]
    output, num_of_iterations = binary_search(array, target)

    print(f'Element {target} found at {output} index, {num_of_iterations} operations were performed.')
