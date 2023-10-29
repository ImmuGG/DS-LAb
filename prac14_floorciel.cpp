#include <iostream>
#include <vector>

using namespace std;

int findFloor(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int floor = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return arr[mid]; // Exact match found
        } else if (arr[mid] < target) {
            floor = arr[mid]; // Update floor
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return floor;
}

int findCeil(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int ceil = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return arr[mid]; // Exact match found
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            ceil = arr[mid]; // Update ceil
            right = mid - 1;
        }
    }

    return ceil;
}

int findPeak(const vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > arr[mid + 1]) {
            return arr[mid];
        }

        if (arr[left] <= arr[mid]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return arr[left];
}

int findMinimum(const vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > arr[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return arr[left];
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3}; // Example sorted rotated array

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int floor = findFloor(arr, target);
    int ceil = findCeil(arr, target);
    int peak = findPeak(arr);
    int minimum = findMinimum(arr);

    cout << "Floor: " << floor << endl;
    cout << "Ceil: " << ceil << endl;
    cout << "Peak (Maximum): " << peak << endl;
    cout << "Minimum: " << minimum << endl;

    return 0;
}
