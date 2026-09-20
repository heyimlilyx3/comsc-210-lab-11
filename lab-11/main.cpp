#include <iostream>
#include <string>
using namespace std;

struct album{
    string title;
    string artist;
    int numTracks;
    string tracklist[numTracks];
    int year;
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}