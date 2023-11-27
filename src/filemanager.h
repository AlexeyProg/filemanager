#include <filesystem>

using namespace std;

class FileManager
{
public:
    static void showContent(const filesystem::path &p);
    static void showAll(const filesystem::path &p);
    static void openFile(const filesystem::path &p);
    static void showInfo(string &filename);
    static void createFile(string &filename);
    static void deleteFile(string &filename);
    void clearFile(string &filename);
    void copyFile(string &filename);

};