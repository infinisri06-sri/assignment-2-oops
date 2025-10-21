#include <iostream>
#include <string>
using namespace std;

// create  a class named SimpleDict 
class SimpleDict {
private:
    string keys[10];    // Array to store keys
    string values[10];  // Array to store corresponding values
    int size;           // Tracks the number of key-value pairs

public:
    // Constructor initializes size to 0
    SimpleDict() {
        size = 0;
    }

    // Adds a key-value pair to the dictionary
    void add(string key, string value) {
        keys[size] = key;      // Store key
        values[size] = value;  
        size++;                
    }

    //  it Searches for a key and prints its value if it finds 
    void search(string key) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                cout << "Value for '" << key << "' is: " << values[i] << endl;
                return;  
            }
        }
        // If key not found
        cout << "Key '" << key << "' not found." << endl;
    }

    // Displays all key-value pairs in the dictionary
    void display() {
        cout << "All key-value pairs:\n";
        for (int i = 0; i < size; i++) {
            cout << keys[i] << " : " << values[i] << endl;
        }
    }
};

int main() {
    SimpleDict dict;  // Create an  object of SimpleDict

    // Add key-value pairs
    dict.add("name", "srinath");
    dict.add("language", "C++");
    dict.add("goal", " OOP");

    // Display all pairs
    dict.display();

    // Search for existing and non-existing keys
    dict.search("language");  // Should find and print value
    dict.search("age");       // Should print "not found"

    return 0;
}
