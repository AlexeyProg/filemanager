#include <iostream>

#include "filemanager.h"

using namespace std;

int main()
{
    //FileManager::showContent(filesystem::path("/Users/sokol/Desktop/c++_projects/FileManager/src"));
    int command;
    cout << "Enter command : ";
    cin >> command;
    if(command == 1)
        FileManager::showAll(filesystem::path("/Users/sokol/Desktop/c++_projects/FileManager/src"));
    else if(command == 2) // open file
    {
        cout << "File ? : ";
        string name;
        cin >> name;
        FileManager::openFile(name);
    }
    else
        cout << "Unknown command" << endl;
    return 0;
}