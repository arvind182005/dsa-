// MACROS

// #include<iostream>
// using namespace std;

// #define PI 3.14

// int main()
// {
//     int r = 5;
//     //double pi = 3.14;

//     double area = PI * r * r;

//     cout << " area is: " << area << endl;

//     return 0;
// }

//                                   GLOBAL VARIABLE
// #include <iostream>
// using namespace std;

// int score = 15;

// void a(int &i)
// {
//     cout << score << " in a: " << endl;
//     score++;
//     char ch = 'a';
//     cout << i << endl;
// }

// void b(int& i)
// {
//     cout << score << " in b: " << endl;
//     cout << i << endl;
// }

// int main()
// {
//     cout << score << " in main: " << endl;
//     int i = 5;
//     a(i);
//     b(i);

//     return 0;
// }

// #include <iostream>
// using namespace std;

//                                             INLINE FUNCTION

// inline int getMax(int &a, int &b)
// {
//     return (a > b) ? a : b;
// }
// int main()
// {
//     int a = 1, b = 2;
//     int ans = 0;

//     ans = getMax(a, b);  // (a > b) ? a : b;
//     cout << ans << endl;

//     a = a + 3;
//     b = b + 1;

//     ans = getMax(a, b);  // m(a > b) ? a : b;
//     cout << ans << endl;

//     return 0;
// }

//                                                                                    DEFAULT ARGUMENTS
// #include <iostream>
// using namespace std;

// void print(int arr[], int n, int start = 0)
// {
//     for (int i = start; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }

// int main()
// {
//     int arr[5] = {1, 4, 7, 8, 9};
//     int size = 5;

//     print(arr, size);
//     cout << endl;
//     print(arr, size, 2);

//     return 0;
// }

