#include <iostream>
#include <string>
using namespace std;

string* reverseArray(string* arr, int size) {
    string* reversedArr = new string[size];
    for (int i = 0; i < size; i++) {
        *(reversedArr + i) = *(arr + (size - 1 - i)); // store value in reverse order via pointer
    }
    return reversedArr;
}

void printArray(string* arr, int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " "; // print value via pointer
    }
    cout << endl;
}

int main(){
    int size = 5;
    string* names = new string[size];   // create array of strings using pointer
    *(names + 0) = "Alexa";
    *(names + 1) = "Kelly";
    *(names + 2) = "Harley";
    *(names + 3) = "Bug";
    *(names + 4) = "Lily";

    printArray(names, size);

    string* reversedNames = reverseArray(names, size);
    printArray(reversedNames, size);

    // delete allocated memory
    delete[] names;
    delete[] reversedNames;

    return 0;
}