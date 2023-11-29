#include "filemanager.h"
#include <fstream>


// void FileManager::showContent(const filesystem::path &p)
// {
//     for(const auto &it : filesystem::directory_iterator(p))
//     {
//         //cout << it << endl; //filepath _ name
//     }
// }

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
        string str;
        while(getline(file, str))
        {
            cout << str << endl;
        }
    }
    else
        cout << "file cant be opened"; // need exception
} 

unique_ptr<File> FileManager::checkType(const filesystem::path &p)
{
    if(p.extension().string() == ".h" || p.extension().string() == ".cpp" || p.extension().string() == ".txt")
    {
        string filename = p.filename().string();
        int size = static_cast<int>(filesystem::file_size(p));
        string format = p.extension().string();

        unique_ptr<File> txt = make_unique<TextFile>(filename, size, format);
        return txt;
        //return make_unique<TextFile>(filename, size, format);   
    }
    else
    {

    }
    return nullptr;
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
