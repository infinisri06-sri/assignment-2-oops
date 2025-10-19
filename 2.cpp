#include <iostream>
#include <string>
using namespace std;
class SimpleDict {
private:
    string keys[10];
    string values[10];
    int size;
public:
    SimpleDict() {
        size = 0;
    }
    void add(string key, string value) {
        keys[size] = key;
        values[size] = value;
        size++;
    }
    void search(string key) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                cout << "Value for '" << key << "' is: " << values[i] << endl;
                return;
            }
        }
        cout << "Key '" << key << "' not found." << endl;
    }
    void display() {
        cout << "All key-value pairs:\n";
        for (int i = 0; i < size; i++) {
            cout << keys[i] << " : " << values[i] << endl;
        }
    }
};
int main() {
    SimpleDict dict;

    dict.add("name", "srinath");
    dict.add("language", "C++");
    dict.add("goal", " OOP");
    dict.display();
    dict.search("language");
    dict.search("age"); 

    return 0;
}