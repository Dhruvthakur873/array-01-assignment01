//Calculate the product of all the elements in the given array
#include<iostream>
using namespace std;
int product(int *arr, int size){
    int productOfArrEle = 1;
    for(int i=0;i<size;i++){
        productOfArrEle = productOfArrEle * arr[i];
    }
    return productOfArrEle;
}
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
    int result = product(arr,size);
    cout<<"The product of all the elements of array is = "<<result;
}