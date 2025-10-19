#include <iostream>
using namespace std;

class SimpleList {
    int arr[100];
    int size;

public:
    SimpleList(){
        size = 0; 
    }
    void add(int value) {
        arr[size] = value;
        size++;
        if(size==100){
            cout<<"List is Full"<<endl;
        }

    }
    void remove(int value) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) {
                for (int j = i; j < size - 1; j++)
                    arr[j] = arr[j + 1];
                size--;
                break;
            }
        }
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    int getSize() {
        return size;
    }
};

int main() {
    SimpleList list;
    list.add(10);
    list.add(20);
    list.add(30);
    cout<< "Size: " << list.getSize() << endl; 
    list.display();
    cout<<"REMOVE 20 FROM THE LIST"<<endl;       
    list.remove(20);
    list.display();       
    cout << "Size: " << list.getSize() << endl; 

    return 0;
}