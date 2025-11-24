#include "GreenList.h"
#include <iostream>

int main() {
    GreenList list;

    list.addBack("Green Dorm Project", "Salaya Dorm A", 2023);
    list.addBack("Solar Roof Initiative", "Engineering Faculty", 2022);
    list.addFront("Recycling Station", "Central Canteen", 2024);

    std::cout << "=== Mahidol Green University Projects ===\n";
    list.printAll();

    std::cout << "Removing: Solar Roof Initiative\n";
    list.removeByName("Solar Roof Initiative");

    list.printAll();

    return 0;
}
