#include "filemanager.h"
#include <fstream>


void FileManager::showAll(const filesystem::path &p)
{
    for(const auto &it : filesystem::directory_iterator(p))
    {
        if(it.is_regular_file())
        {
            File *new_file = new File(it.path().filename().string(), static_cast<int>(it.file_size()));
            cout << new_file->getName() << endl;
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
    if(p.extension().string() == ".h" || p.extension().string() == ".cpp" || p.extension().string() == ".txt"
        || p.extension().string() == ".docx")
    {
        string filename = p.filename().string();
        int size = static_cast<int>(filesystem::file_size(p));
        string format = p.extension().string();

        unique_ptr<File> txt = make_unique<TextFile>(filename, size, format);
        return txt;
        //return make_unique<TextFile>(filename, size, format);   
    }
    // else
    // {

    // }
    return nullptr;
}

void FileManager::showInfo(const filesystem::path &p)
{
    if(filesystem::exists(p))
    {
        if(!filesystem::is_directory(p))
        {
            int size = static_cast<int>(filesystem::file_size(p));
            unique_ptr<File>file = make_unique<File>(p.filename().string(), size, p.extension().string());
            file->displayInfo();
        }
    }
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
