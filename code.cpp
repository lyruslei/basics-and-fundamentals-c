//Lyrus Lei P. Doctolero
#include <iostream>
using namespace std;
int main() {
 const int MAX_SIZE = 10; // Maximum allowed elements per array
 int size1 = 0, size2 = 0;
 // User input size of array
 for (;;) {
 cout << "Enter size of first array (1 to 10): ";
 cin >> size1;
 if (size1 < 1 || size1 > MAX_SIZE) {
 cout << "Invalid input. Try again" << endl;
 } else {
 break;
 }
 }

 int arr1[size1];
 cout << "Enter " << size1 << " numbers for first array: ";
 for (int i = 0; i < size1; i++) {
 cin >> arr1[i];
 }
 // Get size of second array
 for (;;) {
 cout << "Enter size of second array (1 to 10): ";
 cin >> size2;
 if (size2 < 1 || size2 > MAX_SIZE) {
 cout << "Invalid input. Try again" << endl;
 } else {
 break;
 }
 }

 int arr2[size2];
 cout << "Enter " << size2 << " numbers for second array: ";
 for (int i = 0; i < size2; i++) {
 cin >> arr2[i];
 }
 // Merging arrays
 int mergedSize = size1 + size2;
 int mergedArray[mergedSize];

 for (int i = 0; i < size1; i++) { // Copies elements from 1st array into merged array
 mergedArray[i] = arr1[i];
 }
 for (int i = 0; i < size2; i++) { // Copies elements from 2nd array into merged array
 mergedArray[size1 + i] = arr2[i];
 }

 // Sorting in descending order (Bubble Sort)
 for (int i = 0; i < mergedSize - 1; i++) {
 for (int j = 0; j < mergedSize - i - 1; j++) {
 if (mergedArray[j] < mergedArray[j + 1]) { // Swap if left element is smaller
    int temp = mergedArray[j];
 mergedArray[j] = mergedArray[j + 1];
 mergedArray[j + 1] = temp;
 }
 }
 }
 // Displaying sorted merged array
 cout << "Merged array in descending order: ";
 for (int i = 0; i < mergedSize; i++) {
 cout << mergedArray[i] << " ";
 }
 cout << endl;

 return 0;
}