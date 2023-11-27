#include "file.h"

File::File(string &n, int s, string &d) : name(n), size(s), create_date(d)
{

}

string File::getDate()
{
    return create_date;
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
    cout << "Name : " << name << endl;
    cout << "Size : " << size << endl;
    cout << "Date of creation : " << create_date << endl;
}
