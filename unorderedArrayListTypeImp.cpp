#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

unorderedArrayListType::unorderedArrayListType(int size)
    : arrayListType(size) {}

void unorderedArrayListType::insertAt(int location, int insertItem) {
    if (location < 0 || location >= maxSize) {
        cout << "The position of the item to be inserted is out of range." << endl;
    } else if (length >= maxSize) {
        cout << "Cannot insert in a full list" << endl;
    } else if (seqSearch(insertItem) != -1) {
        cout << insertItem << " is already in the set." << endl;
    } else {
        for (int i = length; i > location; i--) {
            list[i] = list[i - 1];  // Move the elements down
        }
        list[location] = insertItem;
        length++;
    }
}

void unorderedArrayListType::insertEnd(int insertItem) {
    if (length >= maxSize) {
        cout << "Cannot insert in a full list." << endl;
    } else if (seqSearch(insertItem) != -1) {
        cout << insertItem << " is already in the set." << endl;
    } else {
        list[length] = insertItem;
        length++;
    }
}

int unorderedArrayListType::seqSearch(int searchItem) const {
    for (int i = 0; i < length; i++) {
        if (list[i] == searchItem) {
            return i;
        }
    }
    return -1;
}

void unorderedArrayListType::remove(int removeItem) {
    int loc = seqSearch(removeItem);
    if (loc != -1) {
        removeAt(loc);
    } else {
        cout << "The item to be deleted is not in the list." << endl;
    }
}

void unorderedArrayListType::replaceAt(int location, int repItem) {
    if (location < 0 || location >= length) {
        cout << "The location of the item to be replaced is out of range." << endl;
    } else if (seqSearch(repItem) != -1) {
        cout << repItem << " is already in the set." << endl;
    } else {
        list[location] = repItem;
    }
}
