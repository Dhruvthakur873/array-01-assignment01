//Find the minimum value out of all elements in the array
#include<iostream>
#include<climits>
using namespace std;
    int main(){
    int size;
    cout<<"Enter the  size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array one by one :"<<endl;
    for(int i=0;i<=size-1;i++){
        cout<<"Enter the "<<i<<" element of the array : ";
        cin>>arr[i];
    }
    int min = INT_MAX;
    for(int i = 0; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout<<min;
}