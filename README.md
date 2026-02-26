This program implements a recursive QuickSort algorithm using the Lomuto partition scheme.
It sorts an array in-place by partitioning elements around a pivot.
Algorithm OverviewPivot Selection: The element at the end index is chosen as the specialNumber.
Partitioning: The array is iterated from start to end - 1. If an element is greater than the pivot , it is swapped toward the front.
Placement: After the loop, the pivot is moved to its correctPositionOfSpecial between the partitioned segments.
Recursion: The function recursively sorts the segments to the left and right of the pivot.
Complexity AnalysisAverage/Best Time Complexity: $O(n \log n)$ — Occurs when the pivot consistently splits the array into balanced halves.
Worst Time Complexity: $O(n^2)$ — Occurs if the pivot is consistently the smallest or largest element.
Space Complexity: $O(\log n)$ — Due to the stack depth of the recursive calls.
void quickSort(int numbers[], int start, int end) {
    if (start < end) { 
        int specialNumber = numbers[end]; // Pivot selection 
        int smallerItemsPosition = start - 1; // Boundary tracker 

        for (int currentPosition = start; currentPosition < end; currentPosition++) {
            // Sorts in DESCENDING order 
            if (numbers[currentPosition] > specialNumber) {
                smallerItemsPosition++;
                // Swap logic [cite: 12, 13, 14]
                int temporary = numbers[smallerItemsPosition];
                numbers[smallerItemsPosition] = numbers[currentPosition];
                numbers[currentPosition] = temporary;
            }
        }
        // Final pivot placement 
        int correctPositionOfSpecial = smallerItemsPosition + 1;
        
        // Recursive calls 
        quickSort(numbers, start, correctPositionOfSpecial - 1);
        quickSort(numbers, correctPositionOfSpecial + 1, end);
    }
}
 Key Note
This specific implementation sorts the array in descending order because it swaps elements that are greater than the pivot to the left side.
