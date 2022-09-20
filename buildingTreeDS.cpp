// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     // creating constructor for building tree
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node *buildingTree(Node *root)
// {
//     cout << "Enter the data " << endl;
//     int data;
//     cin >> data;
//     root = new Node(data);

//     // NULL;
//     if (data == -1)
//     {
//         return NULL;
//     }

//     cout << "Enter the data for inserting in left of " << data << endl;
//     root->left = buildingTree(root->left);
//     cout << "Enter the data for inserting in right of " << data << endl;
//     root->right = buildingTree(root->right);

//     return root;
// }
// int main()
// {
//     Node *root = NULL;
//     root = buildingTree(root);

//     return 0;
// }
#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    // contructor for the same
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildingTress(Node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data to insert in left of " << data << endl;
    root->left = buildingTress(root->left);
    cout << "Enter the data to insert in right of " << data << endl;
    root->right = buildingTress(root->right);
    return root;
}
// void levelOrderTraversal(Node *root)
// {
//     queue<Node *> q;
//     q.push(root); // simply push the root
//     q.push(NULL); // after a root first level is completed so push NULL
//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();
//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp -> data << " ";
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    Node *root = NULL;
    root = buildingTress(root);
    cout << "levelOrderTraversal " << endl;
    levelOrderTraversal(root);

    return 0;
}
// 7 3 2 -1 -1 5 -1 -1 1 2 -1 -1 4 -1 -1