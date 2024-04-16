//
//  ReferenceToPointer.cpp
//  ReferenceToPointer
//
//  Created by Gabriel Push on 4/16/24.
//

#include <iostream>
using namespace std;

// func to make and fill array using pass by reference to a pointer to an int
int*& makeAndFillArray(int*& arr, int size) { // parameters: reference to a pointer var that points to an array of type int
                                              // int size for size of array
    arr = new int[size]; // allocated memory for array
    
    // loop to fill ints into array until size of array is reached
    for (int i = 0; i < size; i++) {
        arr[i] = i; // update array with i
    }
    return arr; // return reference to the pointer to the array
}


int main() {
    int* arr = nullptr; // init a pointer to array with nullptr
    int size = 6; // init size to 6
    
    makeAndFillArray(arr, size); // create and fill array using func
    
    // print each value of array filled by func
    cout << "Values of the function array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    delete[] arr; // free the dynamically allocated memory
    
    return 0;
}
