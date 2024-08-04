// // #include <iostream>
// // using namespace std;

// // class Hero
// // {
// //     int health;
// //     char level;
// // };

// #include <iostream>
// using namespace std;

// int getPivot(int arr[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e - s) / 2;

//     while (s < e)
//     {
//         if (arr[mid] >= arr[0])
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
//     int arr[5] = {3,13,4,5,1};
//     cout << " pivot is: " << getPivot(arr, 5) << endl;

//     return 0;
// }


#include <iostream>                                                      
using namespace std;

class Node
{                                                                           
public:
    int data;
    Node *next;

    // constructer
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node* &head, int d)
{
    // create new node
    Node *temp = new Node(d);
    temp-> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d)
{
    // create a temp node
    Node* temp  = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPositon(Node* &tail, Node* &head, int positon, int d)
{
    // insert at start
    if(positon == 1)
    {
        insertAtHead(head, d);
        return ;
    }
    
    Node* temp = head;
    int cnt = 1;

    while(cnt < positon - 1)
    {
        temp = temp -> next;
        cnt++;
    }

    // inserting at last positon
    if(temp -> next == NULL)
    {
        insertAtTail(tail, d);
        return ;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}
void print(Node* &head)
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}
int main()
{
    // created a new node
    Node *node1 = new Node(10);
    //cout << node1 -> data << endl;
    //cout << node1 -> next << endl;

    // head pointed to node1
   
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head, 12);
    
    print(head);

    insertAtHead(head, 15);

    print(head);

    insertAtPositon(head, tail, 2, 45);
    print(head);
    return 0;
}

























