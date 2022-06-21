#include<iostream>
using namespace std;
void sortZeroOneTwo(int arr[], int n){
    int zero = 0, one = 0, two = 0;
    int i = 0;
    
    //count all numbers
    for ( i = 0; i < n; i++){
        if (arr[i]==0)
                zero++;
        
        else if (arr[i]==1)
            one++;
        
        else
            two++;
    }
        i = 0;
        
        //insert 0s
        while (zero!=0){
            arr[i] = 0;
            i++;
            zero--;
        }
        
        //insert 1s
        while (one!=0){
            arr[i] = 1;
            i++;
            one--;
        }

        //insert 2s
        while (two!=0){
            arr[i] = 2;
            i++;
            two--;
        }
        
    }
int main(){
int arr[] = {1,0,2,2,0,1,1};
int n = 7;
sortZeroOneTwo(arr,n);
for (int i = 0; i < n; i++){
    cout<<arr[i];
}
return 0;
}