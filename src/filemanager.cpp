#include "filemanager.h"
#include "file.h"
#include <iostream>



void FileManager::showContent(const filesystem::path &p)
{
    for(const auto &it : filesystem::directory_iterator(p))
    {
        //cout << it << endl; //filepath _ name
    }
}

void FileManager::showAll(const filesystem::path &p)
{
    for(const auto &it : filesystem::directory_iterator(p))
    {
        if(it.is_regular_file())
        {
            File *new_file = new File(it.path().filename().string(), static_cast<int>(it.file_size()));
            new_file->displayInfo();
        }
    }
}

void FileManager::openFile(const filesystem::path &p)
{
    string content;
    ifstream file(p.filename().string());
    if(file.is_open())
    {
        // file >> content;
        // file.close();   
        // cout << content;
    }
    else
        cout << "file cant be opened"; // need exception
}
void FileManager::showInfo(string &filename)
{

}
void FileManager::createFile(string &filename)
{

}
void FileManager::deleteFile(string &filename)
{

}
void FileManager::clearFile(string &filename)
{

}
void FileManager::copyFile(string &filename)
{

}