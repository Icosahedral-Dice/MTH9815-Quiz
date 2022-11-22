//
//  main.cpp
//  MTH9815-Quiz1
//
//  Created by 王明森 on 11/22/22.
//

#include <iostream>
#include "QuickSort.h"
#include "Heap.hpp"

void PrintArray(const int* arr, std::size_t size) {
    for (std::size_t i = 0; i < size; i++) {
        std::cout << arr[i] << '\t';
    }
    std::cout << std::endl;
}

void TestQuickSort() {
    int arr[] = {1, 1, 4, 5, 1, 4};
    int count = sizeof(arr) / sizeof(arr[0]);
    PrintArray(arr, count);
    QuickSort(arr, count);
    PrintArray(arr, count);

}

void TestMaxHeap() {
    std::vector<int> arr = {1, 9, 1, 12, 8, 1, 0};
    
    Heap heap;
    
    for (int elem : arr) {
        heap.Push(elem);
    }
    
    std::cout << heap.PushPop(9) << std::endl;
    
    while (!heap.empty()) {
        std::cout << heap.Pop() << '\t';
    }
    std::cout << std::endl;
    
}

int main(int argc, const char * argv[]) {
    
    TestQuickSort();
    TestMaxHeap();
    
    return 0;
}
