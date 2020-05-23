# Remove duplicates from sorted array

> Given this array: nums = [1,1,2]

> We want a solution with O(1) as space complexity. In order to achieve that, we set auxiliary variables (i = 0, j = 1)

> We need certain rules:
nums[i] == nums[j]? j++
nums[i] != nums[j]? i++, nums[i] = nums[j]


> Let's solve the given example:
nums = [1,1,2]
nums = [1,2,2]

i = 0, 1
j = 1, 2

nums[i] = nums[0] = 1
nums[j] = nums[2] = 2

== ?
!= ?


> Let's solve another example:
[0,0,1,1,1,2,2,3,3,4]
[0,1,1,1,1,2,2,3,3,4]
[0,1,2,1,1,2,2,3,3,4]
[0,1,2,3,1,2,2,3,3,4]
[0,1,2,3,4,2,2,3,3,4]
i = 0, 1, 2, 3, 4
j = 1, 2, 3, 4, 5, 6, 7, 8, 9

nums[i] = nums[3] = 3
nums[j] = nums[9] = 4

== ?
!= ?

What do we return? i + 1 = length = 5

> So, which are the steps?
1. In order to achieve O(1) as space complexity, we set auxiliary variables (i = 0, j = 1)
2. nums[i] == nums[j]? j++
3. nums[i] != nums[j]? i++, nums[i] = nums[j]
4. We return our length, as: i + 1


