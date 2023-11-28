#pragma once

#include "file.h"

class TextFile : public File
{
public:
    TextFile(const string &n, int s, const string &f);

    string getFormat() override;
    void displayInfo() override;
    ~TextFile() override = default;
private:
    string content;

};