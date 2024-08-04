// #include <iostream>                                                      
// using namespace std;

// class Node
// {                                                                           
// public:
//     int data;
//     Node *next;

//     // constructer
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }

//     // destructor
//     ~Node()
//     {
//         int value = this->data;
//         // memory free
//         if (this->next != NULL)
//         {
//             delete next;
//             this->next = NULL;
//         }
//         cout << " memory is free for node with data " << value << endl;
//     }
// };

// void insertAtHead(Node* &head, int d)
// {
//     // create new node
//     Node *temp = new Node(d);
//     temp-> next = head;
//     head = temp;
// }


// void print(Node* &head)
// {
//     Node* temp = head;
    
//     while(temp != NULL)
//     {
//         cout << temp -> data << " ";
//         temp  = temp -> next;
//     }
//     cout << endl;
// }
// int main()
// {
//     // created a new node
//     Node *node1 = new Node(10);
//     //cout << node1 -> data << endl;
//     //cout << node1 -> next << endl;

//     // head pointed to node1
//     Node* head = node1;
//     print(head);

//     insertAtHead(head, 12);
    
//     print(head);

//     insertAtHead(head, 15);

//     print(head);
//     return 0;
// }


// // #include<iostream>
// // using namespace std;

// // class Node
// // {
// //     public:
// //     int data;
// //     Node* next;

// //     // constructor
// //     Node(int data)
// //     {
// //         this -> data = data;
// //         this -> next = NULL;
// //     }
// //    //  destructor
// //     ~Node()
// //     {
// //         int value = this->data;
// //         // memory free
// //         if (this->next != NULL)
// //         {
// //             delete next;
// //             this->next = NULL;
// //         }
// //         cout << " memory is free for node with data " << value << endl;

// //      }
// // };

// // void insertAtTail(Node* &tail, int d)
// // {
// //     // creating a temp variable
// //     Node* temp = new Node(d);
// //      tail -> next = temp;
// //      tail = temp;

// // }

// // void print(Node* &head)
// // {
// //    Node* temp = head;
// //    while(temp != NULL)
// //    {
// //     cout << temp -> data << "  ";
// //     temp = temp -> next;  
// //    } 
// //    cout << endl;  
// // }

// // int main()
// // {
// //     // creating a new node1
// //     Node* node1 = new Node(10);
// //   ;

// //     // pointing tail to the node1
// //     Node* tail = node1;

// //     print(tail);

// //     insertAtTail(tail, 22);

// //     print(tail);

// //     insertAtTail(tail, 55);

// //     print(tail);

// //     return 0; 
// // }


// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* next;

//     // constructor
//     Node(int data)
//     {
//         this -> data = data;
//         this -> next = NULL;
//     }
// };

// void insertAthead(Node* &head, int d)
// {
//     //  creating a temp node
//     Node* temp = new Node(d);
//     temp -> next  = head;
//     head = temp;
// }

// void insertAtTail(Node* &tail, int d)
// {
//     // creating a temp node
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail = temp;
// }

// void insertAtPositon(Node* &tail, Node* &head, int positon, int d)
// {
//     // insert at start
//     if(positon == 1)
//     {
//         insertAthead(head, d);
//         return ;
//     }
    
//     Node* temp = head;
//     int cnt = 1;

//     while(cnt < positon - 1)
//     {
//         temp = temp -> next;
//         cnt++;
//     }

//     // inserting at last positon
//     if(temp -> next == NULL)
//     {
//         insertAtTail(tail, d);
//         return ;
//     }

//     // creating a node for d
//     Node* nodeToInsert = new Node(d);

//     nodeToInsert -> next = temp -> next;

//     temp -> next = nodeToInsert;
// }

// int main()
// {
//     // creating a new node1
//     Node* node1 = new Node(10);
  


//     // pointing to the postion
//     Node* head = node1;
//     Node* tail = node1;
//     insertAtTail(tail, 22);
//     insertAtTail(tail, 23);

