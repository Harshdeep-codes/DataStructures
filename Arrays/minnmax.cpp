#include<iostream>
using namespace std;

int findMax(int arr[], int size){
    int max=INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size){
    int min=INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
int arr[100];
int n=4;
cout<<"Enter the elements of array:"<<endl;

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

cout<<"Max Element if "<<findMax(arr,n)<<endl;
cout<<"Min Element is "<<findMin(arr,n);
return 0;
}