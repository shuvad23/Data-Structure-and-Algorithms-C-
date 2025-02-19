#include<iostream>
using namespace std;
/*
4. Rearranging Based on Conditions
You can rearrange elements based on specific conditions, such as moving all even numbers to the front.

*/

// Example: Rearrange even numbers first
void evenNumberFirst(int arr[],int size){
    int left=0,right=size-1;
    while(left<right){
        while(arr[left] %2 == 0 && left<right){
            left++;
        }
        while(arr[right]%2!=0 && left<right){
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void oddNumberFirst(int arr[],int size){
    int left=0,right=size-1;
    while(left<right){
        while(arr[left] %2 != 0 && left<right){
            left++;
        }
        while(arr[right]%2==0 && left<right){
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"\nEven NUmber First: ";
    evenNumberFirst(arr,size);

    cout<<"\nOdd Number First: ";
    oddNumberFirst(arr,size);
    return 0;
}