#include "textfile.h"

TextFile::TextFile(const string &n, int s, const string &f) : File(n, s)
{
    format = f;
    type = "Text";
}

string TextFile::getFormat()
{
    return format;
}

void TextFile::displayInfo()
{
    cout << "Name : " << getName() << endl;
    cout << "Size : " << getSize() << " Bytes " << endl;
    cout << "Date of last writing : " << getLastWritingDate() << endl;
    cout << "Format : " << getFormat() << endl;
}