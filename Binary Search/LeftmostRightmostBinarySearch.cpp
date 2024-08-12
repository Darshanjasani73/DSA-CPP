#include<iostream>
using namespace std;

int LObinary_search(int arr[], int n, int key) {
    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            result = mid;
            right = mid - 1; 
        } else if (arr[mid] > key) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return result;
}

int RObinary_search(int arr[], int n, int key) {
    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            result = mid;
            left = mid + 1;
        } else if (arr[mid] > key) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return result;
}


void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the values of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Printing the array: " << endl;
    printarray(arr, n);

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int lo = LObinary_search(arr, n, key);
    int ro = RObinary_search(arr, n, key);

    if (lo == -1 || ro == -1) {
        cout << "Key not found in the array." << endl;
    } else {
        cout << "Leftmost occurrence of " << key << " is at index: " << lo << endl;
        cout << "Rightmost occurrence of " << key << " is at index: " << n-ro << endl;
    }

    return 0;
}
