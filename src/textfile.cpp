#include "textfile.h"

TextFile::TextFile(string &n, int s, string &d, string &f) : File(n, s, d)
{
    format = f;
}

string TextFile::getFormat()
{
    return format;
}

void TextFile::displayInfo()
{
    cout << "Name : " << getName() << endl;
    cout << "Size : " << getSize() << endl;
    cout << "Date of creation : " << getDate() << endl;
    cout << "Format : " << getFormat() << endl;
}

string TextFile::getContent()
{
    ifstream file(getName());
    if(file.is_open())
    {
        file >> content;
        file.close();
        return content;
    }
    else
        return "File is not opened";
}