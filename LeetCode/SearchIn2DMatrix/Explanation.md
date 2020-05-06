matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]

[1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 50]

rows = matrix.size() = 3
cols = matrix[0].size() = 4


16

O(mn)

O(log(mn))

[1, 3, 5, 11, 14]

l = 0
r = 4
mid = (l + r) / 2 = (0 + 4) / 2 = 2

a[2] = 5

exists 3?

l = mid + 1

r = mid - 1

a[mid] = target 


//New algorithm
l = 0
r = r * c - 1

rows = 3
cols = 4

r = 4 * 3 - 1 = 11

mid = (l + r) / 2



matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]

l = 0
r = 11

mid = (l + r) / 2

mid / cols = row
mid mod cols = col

0, 11

mid = (0 + 11) / 2
mid = 11 / 2 = 5

matrix[mid / cols][mid mod cols]

row = [5 / 4] = 1
col = [5 mod 4] = 1

>Binary search
>Play with rows and columns (division and mod)