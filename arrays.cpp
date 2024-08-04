// #include <iostream>
// using namespace std;

// void update(int arr[], int n)
// {
//     cout << endl
//          << "inside the function " << endl;

//     arr[0] = 120;

//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     cout << " going back to main function " << endl;
// }

// int main()
// {
//     int arr[3] = {1, 2, 3};

//     update(arr, 3);

//     cout << endl
//          << "printing in main function " << endl;

//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr[i] << endl;
//     }

//     cout << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout << " enter the element to search for " << endl;

    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "key is present " << endl;
    }
    else
    {
        cout << "key is absent " << endl;
    }

    return 0;
}
