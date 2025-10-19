#include <iostream>
using namespace std;

class Algorithm {
    private:
        int arr[50];
        int size;

    public:
        void input() {
            cout << "Enter number of elements: ";
            cin >> size;
            cout << "Enter " << size << " elements:\n";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
        }

        void display() {
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        void bubbleSort() {
            for (int i = 0; i < size - 1; i++) {
                for (int j = 0; j < size - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        swap(arr[j], arr[j + 1]);
                    }
                }
            }
            cout << "Array after Bubble Sort:\n";
            display();
        }

        void insertionSort() {
            for (int i = 1; i < size; i++) {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }
            cout << "Array after Insertion Sort:\n";
            display();
        }

        void selectionSort() {
            for (int i = 0; i < size - 1; i++) {
                int minIndex = i;
                for (int j = i + 1; j < size; j++) {
                    if (arr[j] < arr[minIndex]) {
                        minIndex = j;
                    }
                }
                swap(arr[i], arr[minIndex]);
            }
            cout << "Array after Selection Sort:\n";
            display();
        }
};
int main() {
    Algorithm a;
    a.input();

    cout << "\nOriginal Array:\n";
    a.display();

    a.bubbleSort();
    a.insertionSort();
    a.selectionSort();

    return 0;
}