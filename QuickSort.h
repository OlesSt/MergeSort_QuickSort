#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>

/* 1) Use last element of array - called PIVOT :
 *                  [1, 3, 5, 6*, 4, 7, 9, 8], 6 - is pivot
 * 2) Put it in center of array, put all elements that are smaller then PIVOT to the right, and bigger  to the left:
 *                  [1, 3, 5, 4, 6*, 7, 9, 8]; - partision
 * 3) Divide original array to two arrays using pivot as a cross line:
 *                  [1, 3, 5, 4] and [7, 9, 8];
 * 4) Recursively pass both arrays through same steps until it will be sorted
 */

namespace QuickSort
{
int partition(int array[], int startIndex, int endIndex)
{

    // add iterators
    int i = startIndex;
    int pivot = array[endIndex];

    for (int j = i; j < endIndex; j++)          // check with one of elements is bigger and swap it around the Pivot
    {
        if (array[j] < pivot)
        {
            std::swap(array[i], array[j]);
            i++;
        }
    }

    std::swap(array[i], array[endIndex]);      // swap last elements and return
    return i;
}


void quickSort(int array[], int startIndex, int endIndex)
{
    if (startIndex >= endIndex) { return; }

    int p = partition(array, startIndex, endIndex);     // find a Partition value of array

    quickSort(array, startIndex, p - 1);                // recursively sort two divided arrays...
    quickSort(array, p + 1, endIndex);                  // ...using Partition as a cross line
}


void runQuichSort()
{
    int test[] = {1, 9, 5, 8, 2, 7, 3, 2};

    for (int i = 0; i < 6; i++)
    { std::cout << test[i] << " ";}
    std::cout << std::endl;

    quickSort(test, 0, 5);

    for (int i = 0; i < 6; i++)
    { std::cout << test[i] << " ";}
    std::cout << std::endl;
}
}

#endif // QUICKSORT_H
