#include <iostream>
using namespace std;

void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) // Loop runs 'n' times where 'n' is the size of the array
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int size) 
{
    int min = 0;
    int temp = 0;

    for (int i = 0; i < size; i++) // Loop runs 'n' times where 'n' is the size of the array
    {  
        min = i;

        for (int j = i + 1; j < 6; j++) // Inner loop runs 'n - i' times in the worst case
        { 
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        // Print array after each step
        cout << "Step " << i+1 << ":" << endl;
        printArray(arr, size);
    }
}

// Overall time complexity is O(n^2) due to nested loops
// After the array is sorted, searching for 18 will lead us to average case scenario which implies the element is in the middle of the array
int main() 
{
    int arr[6] = {22, 27, 16, 2, 18, 6};
    insertionSort(arr, sizeof(arr) / sizeof(arr[0])); 
    cout << endl << "In order to print first 4 steps, I have the length as 4" << endl;
    int arr2[9] = {7, 3, 5, 8, 2, 9, 4, 15, 6};
    insertionSort(arr2, 4);
    return 0;
}
