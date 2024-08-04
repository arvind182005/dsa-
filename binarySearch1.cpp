// #include <iostream>
// using namespace std;

// int peakArray(int arr[], int n)
// {

//     int start = 0;
//     int end = n - 1;
//     int mid = start + (end - start) / 2;

//     while (start < end)
//     {
//         if (arr[mid] < arr[mid + 1])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return start;
// }

// int main()
// {
//     int array[5] = {2,3,6,5,4};
//     cout << " peak element of the array: " << peakArray(array, 5) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int peakArray(int arr[], int n)
// {

//     int s = 0, e = n - 1;
//     int mid = s + (e - 1) / 2;

//     while (s < e)
//     {
//         if (arr[mid] < arr[mid + 1])
//         {
//             s = mid + 1;
//         }
//         else
//             e = mid;
//     }

//     return s;
// }

// int main()
// {
//     int even[5] = {2, 5, 9, 7, 6};
//     cout << " peak element of the array is: " << peakArray(even, 5) << endl;

//     return 0;
// }


#include<iostream>
using namespace std;

int getPivot(int arr[], int n) {
    
    int s = 0;
    int e = n - 1;
    int mid = s + ( e - s)/2;


    while(s < e) {
        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + ( e - s)/2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key) {
    int start = s;
    int end = e;

    int mid = start + ( end - start)/2;

    while(start <= end) 
    {
        if(arr[mid] == key)
        {
            return mid;

        }
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
        
            }

            return -1;
}

int firstposition(int arr[], int n, int k)
{
    int pivot = getPivot(arr,n);
    if(k >= arr[pivot] && k <= arr[n-1])
    {
       return binarySearch(arr,pivot,n-1,k);

    }
    else
    {
        return binarySearch(arr,0,pivot - 1,k);
    }
}

int main()
{
    int arr[6] = {7,9,1,2,3};                                         
    cout << "roteded array element is: " << firstposition(arr,6,9) << endl;
        
        return 0;
}














































