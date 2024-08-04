// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         return 1;
//     }

//     int smallerProblem = factorial(n - 1);
//     int biggerProblem = n * smallerProblem;

//     return biggerProblem;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int ans = factorial(n);

//     cout << ans << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int power(int n)
// {
//     // base case
//     if (n == 0)
//         return 1;

//     // recursive function
//     return 2 * power(n - 1);
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int ans = power(n);

//     cout << ans << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int fabonacci(int n)
// {
//     // base case
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;

//     int ans = fabonacci(n - 1) + fabonacci(n - 2);

//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int ans = fabonacci(n);

//     cout << ans << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void reachHome(int src, int dest)
// {
//     cout << " source " << src << " destination " << dest << endl;

//     // base case

//     if (src == dest) {
//         cout << " pahuch gya " << endl;
//     return;
//     }
//     // processing -> eak step aage bdh jao
//     src++;

//     // recursive call
//     reachHome(src, dest);
// }

// int main()
// {
//     int dest = 10;
//     int src = 1;

//     cout << endl;

//     reachHome(src, dest);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void sayDigit(int n, string arr[]) {
//     //base case
//     if(n == 0)
//     {
//         return ;
//     }

//     // processing
//     int digit = n % 10;
//     n = n / 10;

//     // recursive call
//     sayDigit(n, arr);

//     cout << arr[digit] << " ";
// }

// int  main()
// {
//     string arr[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

//     int n;
//     cin >> n;

//     cout << endl << endl << endl;
//     sayDigit(n, arr);
//     cout << endl << endl << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int getSum(int *arr, int size)
// {
//     // base case
//     if (size == 0)
//     {
//         return 0;
//     }
//     if (size == 1)
//     {
//         return arr[0];
//     }

//     int remainingPart = getSum(arr + 1, size - 1);
//     int sum = arr[0] + remainingPart;

//     return sum;
// }

// int main()
// {
//     int arr[5] = {2, 4, 9, 9, 9};
//     int size = 5;

//     int sum = getSum(arr, size);

//     cout << " sum is: " << sum << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool isSorted(int arr[], int size)
// {
//     // base case
//     if (size == 0 || size == 1)
//     {
//         return true;
//     }

//     if (arr[0] > arr[1])
//     {
//         return false;
//     }
//     else
//     {
//         bool remainingPart = isSorted(arr + 1, size - 1);
//         return remainingPart;
//     }
// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int size = 5;

//     bool ans = isSorted(arr, size);

//     if (ans)
//     {
//         cout << " array is sorted " << endl;
//     }
//     else
//     {
//         cout << " array is not sorted " << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void print(int arr[], int n)
// {
//     cout << " size of array is: " << n << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// bool linearSearch(int arr[], int size, int key)
// {
//     print(arr, size);

//     // base case
//     if (size == 0)
//     {
//         return false;
//     }
//     if (arr[0] == key)
//     {
//         return true;
//     }
//     else
//     {
//         bool remainingPart = linearSearch(arr + 1, size - 1, key);
//         return remainingPart;
//     }
// }

// int main()
// {
//     int arr[5] = {3, 5, 1, 2, 6};
//     int size = 5;
//     int key = 6;
//     bool ans = linearSearch(arr, size, key);

//     if (ans)
//     {
//         cout << " present " << endl;
//     }
//     else
//     {
//         cout << " absent " << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// void print(int arr[], int s, int e) {
//     for(int i = s; i <= e; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// bool binarySearch(int *arr, int s, int e, int k) {
//     // base case

//     //element not found
//     if(s>e)
//     {
//         return false;
//     }
//     int mid = s + (e-s) / 2;

//     // element found
//     if(arr[mid] == k)
//     {
//         return true;
//     }
//     if(arr[mid] < k)
//     {
//         return binarySearch(arr, mid + 1, e, k);
//         }
//         else
//         {
//             return binarySearch(arr, s, mid-1, k);
//         }
// }

// int main(){
//     int arr[11] = { 2,4,6,8,10,12,14,16,22,222,45};
//     int size = 11;
//     int key = 222;

//     cout << " present or not " << binarySearch(arr, 0, size-1, key) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void reverse(string &str, int i, int j)
// {

//     cout << " call received for: " << str << endl;

//     // base case
//     if (i > j)
//     {
//         return;
//     }
//     swap(str[i], str[j]);
//     i++;
//     j++;

//     // recursive call
//     reverse(str, i, j);
// }

// int main()
// {
//     string name = "abcde";
//     cout << endl;
//     reverse(name, 0, name.length() - 1);
//     cout << endl;
//     cout << name << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool checkPalindrome(string str, int i, int j)
// {
//     // base case
//     if (i > j)
//     {
//         return true;
//     }
//     if (str[i] != str[j])
//     {
//         return false;
//     }
//     else
//     {
//         // recursive call
//         return checkPalindrome(str, i + 1, j - 1);
//     }
// }

// int main()
// {
//     string name = "bookkooc";
//     cout << endl;

//     bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

//     if (isPalindrome)
//     {
//         cout << " its a palindrome " << endl;
//     }
//     else
//     {
//         cout << " its not a palindrome " << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int power(int a, int b)
// {
//     // base case
//     if (b == 0)
//     {
//         return 1;
//     }
//     if (b == 1)
//     {
//         return a;
//     }

//     // recursive call
//     int ans = power(a, b / 2);

//     // if b is even
//     if (b % 2 == 0)
//     {
//         return ans * ans;
//     }
//     else
//     {
//         // if b is odd
//         return a * ans * ans;
//     }
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << endl;
//     int ans = power(a, b);

//     cout << " answer is " << ans << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void sortArray(int *arr, int n)
// {
//     // base case -> already sorted
//     if (n == 0 || n == 1)
//     {
//         return;
//     }

//     // 1 case solve karlia  -> largest element ko end me rakh dega
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }

//     // recursive call
//     sortArray(arr, n - 1);
// }

// int main()
// {
//     int arr[5] = {2, 5, 1, 6, 9};
//     sortArray(arr, 5);

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part sambhal lete hai
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[i] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

    // partition karenge
    int p = partition(arr, s, e);

    // left part sort karo
    quickSort(arr, s, p - 1);

    // right wala part sort karo
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[10] = {2, 4, 1, 6, 9, 9, 9, 9, 9, 9};
    int n = 10;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
