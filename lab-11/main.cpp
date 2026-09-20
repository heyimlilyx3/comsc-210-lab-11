#include <iostream>
#include <string>
using namespace std;

struct album{
    string title;
    string artist;
    int numTracks;
    string* tracklist;
    int year;
};

album* inputAlbums(int& numAlbums){       // function to input albums and return pointer to array of albums

    cout << "Enter the number of albums: ";
    cin >> numAlbums;

    album* albums = new album[numAlbums];   // create array of albums using pointer

    for (int i = 0; i < numAlbums; i++) {   // loop to input details for each album
        cout << "Enter details for album " << (i + 1) << ":" << endl;
        cout << "Title: ";
        cin.ignore(); // fix cin problems
        getline(cin, albums[i].title);
        cout << "Artist: ";
        getline(cin, albums[i].artist);
        cout << "Number of tracks: ";
        cin >> albums[i].numTracks;

        albums[i].tracklist = new string[albums[i].numTracks];
        cin.ignore(); // fix cin problems
        for (int j = 0; j < albums[i].numTracks; j++) {
            cout << "Track " << (j + 1) << ": ";
            getline(cin, albums[i].tracklist[j]);
        }

        cout << "Year: ";
        cin >> albums[i].year;
    }

    return albums;


}

void printAlbums(album* albums, int numAlbums) {   // function to print details of albums
    for (int i = 0; i < numAlbums; i++) {
        cout << "Album " << (i + 1) << ":" << endl;
        cout << "Title: " << albums[i].title << endl;
        cout << "Artist: " << albums[i].artist << endl;
        cout << "Number of tracks: " << albums[i].numTracks << endl;
        cout << "Tracklist: " << endl;
        for (int j = 0; j < albums[i].numTracks; j++) {
            cout << "\t" << (j + 1) << ". " << albums[i].tracklist[j] << endl;
        }
        cout << "Year: " << albums[i].year << endl;
    }
}

int main() {
    int numAlbums;
    album* myAlbums = inputAlbums(numAlbums);
    printAlbums(myAlbums, numAlbums);

    return 0;
}