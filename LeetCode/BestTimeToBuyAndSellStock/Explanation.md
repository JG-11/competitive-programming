[7,1,5,3,6,4]

min = 1
max = 6

maxProfit = max - min = 5


[7,6,4,3,1]

min = 7, 6, 4, 3, 1
maxProfit = 0

>We traverse the array
>We keep a track of the minimum amount (and we update it)
>If ith amount > min, we get maxProfit (max - min)
>We return maxProfit

