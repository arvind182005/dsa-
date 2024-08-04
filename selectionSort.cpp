#include <iostream>
using namespace std;

int selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int arr[5] = {1, 9, 5, 4, 8};

    int bubble = selectionSort(arr, 5);

    cout << "after bubble sort = " << bubble << endl;
    return 0;
}