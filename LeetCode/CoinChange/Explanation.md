# Coin Change

## We need to apply Dynamic Programming
> We can do this by two approaches: Top-Down and Bottom-Up

### Top-Down (stack of calls)
> We need to create each path for all my resulting substractions. Some substractions and paths will repeat, one of the reasons why we need DP (memoization).

            11
        10    9             6
                4      5    4    1
                                     0

### Bottom-Up (array)
> We declare an array with length equals to amount + 1 (max), and we initialize it with max. In this approach, we use the results from the left, to get the result from the right.

coins = [1, 2, 5]
amount = 11

i = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
dp= [0, 1, 1, 2, 2, 1, 2, 2, 2, 3, 2, 3]

11 - 5 = 6
dp[6] + 1 = 2 + 1 = 3
min(3, 3) = 3


## Let's ennumerate the steps:
1. We apply DP (Bottom-Up is the approach I prefer for this problem)
2. We'll need an array called DP (which length = max, and max = amount + 1)
3. We initialize the DP array with max
4. We'll need to ask to the previous places in order to get the result (the math we did).
5. Return dp[amount] == max ? -1 : dp[amount]


 





