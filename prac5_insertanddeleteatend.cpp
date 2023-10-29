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

    cout << "Enter 1 to insert an element at the end or 2 to delete the element at the end: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the value to insert: ";
        cin >> newValue;

        arr[size] = newValue; // Insert the new element at the end
        size++; // Increase the size of the array

        cout << "Element inserted at the end successfully." << endl;
    } else if (choice == 2) {
        if (size == 0) {
            cout << "The array is already empty. Deletion failed." << endl;
        } else {
            size--; // Decrease the size of the array to remove the last element

            cout << "Element deleted from the end successfully." << endl;
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
