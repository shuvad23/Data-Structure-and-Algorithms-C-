#include<iostream>
#include<algorithm>
#include<random>
#include<chrono>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    unsigned seed=chrono::system_clock::now().time_since_epoch().count();
    shuffle(arr,arr+size,default_random_engine(seed));
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}