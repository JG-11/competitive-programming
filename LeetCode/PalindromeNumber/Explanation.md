# Palindrome Number

> We have an integer x as input, and we need to return whether it is a palindrome number or not. An integer is a palindrome when it reads the same backward as forward. For instance, 121 is palindrome while 123 is not.


What we can do is to divide this problem, and reduce it to the next couple of questions:
1. How can I get the last digit of my number?
2. How can I construct a new number with these last digits?

Because of that, we can use the operators **%** and **/** to construct the new integer in reverse order.

For instance, if we have the number x = 123:
- last_digit = x % 10 = 123 % 10 = 3
- new_number = new_number * 10 + last_digit

We have a special case when the number is negative: if x < 0 then return False (Always)

So our algorithm is:
1. Do a copy of x (e.g. a new variable called aux).
2. Apply **%** and **/** to get the last digit of x and construct our new number (y).
3. Return x == y.

And this is it! This is how we solve this problem :)