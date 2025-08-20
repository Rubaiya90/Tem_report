#include <iostream>

using namespace std;

void selectionSort(int arr[], int n, int &comparisons, int &swaps) {
    comparisons = 0;
    swaps = 0;

    for (int i = 0; i < n - 1; i++) {
        int mid = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[mid]) {
                mid = j;
            }
        }

        if (mid != i) {
            int temp = arr[i];
            arr[i] = arr[mid];
            arr[mid] = temp;
            swaps++;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;


 int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i]= i +1 ;
    }

    int comparisons = 0, swaps = 0;
    selectionSort(arr, n, comparisons, swaps);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nTotal comparisons: " << comparisons << endl;
    cout << "Total swaps: " << swaps << endl;

    return 0;
}

