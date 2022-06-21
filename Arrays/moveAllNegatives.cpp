#include<iostream>
using namespace std;
void moveAllNegatives(int arr[],int n){
    int j = 0;
    for (int i = 0; i < n; i++){
        if(arr[i]<0){
            swap(arr[i], arr[j]);
            j++;   
        }
    }
    
}
int main(){
int arr[]={1,2,-2,-1,6};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<"Size = "<<n<<endl;
moveAllNegatives(arr,n);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}