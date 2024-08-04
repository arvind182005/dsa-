// #include<iostream>
// #include<stack>
// using namespace std;

// int main()
// {
//     // creation of stack
//     stack<int> s;

//     // push operation
//     s.push(2);
//     s.push(3);

//     // pop
//     s.pop();

//     cout << " printing top element " << s.top() << endl;

//     if(s.empty())
//     {
//         cout << " stack is empty " << endl;
//     }
//     else
//     {
//         cout << " stack is not empty " << endl;
//     }

//     cout << " size of stack is: " << s.size() << endl;
//     return 0;

// }


// #include<iostream>
// using namespace std;

// class Stack
// {
//    public:
//    int *arr;
//    int top;
//    int size;

//    // behaviour 
//    Stack(int size)
//    {
//     this -> size = size;
//     arr = new int[size];
//     top = -1;
//    }

//    void push(int element)
// {
//     if(size - top > 1)
//     {
//         top++;
//         arr[top] = element;
//     }
//     else
//     {
//         cout << " stack overflow. " << endl;
//     }
// }

// void pop()
// {
//     if(top >= 0)
//     {
//         top--;
//     }
//     else
//     {
//         cout << " stack is underflow. " << endl;
//     }
// } 

// int peek()
// {
//     if(top >= 0)
//     {
//         return arr[top];
//     }
//     else
//     {
//         cout << " stack is empty. " << endl;
//         return -1;
//     }
// }

// bool isEmpty()
// {
//     if(top == -1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// };


// int main()
// {
//     Stack st(5);

//     st.push(22);
//     st.push(27);
//     st.push(28);
//     st.push(29);
//     st.push(222);
    

//     cout << st.peek() << endl;

//     st.pop();

//     cout << st.peek() << endl;

//     st.pop();

//     cout << st.peek() << endl;

//     if(st.isEmpty())
//     {
//         cout << " stack is empty mere dost. " << endl;
//     }
//     else
//     {
//         cout << " stack is not empty mere dost. " << endl;
//     }
    

//     return 0;

// }


// #include<iostream>
// using namespace std;

// class TwoStack
// {
//     int *arr;
//     int top1;
//     int top2;
//     int size;

//     public:
    
//     // initialize twostack
//     TwoStack(int s)
//     {
//         this -> size = s;
//         top1 = -1;
//         top2 = s;
//         arr = new int[s];
//     }

//     // push in stack 1
//     void push1(int num)
//     {
//         // atleast a empty space present
//         if(top2 - top1 > 1)
//         {
//             top1++;
//             arr[top1] = num;
//         }
//     }

//     // push in stack 2
//     void push2(int num)
//     {
//         if(top2 - top1 > 1)
//         {
//             top2--;
//             arr[top2] = num;
//         }
//     }

//     // pop from stack 1 and return popped element
//     int pop1()
//     {
//         if(top1 >= 0)
//         {
//             int ans = arr[top1];
//             top1--;
//             return ans;
//         }
//         else
//         {
//             return -1;
//         }
//     }

//     // pop form stack 2 and return poppped element
//     int pop2()
//     {
//         if(top2 < size)
//         {
//             int ans = arr[top2];
//             top2++;
//             return ans;
//         }
//         else
//         {
//             return -1;
//         }
//     }

// };


#include<iostream>
using namespace std;

class TwoStack
{
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    TwoStack(int s)
    {
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    
    void push1(int num)
    {
        if(top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
    }

    void push2(int num)
    {
        if(top2 - top1 > 1)
        {
            top1--;
            arr[top2] = num;
        }
    }

    int pop1()
    {
        if(top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }
    
    int pop2()
    {
        if(top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
};


























































































