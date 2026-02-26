# QuickSort Implementation (Lomuto Partition Scheme – Descending Order Variant)

## Overview

This is a **C/C++ implementation** of the QuickSort algorithm using the **Lomuto partition scheme**.  
Unlike the most common QuickSort versions that sort in **ascending order**, this version **sorts the array in descending order** (largest to smallest).

The code was written as part of an algorithms course assignment (file reference: EB3-67252-23.pdf).

## What the function does

```c
void quickSort(int numbers[], int start, int end)

Case,        Time Complexity,        Notes
Best case,   O(n log n)        balanced partitions
Average case  O(n log n)      most common case
Worst case,     O(n²)         already sorted / reverse sorted / bad pivots
Space complexity,O(log n)    recursion stack (average)
Worst-case space,O(n)         very unbalanced recursion


Why descending order?
Most textbook QuickSort examples sort ascending (< comparison).
This version uses > comparison → results in descending order.
Very useful when you want highest values first (e.g. leaderboard, priority queue simulation, etc.).

Input:  [64, 34, 25, 12, 22, 11, 90]

After quickSort(arr, 0, 6):
Output: [90, 64, 34, 25, 22, 12, 11]

Code Highlights / Important Points

Pivot is always chosen as the last element (numbers[end])
Elements greater than pivot are moved to the left side during partitioning
Final pivot position is found using smallerItemsPosition + 1
Recursive calls:
Left part: start to correctPositionOfSpecial - 1
Right part: correctPositionOfSpecial + 1 to end

How to Use
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr, 0, n-1);
    
    // Now arr contains elements in descending order
    return 0;
}

Limitations / Things to Watch Out For

Very bad performance on already sorted or nearly sorted data (O(n²))
No built-in protection against stack overflow on very large arrays
No handling of duplicate elements in a special way
Not stable (if you need stable sort → use merge sort)

