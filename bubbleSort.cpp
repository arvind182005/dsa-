// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout << " orignal array: ";
//     printArray(arr, size);

//     bubbleSort(arr, size);

//     cout << " sorted Array: ";
//     printArray(arr, size);

//     return 0;
// }

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << " original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);
    cout << " sorted array: ";
    printArray(arr, n);

    return 0;
}
