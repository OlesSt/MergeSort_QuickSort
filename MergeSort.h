#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>

/* 1) Divide array in to 2 equal arrays.
 * 2) Call recursion to apply to both new arrays and sort them
 * 3) Merge two sorted arrays into one array
 * */

namespace MergeSort
{

void mergeArrays(int *array ,int startIndex,int endIndex)
{
    // Add soft of iterators and temporary array
    int mid = (startIndex + endIndex) / 2;
    int j = mid + 1;

    int i = startIndex;
    int k = startIndex;

    int temp[100];

    // Merge two arrays into temporary array
    while ( i <= mid && j <= endIndex)
    {
        if (array[i] < array[j])    {temp[k++] = array[i++];}
        else                        {temp[k++] = array[j++];}
    }
    while (i <= mid)      {temp[k++] = array[i++];}
    while (j <= endIndex) {temp[k++] = array[j++];}

    //Copy all elements from temp Array into original Array
    for (int i = startIndex; i<= endIndex; i++) {array[i] = temp[i];}
}

void mergeSort(int array[], int startIndex, int endIndex){
    if(startIndex >= endIndex) {return;}

    int mid = (startIndex + endIndex) / 2;          // add mid index to divide array by it

    mergeSort(array, startIndex, mid);              // Recursively sort two divided arrays...
    mergeSort(array, mid + 1, endIndex);            // ...using mid index as a length array value

    mergeArrays(array, startIndex, endIndex);       // Merge two arrays into one after it's been sorted
}

void runMergeSort()
{
    int test[] = {1,2,3,4,3,6};

    for (int i = 0; i < 6; i++)
    { std::cout << test[i] << " ";}
    std::cout << std::endl;

    mergeSort(test, 0, 5);

    for (int i = 0; i < 6; i++)
    { std::cout << test[i] << " ";}
    std::cout << std::endl;
}
}

#endif // MERGESORT_H
