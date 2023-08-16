#include<iostream>
using namespace std;
bool check_sort(int*,int);
int main(){
int n;
cin >> n;
int arr[n];
for(int i = 0 ;i < n;i++){
    cin >> arr[i];
    }
cout << check_sort(arr,n);
return 0;
}
bool check_sort(int* arr,int n){
for(int i = 0;i < n-1;i++){
    if(arr[i] > arr[i+1])
        return false;
}    
    return true;
} 


