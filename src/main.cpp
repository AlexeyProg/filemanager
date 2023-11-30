#include <iostream>
#include "filemanager.h"
#include <memory>

using namespace std;    

int main()
{
    //FileManager::showContent(filesystem::path("/Users/sokol/Desktop/c++_projects/FileManager/src"));
    int command;
    // while(true)
    // {
    //     cout << "Enter command : ";
    //     cin >> command;
    //     if(command == 1)
    //         FileManager::showAll(filesystem::path("/Users/sokol/Desktop/c++_projects/FileManager/src"));
    //     else if(command == 2) // open file
    //     {
    //         cout << "File name : ";
    //         string name;
    //         cin >> name;
    //         //File *file FileManager::checkType(name);
    //         auto file = FileManager::checkType(name);
	//         auto text = dynamic_cast<TextFile*>(file.get());
    //         if(text)
    //         {
    //             FileManager::openFile(name);
    //         }
    //         else
    //             cout << "It is not a text file" << endl;
    //     }
    while(true)
    {
        try
        {
            cout << "Enter command : 1 - showall, 2 - openfile, 3 - showinfo ... " << endl;
            cin >> command;
            if(command == 1)
                FileManager::showAll(filesystem::path("/Users/sokol/Desktop/c++_projects/FileManager/src"));
            else if(command == 2) // open file
            {
                cout << "File name : ";
                string name;
                cin >> name;
                //File *file FileManager::checkType(name);
                auto file = FileManager::checkType(name);
                auto text = dynamic_cast<TextFile*>(file.get());
                if(text)
                {
                    FileManager::openFile(name);
                }
                else
                    cout << "It is not a text file" << endl;
            }
            else if(command == 3)
            {
                cout << "File name : ";
                string name;
                cin >> name;
                FileManager::showInfo(name);
            }
            else
                throw command;
        }
        catch(int num)
        {
            cout << "Unknown command " << num << endl;
            break;
        }
    }
    return 0;
}