//     insertAtPositon(head, tail, 2, 44);
    
//     cout << " head " << head -> data << endl;
//     cout << " tail " << tail -> data << endl;
   
//     tail -> next = head -> next;

//     cout << " head " << head -> data << endl;
//     cout << " tail " << tail -> data << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     // constructor
//     Node(int data)
//     {
//         this -> data = data;
//         this -> prev = NULL;
//         this -> next = NULL;

//     }


// };

// // traversing a link list
// void print(Node* head)
// {
//     Node* temp = head;

//     while(temp != NULL)
//     {
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// // // give length of linked list
// // int getLength(Node* head)
// // {
// //     int len = 0;
// //     Node* temp = head;

// //     while(temp != NULL)
// //     {
// //         len++;
// //         temp = temp -> next;
// //     }

// //     return len;
// // }

// void insertAtHead(Node* &head, Node* &tail, int d)
// {
//     // empty list
//     if(head == NULL)
//     {
//         Node* temp = new Node(d);
//         head = temp;
//         tail = temp;
//     }
//     else
//     {
//         Node* temp = new Node(d);
//         temp -> next = head;
//         head -> prev = temp;
//         head = temp;
//     }
// }

// int main()
// {
    
//     Node* head = NULL;
//     Node* tail = NULL;



//     insertAtHead(head, tail, 22);

//     print(head);
    
//     insertAtHead(head, tail, 23);

//     print(head);
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     // constructor
//     Node(int data)
//     {
//         this -> data = data;
//         this -> prev = NULL;
//         this -> next = NULL;
//     }
// };

// void insertAtHead(Node* &head, Node* &tail, int d)
// {
//    // empty list
//    if(head == NULL)
//    {
//     Node* temp = new Node(d);
//     head = temp;
//     tail = temp;
//    }
//    else
//    {
//     // creating a temp node
//      Node* temp = new Node(d);
//      temp -> next = head;
//      head -> prev = temp;
//      head = temp;    
//    }
// }

// void insertAtTail(Node* &head, Node* &tail, int d)
// {
//     // empty node
//     if(tail == NULL)
//     {
//       Node* temp = new Node(d);
//       head = temp;
//       tail = temp;
//     }
//     // creating a temp node
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     temp -> prev = tail;
//     tail = temp;
// }

// void print(Node* head)
// {
//     Node* temp = head;

//     while(temp != NULL)
//     {
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node* head = NULL;
//     Node* tail = NULL;

//     insertAtHead(head, tail, 22);
//     print(head);

//     insertAtHead(head, tail, 23);
//     print(head);
    
//     insertAtTail(head, tail, 24);
//     print(head);

//     insertAtTail(head, tail, 26);
//     print(head);
    
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     // constructor
//     Node(int data)
//     {
//         this -> data = data;
//         this -> prev = NULL;
//         this -> next = NULL;

//     }
// };

// void insertAtHead(Node* &head, Node* &tail, int d)
// {
//     // empty list
//     if(head == NULL)
//     {
//         Node* temp = new Node(d);
//         head = temp;
//         tail = temp;
//     }
//     else
//     {
//         // creating a temp node
//         Node* temp = new Node(d);
//         temp -> next = head;
//         head -> prev = temp;
//         head = temp;
//     }
// }

// void insertAtTail(Node* &head, Node* &tail, int d)
// {
//     if(tail == NULL)
//     {
//         Node* temp = new Node(d);
//         tail = temp;
//         head = temp;
//     }
//     else
//     {
//         Node* temp = new Node(d);
//         tail -> next = temp;
//         temp -> prev = tail;
//         tail = temp;
//     }
// }

// void insertAtPosition(Node* &head, Node* &tail, int position, int d)
// {
//       // insert at start
//       if(position == 1)
//       {
//         insertAtHead(head, tail, d);
//         return ;
//       }

//       Node* temp = head;
//       int cnt = 1;

