#include "dinermenuiterator.h"

DinerMenuIterator::DinerMenuIterator(vector<MenuItem*> items) {
    position = 0;
	this->items = items;
}


bool DinerMenuIterator::hasNext() {
    if (position >= 6 || &items[position] == NULL) {
        return false;
    }
    else {
        return true;
    }
    return true;
}

bool DinerMenuIterator::next(){
    MenuItem *menuItem = items[position];
    position = position + 1;
    return static_cast<void*>(menuItem);
}


