//
//  QuickSort.h
//  MTH9815-Quiz1
//
//  Created by 王明森 on 11/22/22.
//

#ifndef QuickSort_h
#define QuickSort_h
#include <functional>

void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int* arr, int lo, int hi) {
    int pivot = arr[hi];    // Last element as pivot
    
    int i = lo - 1;
    
    for (int j = lo; j < hi; j++) {
        if (arr[j] <= pivot) {
            i++;
            Swap(&arr[i], &arr[j]);
        }
    }
    i++;
    Swap(&arr[i], &arr[hi]);
    
    return i;
}

void QuickSort(int* arr, int lo, int hi) {
    if (hi - lo > 0 || lo < 0) {
        int pivot = Partition(arr, lo, hi);
        QuickSort(arr, lo, pivot - 1);
        QuickSort(arr, pivot + 1, hi);
    }
}

void QuickSort(int* arr, int count) {
    QuickSort(arr, 0, count - 1);
}

#endif /* QuickSort_h */
