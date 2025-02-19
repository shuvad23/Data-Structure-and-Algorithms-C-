/*
Array rotation is a common problem where you need to rotate the elements of an array by a given number of positions. There are two types of rotations:
Left Rotation: Elements are shifted to the left.
Right Rotation: Elements are shifted to the right.
*/



#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


// Left Rotation: Elements are shifted to the left.
void leftRotate(vector<int>& arr_list,int k){
    int n=arr_list.size();
    k=k%n;
    reverse(arr_list.begin(),arr_list.begin()+k);
    reverse(arr_list.begin()+k,arr_list.end());
    reverse(arr_list.begin(),arr_list.end());
}

// Right Rotation: Elements are shifted to the right.
void rightRotate(vector<int>& arr_list,int k){
    int n=arr_list.size();
    k=k%n;
    reverse(arr_list.end()-k,arr_list.end());
    reverse(arr_list.begin(),arr_list.end()-k);
    reverse(arr_list.begin(),arr_list.end());
}

// 3. Using Temporary Array
void leftRotatetemp(vector<int>& arr_list,int k){
    int n=arr_list.size();
    k=k%n;
    vector<int> temp(arr_list.begin()+k,arr_list.end());
    temp.insert(temp.end(),arr_list.begin(),arr_list.begin()+k);
    arr_list=temp;
}

void rightRotatetemp(vector<int>& arr_list,int k){
    int n=arr_list.size();
    k=k%n;
    vector<int> temp(arr_list.end()-k,arr_list.end());
    temp.insert(temp.end(),arr_list.begin(),arr_list.end()-k);
    arr_list=temp;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    // leftRotate(arr, k);
    // cout << "Array after left rotation: ";
    // for (int num : arr) {
    //     cout << num << " ";
    // }
    // rightRotate(arr, k);
    // cout << "Array after right rotation: ";
    // for (int num : arr) {
    //     cout << num << " ";
    // }

    // leftRotatetemp(arr, k);
    // cout << "Array after left rotation: ";
    // for (int num : arr) {
    //     cout << num << " ";
    // }

    rightRotatetemp(arr, k);
    cout << "Array after right rotation: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}