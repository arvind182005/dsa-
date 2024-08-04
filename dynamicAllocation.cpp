// #include <iostream>
// using namespace std;

// int &func(int a)
// {
//     int num = a;
//     int &ans = num;
//     return ans;
// }

// int *fun(int n)
// {
//     int *ptr = &n;
//     return ptr;
// }

// void update2(int &n)
// {
//     n++;
// }
// void update1(int n)
// {
//     n++;
// }
// int main()
// {
//      int i = 5;

//     //create a ref variable

//     int& j = i;

//     cout << i << endl;
//     i++;
//     cout << i << endl;
//     j++;
//     cout << i << endl;
//     cout << j << endl;

//     return 0;
//     int n = 5;

//     cout << " before " << n << endl;
//     update1(n);
//     cout << " after " << n << endl;

//     func(n);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int getSum(int *arr, int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     // variable size array
//     int *arr = new int[n];

//     // taking input in array
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int ans = getSum(arr, n);

//     cout << " answer is " << ans << endl;

//     // case 1
//     while (true)
//     {
//         int i = 5;
//     }
//     while (true)
//     {
//         int *ptr = new int;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;

    int col;
    cin >> col;

    // creating a 2d array
    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // taking output
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;

    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
