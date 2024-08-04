// #include<iostream>
// using namespace std;

// class node
// {
//     public:
//     int data;
//     node* left;
//     node* right;

//     node(int d)
//     {
//         this -> data = d;
//         this -> left = NULL;
//         this -> right = NULL;
//     }
// };

// node* buildTree(node* root)
// {
//     cout << " enter the data: " << endl;
//     int data;
//     cin >> data;
//     root = new node(data);

//     if(data == -1)
//     {
//         return NULL;
//     }

//     cout << " enter data for inserting in left of: " << data << endl;
//     root -> left = buildTree(root -> left);
//     cout << " enter data for inserting in right of: " << data << endl;
//     root -> right = buildTree(root -> right);

//     return root;
// }

// int main()
// {
//     node* root = NULL;

//     root = buildTree(root);

//     // inputs -> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

//     return 0;
// }


//              LEVEL ORDER TRAVERSAL

// #include<iostream>
// #include<queue>
// using namespace std;

// class node
// {
//     public:
//     int data;
//     node* left;
//     node* right;

//     node(int d)
//     {
//         this -> data = d;
//         this -> left = NULL;
//         this -> right = NULL;
//     }
// };

// node* buildTree(node* root)
// {
//     cout << " enter the data: " << endl;
//     int data;
//     cin >> data;
//     root = new node(data);

//     if(data == -1)
//     {
//         return NULL;
//     }

//     cout << " enter data for inserting in left of: " << data << endl;
//     root  -> left = buildTree(root -> left);

//     cout << " enter data for inserting in left of: " << data << endl;
//     root -> right = buildTree(root -> right);

//     return root;
// }

// void levelOrderTraversal(node* root)
// {
//     queue <node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty())
//     {
//         node* temp = q.front();
//         q.pop();

//         if(temp == NULL)
//         {
//             // purana level complete traverse ho chuka hai
//             cout << endl;
//             if(!q.empty())
//             {
//                 // queue still has some child nodes
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp -> data << " ";
//             if(temp -> left)
//             {
//                 q.push(temp -> left);
//             }
//             if(temp -> right)
//             {
//                 q.push(temp -> right);

//             }
//         }
//     }

// }


// int main()
// {
//     node* root = NULL;
   
//    // creating a tree
//    root = buildTree(root);

//    // level order
//    cout << " printing the level order traversal output: " << endl;
//    levelOrderTraversal(root);

//     return 0;
// }


//                       INORDER, PREORDER, POSTORDER 
// #include<iostream>
// #include<queue>
// using namespace std;

// class node
// {
//     public:
//     int data;
//     node* left;
//     node* right;


//     node(int d)
//     {
//         this -> data = d;
//         this -> left = NULL;
//         this -> right = NULL;
//     }
// };

// node* buildTree(node* root)
// {
//     cout << " enter the data: " << endl;
//     int data;
//     cin >> data;
//     root = new node(data);

//     if(data == -1)
//     {
//         return NULL;
//     }

//     cout << " enter data for inserting left of " << data << endl;
//     root -> left = buildTree(root -> left);

//     cout << " enter data for inserting right of " << data << endl;
//     root -> right = buildTree(root -> right);

//     return root;
// }

// void levelOrderTraversal(node* root)
// {
//     queue <node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty())
//     {
//         node* temp = q.front();
//         q.pop();

//         if(temp == NULL)
//         {
//             cout << endl;
//             if(!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp -> data << " ";
//             if(temp -> left)
//             {
//                 q.push(temp -> left);
//             }
//             if(temp -> right)
//             {
//                 q.push(temp -> right);
//             }
//         }
//     }


// }
// void inorder(node* root)
// {
//    if(root == NULL)
//    {
//     return;
//    }

//    inorder(root -> left);
//    cout << root -> data << " ";
//    inorder(root -> right);

// }

// void preorder(node* root)
// {
//     if(root == NULL)
//     {
//         return ;
//     }
//     cout << root -> data << " ";
//     preorder(root -> left);
//     preorder(root -> right);
// }

// void postorder(node* root)
// {
//     if(root == NULL)
//     {
//         return ;
//     }
//     postorder(root -> left);
//     postorder(root -> right);
//     cout << root -> data << " ";
// }

// int main()
// {
//     node* root = NULL;

//     root = buildTree(root);

//     cout << " printing the traversal of this: " << endl;
//     levelOrderTraversal(root);

//     cout << " printing the inorder of this tree: " << " ";
//     inorder(root);  

//     cout << endl;

//     cout << " printing the preorder of this tree: " << " ";
//     preorder(root);
//     cout << endl;

//     cout << " printing the postorder of this tree: " << " ";
//     postorder(root);
     
//     return 0;

//     // inorder = 7 3 11 1 17 5
//     // preorder = 1 3 7 11 5 17
//     // postorder = 7 11 3 11 5 17
// }


//     BUILD FROM LEVELORDER   

#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;

    }
};

node* buildTree(node* root)
{
    cout << " enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << " enter data for inserting left of: " << data << endl;
    root -> left = buildTree(root -> left);

    cout << " enter data for inserting right of: " << data << endl;
    root -> right = buildTree(root -> right);

    return root;


}

void levelOrderTraversal(node* root)
{
    queue <node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout << endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp -> data << endl;
            if(temp -> left)
            {
                q.push(temp -> left);
            }
            if(temp -> right)
            {
                q.push(temp -> right);
            }
        }
    }
}

// void buildFromLevelOrder(node* &root)
// {
//     queue <node*> q;

//     cout << " enter data for root " << endl;
//     int data;
//     cin >> data;
//     root = new node(data);

//     q.push(root);

//     while(!q.empty())
//     {
//         node* temp = q.front();
//         q.pop();

//         cout << " enter left node for: " << temp -> data << endl;
//         int leftData;
//         cin >> leftData;

//         if(leftData != -1)
//         {
//             temp -> left = new node(leftData);
//             q.push(temp -> left);
//         }

//         cout << " enter right node for: " << temp -> data << endl;
//         int rightData;
//         cin >> rightData;

//         if(rightData != -1)
//         {
//             temp -> right = new node(rightData);
//             q.push(temp -> right);
//         }
//     }
// }


void buildFromLevelOrder(node* &root)
{
    queue <node*> q;
    
    cout << " enter data for root: " << endl;
    int data;
    cin >> data;
    q.push(root);
    root = new node(data);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout << "enter left node for: " << temp -> data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1)
        {
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }
    }
}




























int main()
{
    node* root = NULL;

    buildFromLevelOrder(root);
    // inputs -> 1 3 5 7 11 -1 -1 -1 -1 -1 -1 -1



    return 0;
}









































