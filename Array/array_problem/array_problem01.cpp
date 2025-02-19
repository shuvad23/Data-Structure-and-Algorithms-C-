#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;


int findMax(int arr_list[],int arr_size){
    int max_value=INT_MIN;
    for(int i=0;i<arr_size;i++){
        if(arr_list[i]>max_value){max_value=arr_list[i];}
    }
    return max_value;
}

void reverse_arr(int arr_list[],int arr_size){
    int first_counter=0;
    int last_counter=arr_size-1;
    while(first_counter<last_counter){
        int temp=arr_list[first_counter];
        arr_list[first_counter]=arr_list[last_counter];
        arr_list[last_counter]=temp;
        first_counter++;
        last_counter--;
    }
}

void sorted(int arr_list[],int arr_size){
    for(int i=0;i<arr_size;i++){
        for(int j=i;j<arr_size;j++){
           if(arr_list[i]>arr_list[j]){
               int temp=arr_list[i];
               arr_list[i]=arr_list[j];
               arr_list[j]=temp;
           } 
        }
        
    }
}

int sum_arr(int arr_list[],int arr_size){
    int sum=0;
    for(int i=0;i<arr_size;i++){
        sum+=arr_list[i];
    }
    return sum;
}

int second_largest(int arr_list[],int arr_size){
    int first_max=INT_MIN;
    int second_max=INT_MIN;
    for(int i=0;i<arr_size;i++){
        if(arr_list[i]>first_max){
            int temp=first_max;
            first_max=arr_list[i];
            second_max=temp;
        }
    }
    return second_max;
}

void findDuplicates(int arr_list[],int arr_size){
    unordered_set<int> seen;
    for(int i=0;i<arr_size;i++){
        if(seen.find(arr_list[i])!=seen.end()){
            cout<<"Duplicates: "<<arr_list[i]<<endl;
        }
        else{
            seen.insert(arr_list[i]);
        }
    }
    for(int num:seen){
        cout<<num<<" ";
    }
}

int maxSubarraySum(int arr_list[],int arr_size){
    int maxSum=INT_MIN,currentSum=0;
    for(int i=0;i<arr_size;i++){
        currentSum+=arr_list[i];
        if(currentSum>maxSum){
            maxSum=currentSum;
        }
        if(currentSum<0){
            currentSum=0;
        }
    }
    return maxSum;
}

int main() {
	// your code goes here
	
	int arr[]={2,33,43,42,1,11,23,43,55,43,46,33};
    int size_arr=sizeof(arr)/sizeof(int);
    int result=findMax(arr,size_arr);
    cout<<"Max Value: "<<result<<endl;
    reverse_arr(arr,size_arr);
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<'\n';
    sorted(arr,size_arr);
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<'\n';
    int sum_result=sum_arr(arr,size_arr);
    cout<<"Sum : "<<sum_result<<endl;
    int second_max_value=second_largest(arr,size_arr);
    cout<<"second largest Value: "<<second_max_value<<endl;
    findDuplicates(arr,size_arr);
    cout<<'\n';
    int values[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size_values=sizeof(values)/sizeof(int);
    cout << "Maximum subarray sum: " << maxSubarraySum(values,size_values) << endl;
}
