#include<iostream>
#include<climits>
using namespace std;

int smax(int *arr, int size) {
    int max = INT_MIN;
    int s_max = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            s_max = max;
            max = arr[i];
        } else if (arr[i] > s_max && arr[i] != max) {
            s_max = arr[i];
        }
    }
    return s_max;
}

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter the elements of array one by one:" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " element of the array: ";
        cin >> arr[i];
    }

    cout << endl;
    int secondMax = smax(arr, size);
    cout << "The second largest element is: " << secondMax << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}
