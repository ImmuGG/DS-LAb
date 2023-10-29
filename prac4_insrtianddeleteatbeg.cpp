#include <iostream>

using namespace std;

int main() {
    int arr[100]; // Assuming a maximum of 100 elements
    int size, choice, newValue;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter 1 to insert an element at the beginning or 2 to delete the element at the beginning: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the value to insert: ";
        cin >> newValue;

        // Shift all elements to the right to make room for the new value
        for (int i = size; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = newValue;
        size++; // Increase the size of the array

        cout << "Element inserted at the beginning successfully." << endl;
    } else if (choice == 2) {
        if (size == 0) {
            cout << "The array is already empty. Deletion failed." << endl;
        } else {
            // Shift all elements to the left to remove the element at the beginning
            for (int i = 0; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }

            size--; // Decrease the size of the array

            cout << "Element deleted from the beginning successfully." << endl;
        }
    } else {
        cout << "Invalid choice." << endl;
    }

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
