#include "GreenList.h"
#include <iostream>

GreenList::GreenList() : head(nullptr) {}

GreenList::~GreenList() {
    GreenNode* current = head;
    while (current != nullptr) {
        GreenNode* temp = current;
        current = current->next;
        delete temp;
    }
}

void GreenList::addFront(std::string name, std::string loc, int year) {
    GreenNode* newNode = new GreenNode(name, loc, year);
    newNode->next = head;
    head = newNode;
}

void GreenList::addBack(std::string name, std::string loc, int year) {
    GreenNode* newNode = new GreenNode(name, loc, year);

    if (head == nullptr) {
        head = newNode;
        return;
    }
    GreenNode* cur = head;
    while (cur->next != nullptr)
        cur = cur->next;

    cur->next = newNode;
}

bool GreenList::removeByName(std::string name) {
    if (head == nullptr) return false;

    if (head->projectName == name) {
        GreenNode* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    GreenNode* prev = head;
    GreenNode* cur = head->next;

    while (cur != nullptr) {
        if (cur->projectName == name) {
            prev->next = cur->next;
            delete cur;
            return true;
        }
        prev = cur;
        cur = cur->next;
    }

    return false;
}

void GreenList::printAll() const {
    GreenNode* cur = head;
    while (cur != nullptr) {
        std::cout << "Project: " << cur->projectName << "\n";
        std::cout << "Location: " << cur->location << "\n";
        std::cout << "Start Year: " << cur->startYear << "\n";
        std::cout << "-----------------------------\n";
        cur = cur->next;
    }
}