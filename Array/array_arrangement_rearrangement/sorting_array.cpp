#include<iostream>
#include<algorithm>

int main(){
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size=sizeof(arr)/sizeof(int);

    std::sort(arr,arr+size);
/*
Explanation:
-arr: This is the starting address (pointer) of the array you want to sort.
-arr + size: This is the ending address (pointer) of the array. It points to one past the last element of the array. Here, size is the number of elements in the array.
-std::sort: This is a function in the C++ Standard Library that sorts elements in a range defined by two iterators (or pointers).

*/
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
}