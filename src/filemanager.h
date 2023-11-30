#include <filesystem>
#include <iostream>
#include <memory>

#include "textfile.h"


using namespace std;

class FileManager
{
public:
    static void showAll(const filesystem::path &p);

    static void openFile(const filesystem::path &p);
    
    static unique_ptr<File> checkType(const filesystem::path &p);

    static void showInfo(const filesystem::path &p);
    static void createFile(string &filename);
    static void deleteFile(string &filename);
    void clearFile(string &filename);
    void copyFile(string &filename);

};
