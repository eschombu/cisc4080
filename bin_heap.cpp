#include <iostream>
#include <sstream>
#include <string>
#include "bin_heap.h"

using namespace std;

void test_BinHeap() {
    BinaryHeap<string> H;

    cout << "Input items and their keys (separated by whitespace) to insert "
            "into the min-heap.\n";
    cout << "Hitting 'Enter' with no input stops building the heap and "
            "iteratively pops the minimum key value until it is empty.\n\n";
    cout << "(Item, Key): ";
    string line, item;
    int key;
    
    while (getline(cin, line) && !line.empty()) {
        istringstream line_stream (line);
        line_stream >> item >> key;
        H.insert(item, key);
        cout << "(Item, Key): ";
    }
    cout << endl;

    cout << "Heap:" << endl;
    H.print();
    while (H.size() > 0) {
        cout << "Pop min: " << H.pop_min() << endl;
        H.print();
    }
}

int main() {
    test_BinHeap();
}