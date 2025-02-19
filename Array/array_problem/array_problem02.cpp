// 3.2. Trapping Rainwater Problem
// Problem: Calculate the amount of rainwater that can be trapped between bars.
// Solution:

#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

// int trapRainwater(int arr[], int size) {
//     int left = 0, right = size - 1;
//     int leftMax = 0, rightMax = 0;
//     int water = 0;
//     while (left < right) {
//         if (arr[left] < arr[right]) {
//             if (arr[left] > leftMax) {
//                 leftMax = arr[left];
//             } else {
//                 water += leftMax - arr[left];
//             }
//             left++;
//         } else {
//             if (arr[right] > rightMax) {
//                 rightMax = arr[right];
//             } else {
//                 water += rightMax - arr[right];
//             }
//             right--;
//         }
//     }
//     return water;
// }

// // for practice code --------------------------------
// int trapRainwater1(int arr_list[],int arr_size){
//     int left=0,right=arr_size-1;
//     int leftmax=0,rightmax=0;
//     int water=0;
//     while(left<right){// Process the Side with the Smaller Height(Left side is smaller (arr[left] < arr[right]))
//         if(arr_list[left]<arr_list[right]){
//             if(arr_list[left]>leftmax){
//                 leftmax=arr_list[left];
//             }
//             else{
//                 water+=leftmax-arr_list[left];
//             }
//             left++;
//         }
//         else{
//             if(arr_list[right]>rightmax){
//                 rightmax=arr_list[right];
//             }
//             else{
//                 water+=rightmax-arr_list[right];
//             }
//             right--;
//         }
//     }
//     return water;
// }

// int main() {
//     int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << "Trapped rainwater: " << trapRainwater(arr, size) << endl;
//     cout << "Trapped rainwater: " << trapRainwater1(arr, size) << endl;
//     return 0;
// }

// for time complexity (0(n))-----------------
int TranpRainWater(int arr_list[],int arr_size){
    int left=0,right=arr_size-1;
    int leftmax=0,rightmax=0;
    int water=0;
    while(left<right){
        if(arr_list[left]<arr_list[right]){
            if(arr_list[left]>leftmax){
                leftmax=arr_list[left];
            }
            else{
                water+=leftmax-arr_list[left];
            }
            left++;
        }
        else{
            if(arr_list[right]>rightmax){
                rightmax=arr_list[right];
            }
            else{
                water+=rightmax-arr_list[right];
            }
            right--;
        }
    }
    return water;
}

// time complexity (0(n^2))-------------------------------------------------
int trapRainWater(int arr_list[],int arr_size){
    int* left_arr= new int[arr_size];
    int* right_arr=new int[arr_size];
    left_arr[0]=arr_list[0];
    for(int i=1;i<arr_size;i++){
        left_arr[i]=max(left_arr[i-1],arr_list[i]);
    }
    right_arr[arr_size-1]=arr_list[arr_size-1];
    for(int j=arr_size-2;j>=0;j--){
        right_arr[j]=max(right_arr[j+1],arr_list[j]);
    }
    int water=0;
    for(int i=0;i<arr_size;i++){
        water+=min(left_arr[i],right_arr[i])-arr_list[i];
    }
    return water;
}


int main(){
    int arr[]={1,0,2,1,1,2,3,0,4,1,2,1,3,4};
    int size=sizeof(arr)/sizeof(int);
    cout << "Trapped rainwater: " << TranpRainWater(arr, size) << endl;
    cout<<" Total block: " <<trapRainWater(arr,size)<<endl;
}