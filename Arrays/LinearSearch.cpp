//Linear Search
#include<iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key){
  
   for (int i = 0; i < size; i++){
       if(arr[i] == key)
        return true;
   }

return false;
}
int main(){
int arr[100];
cout<<"Enter the size of array = ";
int n;
cin>>n;
cout<<"Enter the Elements of array"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int k=5;
if(linearSearch(arr, n , k)){
    cout<<"Element Found";
}
else{
    cout<<"Element Not Found";
}
return 0;
}