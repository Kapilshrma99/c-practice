// find pivot element in rotated array.
#include<iostream>
using namespace std;
int get_pivot(int temp[],int length){
    int start = 0;
    int end = length-1;
    int mid = start+(end-start)/2;
    while(start < end){

        if(temp[0]>=temp[mid]){
          start = mid+1;  
        }else{
            end=mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}
int main(){
    int arr[5] = {8, 10, 17, 1, 3};
    cout<<get_pivot(arr, 5)<< endl;

    return 0;
}