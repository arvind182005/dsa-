// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;

//     int mid = start + (end - start) / 2;

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }

//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }

//         mid = start + (end - start) / 2;
//     }

//     return -1;
// }

// int main()
// {
//     int even[6] = {2, 4, 6, 7, 8, 9};
//     int odd[5] = {5, 6, 7, 8, 4};

//     int evenIndex = binarySearch(even, 6, 8);
//     cout << "index of 8 is: " << evenIndex << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int findPeak(int arr[], int n)
// {
//     int s = 0, e = n - 1;
//     int mid = s + (e - s) / 2;

//     while (s < e)
//     {
//         if (arr[mid] < arr[mid + 1])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }

//         mid = s + (e - s) / 2;
//     }

//     return s;
// }

// int main()
// {
//     int even[7] = {1,2,3,6,5,4,3};
//     int evenIndex = findPeak(even,5);

//     cout << "peak number of the array is: " << evenIndex << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int firstOcc(int arr[], int n, int key)
// {
//     int s = 0, e = n - 1;
//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while (s <= e)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             e = mid - 1; // if we want last occurence: s = mid + 1;
//         }
//         else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             e = mid - 1;
//         }

//         mid = s + (e - s) / 2;
//     }

//     return ans;
// }

// int main()
// {
//     int even[5] = {1, 2, 3, 3, 5};

//     cout << " first occurence of 3 is: " << firstOcc(even, 5, 3) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int peakArray(int arr[], int n)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    cout << " peak element of the array: " << peakArray(array, 5) << endl;

    return 0;
}
