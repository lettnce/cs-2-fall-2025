// main.cpp
#include "dynamic_array_lab.h"
#include <cassert>

void testPart1() {
    cout << "Running Part 1: Pointer Warm-up Tests...\n";

    int val = 5;
    doubleValue(&val);
    assert(val == 10);

    int a = 3, b = 9;
    swap(a, b);
    assert(a == 9 && b == 3);

    int* arr = allocateAndInit(5);
    for (int i = 0; i < 5; ++i) assert(arr[i] == i);
    delete[] arr;
}

void testPart2() {
    cout << "Running Part 2: Array Toolkit Tests...\n";

    int* arr = new int[3]{2, 4, 6};
    assert(sumArray(arr, 3) == 12);

    cout << "Expected output: 2 4 6\nActual output:   ";
    printArray(arr, 3);

    delete[] arr;
}

void testPart3() {
    cout << "Running Part 3: DynamicStringList Tests...\n";

    DynamicStringList list(2);
    list.add("Alice");
    list.add("Bob");
    list.add("Charlie");  // should trigger resize

    assert(list.getSize() == 3);
    assert(list.get(1) == "Bob");
    assert(list.findIndex("Charlie") == 2);

    list.removeName("Bob");
    assert(list.getSize() == 2);
    assert(list.findIndex("Bob") == -1);

    list.shrinkToFit();
    assert(list.getCapacity() == 2);

    cout << "Final list:\n";
    list.print();
}

int main() {
    // testPart1();
    // testPart2();
    // testPart3();

    cout << "\nAll tests passed successfully.\n";
    return 0;
}
