#include <iostream>
using namespace std;

class SimpleList {
    int arr[100]; // define  a class simple list 
    int size;

public:
    SimpleList(){   // Constructor initializes size to 0

        size = 0; 
    }
    void add(int value) {
        arr[size] = value;     // adds a new value to the list 
        size++;
        if(size==100){     // if the size of the array is 100 then the list is full .
            cout<<"List is Full"<<endl;
        }

    }
    void remove(int value) {
        for (int i = 0; i < size; i++) {   // removes the the first occurrence of a value from the list

            if (arr[i] == value) {
                for (int j = i; j < size - 1; j++)
                    arr[j] = arr[j + 1];
                size--;
                break;
            }
        }
    }

    void display() {                    // display all the elements from the list .
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    int getSize() {   // returns the current size of the list .
        return size;
    }
};

int main() {
    SimpleList list;  // create  a object list 
    list.add(10);    // Add 10 to the list
    list.add(20);    
    list.add(30);
    cout<< "Size: " << list.getSize() << endl;  // Print current size


    list.display();
    cout<<"REMOVE 20 FROM THE LIST"<<endl;       
    list.remove(20);
    list.display();       // Display updated list
    cout << "Size: " << list.getSize() << endl; // print updated size 

    return 0;

}
