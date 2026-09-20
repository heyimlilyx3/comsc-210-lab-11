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

album* inputAlbums(){       // function to input albums and return pointer to array of albums

    int numAlbums;          // input number of albums from user
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

int main() {

    album* myAlbums = inputAlbums();

    return 0;
}