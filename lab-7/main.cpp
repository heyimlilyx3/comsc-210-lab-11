#include <iostream>
#include <string>
using namespace std;

int main(){
    int size = 5;
    string* names = new string[size];
    *(names + 0) = "Alexa";
    *(names + 1) = "Kelly";
    *(names + 2) = "Harley";
    *(names + 3) = "Bug";
    *(names + 4) = "Lily";

}