#ifndef GREENNODE_H
#define GREENNODE_H
using namespace std;

#include <string>

class GreenNode {
private:
    string projectName;
    string location;
    int startYear;
    GreenNode* next;

public:
    GreenNode(string name, string loc, int year);
    ~GreenNode();

    friend class GreenList;
};

#endif