// #include<iostream>
// using namespace std;

// int main()
// {
//     int num = 5;

//     cout << num << endl;

//     cout << " address of num is: " << &num << endl;

//     int *ptr = &num;

//     cout << "Address is: " << ptr << endl;
//     cout << " value is: " << *ptr << endl;

//     double d = 4.3;
//     double *p2 = &d;

//     cout << " Address is: " << p2 << endl;
//     cout << " value is : " << *p2 << endl;

//     cout << " size of integer is: " << sizeof(num) << endl;
//     cout << " size of pointer is: " << sizeof(ptr) << endl;
//     cout << " size of pointer is: " << sizeof(p2) << endl;

//     return 0;
//}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int num = 5;
//     int a = num;
//     cout << " a before " << num << endl;
//     a++;
//     cout << " a after " << num << endl;

//     int *p = &num;
//     cout << " before " << num << endl;
//     (*p)++;
//     cout << " after " << num << endl;

//     int *q = p;
//     cout << p << " - " << q << endl;
//     cout << *p << " - " << *q << endl;

//     int i = 3;
//     int *t = &i;

//     *t = *t + 1;
//     cout << *t << endl;
//     cout << " before t " << t << endl;
//     t = t+1;
//     cout << " after t " << t << endl;

//     return 0;
// }

// POINTER AS ARRAYS

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[10] = {22, 3, 4, 66};

//     cout << "address of first memory block is: " << arr << endl;
//     cout << arr[0] << endl;
//     cout << " address of first memory block is: " << &arr[0] << endl;

//     cout << " 4th " << *arr << endl;
//     cout << " 5th " << *arr + 1 << endl;
//     cout << " 6th " << *(arr + 1) << endl;
//     cout << " 7th " << *(arr) + 1 << endl;
//     cout << " 8th " << arr[2] << endl;
//     cout << " 9th " << *(arr+2) << endl;

//     int i = 3;
//     cout << i[arr] << endl;

//     int temp[10] = {1,2};
//     cout << sizeof(temp) << endl;
//     cout << " 1st " << sizeof(*temp) << endl;
//     cout << " 2nd " << sizeof(&temp) << endl;

//     int *ptr = &temp[0];
//     cout << sizeof(ptr) << endl;
//     cout << sizeof(*ptr) << endl;
//     cout << sizeof(&ptr) << endl;

//     int a[20] = {1, 2, 3, 4};
//     cout << " -> " << &a[0] << endl;
//     cout << &a << endl;
//     cout << a << endl;

//     //int arr[10];
//     //ERROR
//     //arr = arr +1;
//     int *ptr1 = &arr[0];
//     ptr = ptr1 + 1;
//     cout << ptr1 << endl;

//     return 0;
// }

// POINTER CHARACTER

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = { 1, 2, 3, 4, 5};
//     char ch[6] = "abcde";

//     cout << arr << endl;
//     // attention here
//     cout << ch << endl;

//     char *c = &ch[0];
//     cout << c << endl;

//     char temp = 'z';
//     char *p = &temp;

//     cout << p << endl;

//     return 0;
// }


// POINTER AS FUNCTIONS

// #include <iostream>
// using namespace std;

//   void print(int *p)
//   {
//     cout << *p << endl;
//   }

//   void update(int *p)
//   {
//     p = p + 1;
//     cout << " inside " << p << endl;
//     *p = *p + 1;
//   }

//   int getSum(int *arr, int n)
//   {
//     cout << endl
//          << " size: " << sizeof(arr) << endl;

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//       sum += arr[i];
//     }
//     return sum;
//   }
//   int main()
//   {
//     int arr[6] = {1, 2, 3, 4, 5, 8};

//     cout << " sum is " << getSum(arr + 3, 3) << endl;

//     return 0;
//   }



