#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // int arr[] = {1, 8, 5, 7, 4, 9, 2};
    // int n = 7;
    int n = 0;
    cout << "Enter Array Size: ";
    cin >> n;
	int arr[n];
    cout <<"Enter array elements: ";
    for(int i=0; i<n; i++){
		cin>>arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}