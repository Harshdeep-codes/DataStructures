#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){
    cout<<"Array is:"<<endl;
    for (int i = size-1; i >= 0 ; i--)
    {
        cout<<arr[i];
    }
}
int main(){
int arr[100];
int n=5;
cout<<"Enter Elements:"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
reverseArray(arr, n);
return 0;
}