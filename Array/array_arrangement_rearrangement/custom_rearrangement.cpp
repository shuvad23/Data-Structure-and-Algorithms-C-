#include<iostream>
using namespace std;
/*
5. Custom Rearrangement
You can implement custom logic to rearrange elements based on specific requirements.
Example: Move all zeros to the end

*/


int main(){
    int arr[] = {0, 1, 0, 3, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    int noneZeroindex=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            arr[noneZeroindex++]=arr[i];
        }
    }
    while(noneZeroindex<size){
        arr[noneZeroindex++]=0;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}
