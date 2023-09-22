//Given an array, predict if the array contains duplicates or not
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
    int dublicate=INT_MIN;
    int dubind = 0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                dublicate = arr[i];
                dubind = i;
                cout<<"Dublicate element is = "<<dublicate<<"  present at index "<<dubind<<endl;

            }
        }
    }
    if(dublicate==INT_MIN){
        cout<<"NO dublicate elemnt are present given array";
    }
}// another approach is we can traverse aray and look is it present array before;