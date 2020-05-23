# Sort Colors
>Initial case:
nums = [2,0,2,1,1,0]
nums = [0,0,1,1,2,2]

>What can come up to mind is to track the left (for 0's) and the right (for 2's):
left = 0,
right = nums.size() - 1

>How do I code a swap function?
Let's say we want to swap nums[0] and nums[3], so:
temp = nums[0]
nums[0] = nums[3]
nums[3] = temp

>Now, what about the cases?
0? swap(n[current], n[left]), left++, current++
1? current++
2? swap(n[current], n[right]), right--

>When are we gonna do that? While(current <= right)

>Let's test:
l = 0, 1, 2
r = 6 - 1 = 5, 4, 3
c = 0, 1, 2, 3, 4

n[c] = n[3] = 1

[2,0,2,1,1,0]
[0,0,2,1,1,2]
[0,0,2,1,1,2]
[0,0,2,1,1,2]
[0,0,1,1,2,2] <- Yep, we got the right answer

[1, 0, 2] <- This is another example that might become a little tricky
[0, 1, 2] <- This is the answer

>Which are the steps?
1. In order to achieve a O(1), we need two pointers (left and right), also an auxiliary variable (current)
2. We go through the array while current <= right
3. 0? swap(n[current], n[left]), left++, current++
4. 1? current++
5. 2? swap(n[current], n[right]), right--
6. We neither need to return nor print the array
