def is_palindrome(s):
    n = len(s)
    for i in range(n // 2):
        if s[i] != s[n - i - 1]:
            return False
    return True

def rotate_string(s):
    n = len(s)
    rotated = ""
    for i in range(1, n):
        rotated += s[i]
    rotated += s[0]
    return rotated

def is_rotated_palindrome(s):
    n = len(s)
    if n == 0:
        return False
    
    rotated_s = s
    for i in range(n):
        if is_palindrome(rotated_s):
            return True
        rotated_s = rotate_string(rotated_s)
    
    return False

def main():
    input_str = input()
    if is_rotated_palindrome(input_str):
        print("The string can be transformed into a palindrome by rotating it.")
    else:
        print("The string cannot be transformed into a palindrome by rotating it.")

main()
