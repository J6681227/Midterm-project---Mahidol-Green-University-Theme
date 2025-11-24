#ifndef GREENLIST_H
#define GREENLIST_H

#include "GreenNode.h"
#include <string>

class GreenList {
private:
    GreenNode* head;

public:
    GreenList();
    ~GreenList();

    void addFront(std::string name, std::string loc, int year);
    void addBack(std::string name, std::string loc, int year);
    bool removeByName(std::string name);
    void printAll() const;
};

#endif