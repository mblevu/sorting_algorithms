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

**Selection Sort**


Selection sort is another simple sorting algorithm that divides the input list into two parts: the sorted part and the unsorted part. The algorithm repeatedly selects the smallest (or largest, depending on the sorting order) element from the unsorted part and moves it to the end of the sorted part. 
Given the array: [64, 34, 25, 12, 22, 11, 90]

Step 1: Initial Array
[64, 34, 25, 12, 22, 11, 90]

Step 2: Pass 1

Find the smallest element in the unsorted part (11) and swap it with the first element (64).
[11, 34, 25, 12, 22, 64, 90]
Step 3: Pass 2

Find the smallest element in the remaining unsorted part (12) and swap it with the second element (34).
[11, 12, 25, 34, 22, 64, 90]
Step 4: Pass 3

Continue this process until the smallest elements are moved to their correct positions.
Since no more swaps are needed after the last pass, the array is now sorted in ascending order: [11, 12, 22, 25, 34, 64, 90].

Average and worst-case time complexity of O(n^2), making it inefficient for large datasets, but it performs better than bubble sort in practice because it reduces the number of swaps.

**Insertion Sort**


Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time. It takes elements from the unsorted part of the list and inserts them into their correct positions in the sorted part.

Given the array: [64, 34, 25, 12, 22, 11, 90]

Step 1: Initial Array
[64, 34, 25, 12, 22, 11, 90]

Step 2: Pass 1

Take the second element (34) and insert it into its correct position in the sorted part [64].
[34, 64, 25, 12, 22, 11, 90]
Step 3: Pass 2

Take the third element (25) and insert it into its correct position in the sorted part [34, 64].
[25, 34, 64, 12, 22, 11, 90]
Step 4: Pass 3

Continue this process until all elements are inserted into their correct positions.
Since no more insertions are needed after the last pass, the array is now sorted in ascending order: [11, 12, 22, 25, 34, 64, 90].

Average and worst-case time complexity of O(n^2) but performs well on small datasets and partially sorted lists.

**Quick Sort**


Quick sort is a popular divide-and-conquer sorting algorithm that recursively divides the input list into smaller sublists and sorts them. It works by selecting a pivot element and partitioning the array around the pivot, so that all elements less than the pivot come before it and all elements greater than the pivot come after it. 

Given the array: [64, 34, 25, 12, 22, 11, 90]

Step 1: Initial Array
[64, 34, 25, 12, 22, 11, 90]

Step 2: Pass 1 (Pivot = 90)

Partition the array into two sublists: [64, 34, 25, 12, 22, 11] and [90].
Recursively apply quick sort to both sublists.
Step 3: Pass 2 (Pivot = 11)

Partition the sublist [64, 34, 25, 12, 22] into [11] and [64, 34, 25, 12, 22].
Recursively apply quick sort to both sublists.
Step 4: Pass 3 (Pivot = 22)

Partition the sublist [64, 34, 25, 12] into [22] and [64, 34, 25, 12].
Recursively apply quick sort to both sublists.
Step 5: Pass 4 (Pivot = 12)

Partition the sublist [34, 25] into [12] and [34, 25].
Recursively apply quick sort to both sublists.
Step 6: Pass 5 (Pivot = 25)

Partition the sublist [34] into [25] and [34].
Recursively apply quick sort to both sublists.
Step 7: Pass 6 (Pivot = 34)

Combine all the sorted sublists to get the final sorted array.
The final sorted array in ascending order: [11, 12, 22, 25, 34, 64, 90].

Average-case time complexity of O(n log n)
Worst-case time complexity of O(n^2).

It is widely used in practice due to its efficiency and good average-case performance.