//       while(cnt < position-1)
//       {
//         temp = temp -> next;
//         cnt++;
//       }

//       // inserting at last position
//       if(temp -> next == NULL)
//       {
//         insertAtTail(tail, head, d);
//         return ;
//       }

//       // creating a node for d
//       Node* nodeToInsert = new Node(d);

//       nodeToInsert -> next = temp -> next;
//       temp -> next -> prev = nodeToInsert;
//       temp -> next = nodeToInsert;
//       nodeToInsert -> prev = temp;
// }

// void print(Node* &head)
// {
//     Node* temp = head;

//     while(temp != NULL)
//     {
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//      cout << endl;
// }


// int main()
// {
//     Node* head = NULL;
//     Node* tail = NULL;

//     insertAtHead(head, tail, 22);
//     print(head);

//     insertAtHead(head, tail, 35);
//     print(head);

//     insertAtTail(head, tail, 55);
//     print(head);

//     insertAtTail(head, tail, 67);
//     print(head);
    
//     insertAtPosition(head, tail, 5, 69);
//     print(head);

//     return 0;

    
// }



// circular link list

// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* next;

//     // constructor
//     Node(int data)
//     {
//         this -> data = data;
//         this -> next = NULL;
//     }

//     // destructor
//     ~Node()
//     {
//         int value = this -> data;
//         if(this -> next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//         cout << " memory is free for node with data " << value << endl;
//     }

// };

// void insertNode(Node* &tail, int element, int d)
// {

//     // empty list
//     if(tail == NULL)
//     {
//         Node* newNode = new Node(d);
//         tail = newNode;
//         newNode -> next = newNode;
//     }

//     else
//     {
//         // non - empty list
//         // assuming that the element is present in the list

//         Node* curr = tail;

//         while(curr -> data != element)
//         {
//             curr = curr -> next;
//         }

//         // element found -> curr is representing element wala node
//         Node* temp = new Node(d);
//         temp -> next = curr -> next;
//         curr -> next = temp;
//     }
// }

// void print(Node* &tail)
// {
//     Node* temp = tail;

//     // empty list
//     if(tail == NULL)
//     {
//         cout << " list is empty " << endl;
//         return ;
//     }

//     do
//     {
//         cout << tail -> data << " ";
//         tail = tail -> next;
//     }while(tail != temp);

//     cout << endl;
// }

// void deleteNode(Node* &tail, int value)
// {
//     // empty list
//     if(tail == NULL)
//     {
//         cout << " list is empty, plz check again " << endl;
//         return ;
//     }
//     else
//     {
//         // non - empty
//         // assuming that " value " is present in the link list

//         Node* prev = tail;
//         Node* curr = prev -> next;

//         while(curr -> data != value)
//         {
//             prev = curr;
//             curr = curr -> next;
//         }
//         prev -> next = curr -> next;

//         // 1 Node linked list
//         if(curr == prev)
//         {
//             tail = NULL;
//         }

//         // 2 node link list
//         else if(tail == curr)
//         {
//             tail = prev;

//         }
//         curr -> next = NULL;
//         delete curr;
//     }
// }

// int main()
// {
//     Node* tail = NULL;

//     insertNode(tail, 5, 3);
//     print(tail);

//     return 0;
// }


#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

};

void insertNode(Node* &tail, int element, int d)
{
    // empty node
    if(tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    // non empty 
    // assuiming element is present in the node
    else
    {
        Node* curr = tail;

        while(curr -> data != element)
        {
            curr = curr -> next;
        }

        // element found
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }

}

void print(Node* &tail)
{
    // empty node
    if(tail == NULL)
    {
        cout << " node is empty " << endl;
        return;
    }

    Node* temp = tail;
    do
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }while(tail != temp);
    cout << endl;
}

int main()
{
    Node* tail = NULL;

    insertNode(tail, 5, 4);
    print(tail);

    insertNode(tail, 4, 9);
    print(tail);


    return 0;
}




















































































































































































































