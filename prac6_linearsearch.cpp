#include <iostream>

using namespace std;

int main() {
    int arr[100]; // Assuming a maximum of 100 elements
    int size, searchValue;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value to search for: ";
    cin >> searchValue;

    int foundIndex = -1; // Initialize with -1 to indicate that the value is not found

    // Linear search using a switch case
    for (int i = 0; i < size; i++) {
        if (arr[i] == searchValue) {
            foundIndex = i;
            break; // Value found, exit the loop
        }
    }

    switch (foundIndex) {
        case -1:
            cout << "Value not found in the array." << endl;
            break;
        default:
            cout << "Value found at index " << foundIndex << " in the array." << endl;
            break;
    }

    return 0;
}
