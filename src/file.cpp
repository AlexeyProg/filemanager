#include "file.h"

File::File(const string &n, int s, string &d) : name(n), size(s), writing_date(d)
{

}

File::File(const string &n, int s) : name(n), size(s)
{
    if(size >= 1000)
    {
        unitSize = " Kilobytes";
        size /= 1024;
    }
    else if(size >= 1e+6)
    {
        unitSize = "Megabytes";
        size /= (1024 * 1024);
    }
}

string File::getLastWritingDate()
{
    return writing_date;
}

string File::getName()
{
    return name;
}

int File::getSize()
{
    return size;
}

void File::displayInfo()
{
    cout << name << ", " << size << unitSize << endl;
    // cout << "Date of last writing : " << writing_date << endl;
}
