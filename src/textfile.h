#include "file.h"

class TextFile : public File
{
public:
    TextFile(string &n, int s, string &d, string &f);

    string getFormat() override;
    void displayInfo() override;
    string getContent();

    ~TextFile() override = default;
private:
    string content;

};