#include <iostream>
#include "arrayListType.h"

using namespace std;

bool arrayListType::isEmpty() const {
    return (length == 0);
}

bool arrayListType::isFull() const {
    return (length == maxSize);
}

int arrayListType::listSize() const {
    return length;
}

int arrayListType::maxListSize() const {
    return maxSize;
}

void arrayListType::print() const {
    for (int i = 0; i < length; i++)
        cout << list[i] << " ";
    cout << endl;
}

bool arrayListType::isItemAtEqual(int location, int item) const {
    if (location < 0 || location >= length) {
        cout << "The location of the item to be removed is out of range." << endl;
        return false;
    } else
        return
