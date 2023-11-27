#include <iostream>
#include <fstream>


using namespace std;

class File
{
public:
    File(string &n, int s, string &d);
    int getSize();
    string getName();
    string getDate();
    virtual void displayInfo();
    virtual string getFormat() { return format ;};
    virtual ~File() = default;
protected:
    string format;

private:
    string name;
    string create_date;
    int size;
};