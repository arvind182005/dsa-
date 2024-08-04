// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;

//     cout << " enter the value of a " << endl;
//     cin >> a;

//     cout << " enter the value of b " << endl;
//     cin >> b;

//     char op;
//     cout << "enter the operation you want tp perform " << endl;
//     cin >> op;

//     switch (op)
//     {
//     case '+':
//         cout << (a + b) << endl;
//         break;

//     case '-':
//         cout << (a - b) << endl;
//         break;

//     case '*':
//         cout << (a * b) << endl;
//         break;

//     case '/':
//         cout << (a / b) << endl;
//         break;

//     case '%':
//         cout << (a % b) << endl;
//         break;

//     default:
//         cout << " plzz enter a valid case  " << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printCounting(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         cout << i << " ";
//     }

//     cout << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     printCounting(n);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool isEven(int a)
// {
//     if (a & 1)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }

// int main()
// {
//     int num;
//     cin >> num;

//     if (isEven(num))
//     {
//         cout << " number is Even " << endl;
//     }
//     else
//     {
//         cout << "number is odd " << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;

//     cin >> a >> b;

//     int ans = 1;

//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }

//     cout << " answer is " << ans << endl;

//     int c, d;

//     cin >> c >> d;

//     ans = 1;

//     for (int i = 1; i <= d; i++)
//     {
//         ans = ans * c;
//     }
//     cout << " answer is " << ans << endl;

//     int e, f;
//     cin >> e >> f;

//     ans = 1;

//     for (int i = 1; i <= f; i++)
//     {
//         ans = ans * e;
//     }

//     cout << " answer is " << ans << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void dummy(int n)
// {
//     n++;
//     cout << " n is " << n << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     dummy(n);

//     cout << "number n is " << n << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int power(int num1, int num2)
// {
//     int ans = 1;

//     for (int i = 1; i <= num2; i++)
//     {
//         ans = ans * num1;
//     }

//     return ans;
// }

// int main()
// {
//     int c, d;
//     cin >> c >> d;

//     int answer = power(c, d);
//     cout << " answer is " << answer << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int roomArea(int l, int w)
// {
//     int r;
//     r = l*w;

//     return r;
// }

// int main()
// {
//     int z;

//     z = roomArea(15,12);

//     cout << "the room Area is " << z << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 5;
     int b = 4;

    swap(&a, &b);

    cout << " a is the: " << a << " b is the " << b << endl;

    return 0;
}