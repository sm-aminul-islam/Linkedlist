#include <iostream>
#include "Linkedlist.h"
using namespace std;

int main() {
    Linkedlist list;
    list.insertAtFront(16);
    list.insertAtFront(18);
    list.insertAtFront(12);
    list.print();
    return 0;
}
