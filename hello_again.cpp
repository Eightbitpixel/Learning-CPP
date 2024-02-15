#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main () {

    char filename_uwu [50];
    ifstream Magic_Object;
    cout << "Enter file name: ";
    cin.getline(filename_uwu, 50);
    Magic_Object.open(filename_uwu);

    if(!Magic_Object.is_open()) {
        exit(EXIT_FAILURE);
    }


    char word [9000];
    Magic_Object >> word;
    while (Magic_Object.good())
    {
        cout << word << "\n";
        Magic_Object >> word;
    }
    

    system("pause");
    return 0;
}
