#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Element found
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[100]; // Assuming a maximum of 100 elements
    int size, searchValue;

    cout << "Enter the size of the sorted array: ";
    cin >> size;

    cout << "Enter " << size << " sorted elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + size); // Ensure the array is sorted

    cout << "Enter the value to search for: ";
    cin >> searchValue;

    int result = binarySearch(arr, size, searchValue);

    switch (result) {
        case -1:
            cout << "Value not found in the array." << endl;
            break;
        default:
            cout << "Value found at index " << result << " in the array." << endl;
            break;
    }

    return 0;
}
