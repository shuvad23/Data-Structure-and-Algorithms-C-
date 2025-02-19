#include<iostream>
#include<algorithm>


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::reverse(arr,arr+size);
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
}