def suffix_sum(arr):
    n = len(arr)
    suffix_sums = [0] * n 
    suffix_sums[n - 1] = arr[n - 1]    
    for i in range(n - 2, -1, -1):
        suffix_sums[i] = suffix_sums[i + 1] + arr[i]

    return suffix_sums

def main():
    n = int(input("Enter the length of the array: "))
    arr = []
    
    print("Enter the elements of the array:")
    for i in range(n):
        element = int(input())
        arr.append(element)

    result = suffix_sum(arr)
    
    for value in result:
        print(value, end=" ")

main()
