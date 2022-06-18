#include<iostream>
using namespace std;
void swapAlternate(int arr[], int n){
    int i = 0;
    while (i<n && i+1<n)
    {
        swap(arr[i], arr[i+1]);
        i+=2;
    }
}
int main(){
int arr[6] = {2,7,5,6,9,8};
int n = 6;
swapAlternate(arr,n);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}