# sorting_algorithms


**Bubble sort**
Given an array of integers:

[64, 34, 25, 12, 22, 11, 90]

Step 1: Initial Array

[64, 34, 25, 12, 22, 11, 90]

Step 2: Pass 1

[34, 25, 12, 22, 11, 64, 90]  // Swapped 64 and 34
[25, 12, 22, 11, 34, 64, 90]  // Swapped 34 and 25
[12, 22, 11, 25, 34, 64, 90]  // Swapped 25 and 12
[12, 11, 22, 25, 34, 64, 90]  // Swapped 25 and 11
[12, 11, 22, 25, 34, 64, 90]  // No swap needed
[12, 11, 22, 25, 34, 64, 90]  // No swap needed

Step 3: Pass 2

[11, 12, 22, 25, 34, 64, 90]  // Swapped 12 and 11
[11, 12, 22, 25, 34, 64, 90]  // No swap needed
[11, 12, 22, 25, 34, 64, 90]  // No swap needed
[11, 12, 22, 25, 34, 64, 90]  // No swap needed
[11, 12, 22, 25, 34, 64, 90]  // No swap needed
[11, 12, 22, 25, 34, 64, 90]  // No swap needed

Step 4: Pass 3

[11, 12, 22, 25, 34, 64, 90]  // No swap needed
[11, 12, 22, 25, 34, 64, 90]  // No swap needed
[11, 12, 22, 25, 34, 64, 90]  // No swap needed
[11, 12, 22, 25, 34, 64, 90]  // No swap needed
[11, 12, 22, 25, 34, 64, 90]  // No swap needed
[11, 12, 22, 25, 34, 64, 90]  // No swap needed

Since no more swaps are needed, the array is now sorted in ascending order:

[11, 12, 22, 25, 34, 64, 90]