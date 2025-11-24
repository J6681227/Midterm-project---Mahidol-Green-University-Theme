#ifndef GREENNODE_H
#define GREENNODE_H

#include <string>

class GreenNode {
private:
    std::string projectName;
    std::string location;
    int startYear;
    GreenNode* next;

public:
    GreenNode(std::string name, std::string loc, int year);
    ~GreenNode();

    friend class GreenList;
};

#endif