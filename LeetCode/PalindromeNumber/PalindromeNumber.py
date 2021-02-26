def isPalindrome(x):
    if x < 0:
        return False
    
    if x == 0:
        return True

    aux = x
    y = 0
    while aux:
        last_digit = aux % 10

        y *= 10
        y += last_digit

        aux //= 10

    return x == y

if __name__ == '__main__':
    x = 333

    print(isPalindrome(x))