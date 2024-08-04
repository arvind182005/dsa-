// #include<iostream>
// #include<queue>
// using namespace std;

// int main()
// {
//     // creaing queue
//     queue<int> q;

//     q.push(11);
//     cout << " front of q is: " << q.front() << endl;

//     q.push(15);
//     cout << " front of q is: " << q.front() << endl;

//     q.push(17);
//     cout << " front of q is: " << q.front() << endl;

//     cout << " size of queue is: " << q.size() << endl;

//     q.pop();
//     q.pop();
//     q.pop();

//     cout << " size of queue is: " << q.size() << endl;

//     if(q.empty())
//     {
//         cout << " queue is empty. " << endl;
//     } 
//     else
//     {
//         cout << " queue is not empty. " << endl;
//     }
//     return 0;  
// }



// doubly queue

// #include<iostream>
// #include<queue>
// using namespace std;

// int main()
// {
//     cout << (-1)%1 << endl;
//     deque <int> d;

//     d.push_front(22);
//     d.push_back(35);

//     cout << d.front() << endl;
//     cout << d.back() << endl;

//     d.pop_front();

//     cout << d.front() << endl;
//     cout << d.back() << endl;

//     d.pop_back();

//     if(d.empty())
//     {
//         cout << " queue is empty. " << endl;
//     }
//     else
//     {
//         cout << " queue is not empty. " << endl;
//     }
// }


// #include<iostream>
// using namespace std;

// class Queue
// {
//     int *arr;
//     int qfront;
//     int rear;
//     int size;

//     public:
//     Queue()
//     {
//         size = 100001;
//         arr = new int[size];
//         qfront = 0;
//         rear = 0;
//     }

//     bool isEmpty()
//     {
//         if(qfront == rear)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

//     void enqueue(int data)
//     {
//         if(rear == size)
//         {
//             cout << " queue is full " << endl;

//         }
//         else
//         {
//             arr[rear] = data;
//             rear++;
//         }
//     }

//     int dequeue()
//     {
//         if(qfront == rear)
//         {
//             return -1;
//         }
//         else
//         {
//             int ans = arr[qfront];
//             arr[qfront] = -1;
//             qfront++;
//             if(qfront == rear)
//             {
//                 qfront = 0;
//                 rear = 0;
//             }

//             return ans;
//         }
//     }

//     int front()
//     {
//         if(qfront == rear)
//         {
//             return -1;
//         }
//         else
//         {
//             return arr[qfront];
//         }
//     }
// };

// int main()
// {
//     Queue q;

//     q.enqueue(10);
//     q.enqueue(12);

//     q.dequeue();
//     q.dequeue();

//     cout << " front element of queue is: " << q.front() << endl;

//     if(q.isEmpty())
//     {
//         cout << " queue is empty. " << endl;
//     }
//     else
//     {
//         cout << " queue is not empty. " << endl;
//     }

//     return 0;

// }


// #include<iostream>
// using namespace std;

// class CircularQueue
// {
//     int *arr;
//     int front;
//     int rear;
//     int size;

//     public:
//     // initialize data structure 
//     CircularQueue(int n)
//     {
//         size = n;
//         arr = new int[size];
//         front = rear = -1;
//     }

//    bool enqueue(int value)
//    {
//     if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ))
//     {
//         cout << " queue is full " << endl;
//         return false;
//     }
//     else if(front == -1)
//     {
//         front = rear = 0;
//     }
//     else if(rear = size-1 && front != 0)
//     {
//         rear = 0;
//     }
//     else
//     {
//         rear++;
//     }
//     arr[rear] = value;

//     return true;
//    }


//    int dequeue()
//    {
//     if(front == -1)
//     {
//         cout << " queue is empty " << endl;
//         return -1;
//     }
//     int ans = arr[front];
//     arr[front] = -1;
//     if(front == rear)
//     {
//         front = rear = -1;
//     }
//     else if(front == size - 1)
//     {
//         front = 0;
//     }
//     else
//     {
//         front ++;
//     }
//     return ans;
//    }

  
// };

// int main()
// {
//     CircularQueue cq(5);

//     cq.enqueue(34);
//     cq.enqueue(45);

//     cq.dequeue();
//     cout << cq.front() << endl;
//     return 0;
// }


#include<iostream>
using namespace std;

class CircularQueue
{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int data)
    {
        if((front==0 && rear == size-1) || (rear == (front-1)%(size-1)))
        {
             cout << " queue is full " << endl;
             return false;
        }
        else if(front == -1)
        {
            front = rear = 0;
        }
        else if(rear = front - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;

        return true;
    }

    int dequeue()
    {
        if(front = -1)
        {
            cout << " queue is empty " << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        if(front == rear)
        {
            front = rear = -1;
        }
        else if(front = size-1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }

};































































