#include <iostream>
using namespace std;

// Function to perform binary search
int binary_search(int ar[], int target, int start, int end) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (ar[mid] == target) {
            return mid;
        } else if (ar[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1; // Target not found
}

// Function to find the pivot (the point where the array is rotated)
int find_pivot(int ar[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;
        if (ar[mid] > ar[end]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}

// Function to search target in rotated sorted array
int search_rotated_array(int ar[], int length, int target) {
    int pivot = find_pivot(ar, length);

    // Check if target is at pivot
    if (ar[pivot] == target) {
        return pivot;
    }
    // Determine which part of the array to search in
    if (target >= ar[0]) {
        return binary_search(ar, target, 0, pivot - 1);
    } else {
        return binary_search(ar, target, pivot + 1, length - 1);
    }
}

int main() {
    int arr[] = {5, 6, 7, 1, 2, 3, 4};
    int target;
    cout << "Enter target: ";
    cin >> target;
    int length = sizeof(arr) / sizeof(arr[0]);

    // Search for the target in the rotated sorted array
    int result = search_rotated_array(arr, length, target);
    if (result != -1) {
        cout << "Target found at index " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
