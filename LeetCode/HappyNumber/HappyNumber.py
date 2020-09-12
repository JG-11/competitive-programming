def isHappy(n):
    sums = set()

    while n != 1:
        addition = 0

        current = n
        while current > 0:
            addition += (current % 10) * (current % 10)

            current //= 10

        if addition in sums:
            return False
        
        sums.add(addition)

        n = addition

    return True

if __name__ == '__main__':
    n = int(input())

    res = isHappy(n)

    print(res)