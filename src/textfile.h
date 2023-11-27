#include "file.h"

class TextFile : public File
{
public:
    TextFile(const string &n, int s, string &f);

    string getFormat() override;
    void displayInfo() override;
    string getContent();

    ~TextFile() override = default;
private:
    string content;

};