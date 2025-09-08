// dynamic_array_lab.h
#include <iostream>
#include <string>
using namespace std;

// =============================
// Part 1: Pointer Warm-up
// =============================

// TODO: Function to double the value pointed to by ptr
void doubleValue(int* ptr);

// TODO: Function to swap two integers using references
void swap(int& a, int& b);

// TODO: Function to allocate and initialize a dynamic array
// Each element should be set to its index
int* allocateAndInit(int size);


// =============================
// Part 2: Array Toolkit
// =============================

// TODO: Fill the array with user input values
void fillArray(int* arr, int size);

// TODO: Return the sum of all elements in the array
int sumArray(int* arr, int size);

// TODO: Print the array elements
void printArray(int* arr, int size);


// =====================================
// Part 3: DynamicStringList Class
// =====================================
// In this task, you will simulate a simplified contact list.
// You must store an expanding list of names as strings. The list
// should grow in size automatically when needed.
// This mimics real-world applications like managing entries in a phone book.

class DynamicStringList {
private:
    // TODO: Declare a pointer to string for the data array
    // TODO: Declare int variables for capacity and size

public:
    // TODO: Constructor with initial capacity
    // TODO: Destructor to free memory

    // TODO: Method to add a name to the list
    //        - If the list is full, double the capacity and reallocate

    // TODO: Method to get a name by index
    //        - Return the name at that index if valid, else return "Invalid index"

    // TODO: Method to get current number of names stored

    // TODO: Method to get current allocated capacity

    // TODO: Method to print all names in the list

    // TODO: Method to find the index of a given name
    //        - Return the index if found, else return -1

    // === Advanced Challenge Methods ===

    // TODO: Method to remove a name from the list
    //        - If name is found, shift all elements after it to the left
    //        - Decrease size by 1 (do not shrink capacity)

    // TODO: Method to shrink the capacity to fit the current size
    //        - Reallocate memory to match the number of names stored exactly
    //        - Helps practice resizing and memory efficiency
};