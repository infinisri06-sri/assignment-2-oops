#include <iostream>
using namespace std;

//  class named Algorithm 
class Algorithm {
private:
    int arr[50];  // Array to store up to 50 integers
    int size;     

public:
    // Method to input array elements from the user
    void input() {
        cout << "Enter number of elements: ";
        cin >> size;
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];  // Read each element into the array
        }
    }

    // Method to display the current state of the array
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Method to perform Bubble Sort on the array
    void bubbleSort() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);  // Swap if elements are out of order
                }
            }
        }
        cout << "Array after Bubble Sort:\n";
        display();  // Show sorted array
    }

    // Method to perform Insertion Sort on the array
    void insertionSort() {
        for (int i = 1; i < size; i++) {
            int key = arr[i];  // Element to be inserted
            int j = i - 1;
            
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;  
        }
        cout << "Array after Insertion Sort:\n";
        display();  // Show sorted array
    }

    // Method to perform Selection Sort on the array
    void selectionSort() {
        for (int i = 0; i < size - 1; i++) {
            int minIndex = i;  // Assume current index has the minimum
            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;  
                }
            }
            swap(arr[i], arr[minIndex]);  // Swap current element with the minimum
        }
        cout << "Array after Selection Sort:\n";
        display();  // Show sorted array
    }
};

int main() {
    Algorithm a;  // Create an object of Algorithm class

    a.input();    // Take input from user

    cout << "\nOriginal Array:\n";
    a.display();  // Display original array

    a.bubbleSort();     // Sort using Bubble Sort
    a.insertionSort();  // Sort using Insertion Sort
    a.selectionSort();  // Sort using Selection Sort

    return 0;
}
