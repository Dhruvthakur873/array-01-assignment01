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
    bool flag = false;
    for(int i=0;i<size;i++){
        if(arr[i]!=i+1){
            cout<<"missing "<<i+1<<"  at "<<i<<" index";
            break;
        }
        
    }
    if(flag==0){
        cout << " no number is missing";
    }

}
