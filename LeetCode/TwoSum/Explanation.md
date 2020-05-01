# Explanation of Map solution

  

> [2, 7, 11, 15]
>9

  

- We can traverse the whole array and store each element into a map. We care the index, so that's what we'll store.

><2, 0>
><7, 1>
><11, 2>
><15, 3>

  

- Then, we can calculate the complement of the target (in order to accomplish the expected sum), for each element of the array.

For this example, it would be:

>9 - 2 = 7 (do we have a 7?) If we do, and it's different to my initial position, we print both indexes: [0, 1]

- Another example:
>[3, 3]
>6

It would be:

><3, 1>
>[0, 1]

- A last one:

>[3, 2, 4]
>6

><3, 0>
><2, 1>
><4, 2>

We have to take care of do not repeat the same position:

>It won't be [0, 0]. It has to be: [1, 2]

Time Complexity: O(nlog(n))
Space Complexity: O(n)