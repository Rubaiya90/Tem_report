#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void insertionSort(int arr[], int n, int &comparisons, int &swaps) {
    comparisons = 0;
    swaps = 0;

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0) {
            comparisons++;
            if (arr[j] > key) {
                arr[j + 1] = arr[j];
                swaps++;
                j--;
            } else {
                break;
            }
        }
        arr[j + 1] = key;
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
    insertionSort(arr, n, comparisons, swaps);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nTotal comparisons: " << comparisons << endl;
    cout << "Total swaps: " << swaps << endl;

    return 0;
}

