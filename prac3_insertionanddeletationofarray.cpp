#include <iostream>

using namespace std;

int main() {
    int arr[100]; // Assuming a maximum of 100 elements
    int size, choice, position, newValue;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter 1 to insert an element or 2 to delete an element: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the position at which to insert (0-based): ";
        cin >> position;

        if (position < 0 || position > size) {
            cout << "Invalid position. Insertion failed." << endl;
        } else {
            cout << "Enter the value to insert: ";
            cin >> newValue;

            // Shift elements to the right to make room for the new value
            for (int i = size; i > position; i--) {
                arr[i] = arr[i - 1];
            }

            arr[position] = newValue;
            size++; // Increase the size of the array

            cout << "Element inserted successfully." << endl;
        }
    } else if (choice == 2) {
        cout << "Enter the position of the element to delete (0-based): ";
        cin >> position;

        if (position < 0 || position >= size) {
            cout << "Invalid position. Deletion failed." << endl;
        } else {
            // Shift elements to the left to overwrite the element at the specified position
            for (int i = position; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }

            size--; // Decrease the size of the array

            cout << "Element deleted successfully." << endl;
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
