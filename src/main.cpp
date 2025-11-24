#include "GreenList.h"
#include <iostream>

using namespace std;

int main() {
    GreenList list;

    list.addBack("Green Dorm Project", "Salaya Dorm A", 2023);
    list.addBack("Solar Roof Initiative", "Engineering Faculty", 2022);
    list.addFront("Recycling Station", "Central Canteen", 2024);

    cout << "=== Mahidol Green University Projects ===\n";
    list.printAll();

    cout << "Removing: Solar Roof Initiative\n";
    list.removeByName("Solar Roof Initiative");

    list.printAll();

    return 0;
}
