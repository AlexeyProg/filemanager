#include <iostream>
#include <fstream>


using namespace std;

class File
{
public:
    File(const string &n, int s, string &d);
    File(const string &n, int s);

    int getSize();
    string getName();
    string getLastWritingDate();
    virtual void displayInfo();
    virtual string getFormat() { return format ;};
    virtual ~File() = default;
protected:
    string format;
    string type;


private:
    string name;
    string unitSize = " Bytes";
    string writing_date;
    int size;
};