#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

int main() {
    unorderedArrayListType intSet(25);

    int number;

    cout << "List 8: Enter 8 integers: ";

    for (int count = 0; count < 8; count++) {
        cin >> number;
        intSet.insertEnd(number);
    }

    cout << endl;
    cout << "intSet: ";
    intSet.print();
    cout << endl;

    cout << "Enter the number to be deleted: ";
    cin >> number;
    cout << endl;

    intSet.remove(number);

    cout << "After removing " << number << " intSet: ";
    intSet.print();
    cout << endl;

    cout << "Enter the search item: ";
    cin >> number;
    cout << endl;

    if (intSet.seqSearch(number) != -1)
        cout << number << " found in intSet." << endl;
    else
        cout << number << " is not in intSet." << endl;

    return 0;
}
