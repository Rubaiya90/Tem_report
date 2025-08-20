#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n, int &comparisons, int &swaps) {
    bool swapped;
    comparisons = 0;
    swaps = 0;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
                swapped = true;
            }
        }
        if (!swapped)
            break;
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
    bubbleSort(arr, n, comparisons, swaps);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nTotal comparisons: " << comparisons << endl;
    cout << "Total swaps: " << swaps << endl;

    return 0;
}
