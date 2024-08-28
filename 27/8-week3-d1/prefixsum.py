def prefix_sum(arr):
    n = len(arr)
    prefix_sums = [0] * n 
    prefix_sums[0] = arr[0]    
    for i in range(1, n):
        prefix_sums[i] = prefix_sums[i - 1] + arr[i]

    return prefix_sums

def main():
    n = int(input("Enter the length of the array: "))
    arr = []
    for i in range(n):
        element = int(input())
        arr.append(element)
    result = prefix_sum(arr)
    
    for value in result:
        print(value, end=" ")

main()
