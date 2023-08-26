#include <iostream>
using namespace std;

void printSubArray(int arr[], int start, int end) 
{
    for (int i = start; i <= end; i++) 
    {
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int start, int mid, int end) //takes n steps
{
    int i = start;
    int j = mid + 1;
    int k = start;
    int temp[6];

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int start, int end) //takes log n steps
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        cout << "Left: " << endl;
        printSubArray(arr, start, mid);
        //printSubArray(arr, mid + 1, end);
        cout << endl;
        mergeSort(arr, start, mid); 
        cout << "Right: " << endl;
        //printSubArray(arr, start, mid);
        printSubArray(arr, mid + 1, end);
        cout << endl;
        mergeSort(arr, mid + 1, end); 
        merge(arr, start, mid, end); 
    }
}

int project2_main()
{
    int arr[] = {16, 21, 11, 8, 12, 22};
    mergeSort(arr, 0, 5);
    return 0;
}