#include <iostream>
#include <queue>
#include <math.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node()
    {
        data = -1;
        left = NULL;
        right = NULL;
    }

    // Takes head node as level 0
    int height(node *head)
    {
        int h_l = 0, h_r = 0;
        if (head->left == NULL && head->right == NULL)
            return 0;
        if (head->left)
            h_l = height(head->left);
        if (head->right)
            h_r = height(head->right);
        return 1 + max(h_l, h_r);
    }

    void insert(node *head, int d)
    {
        if (d < head->data)
        {
            if (head->left == NULL)
            {
                head->left = new node();
                head->left->data = d;
                return;
            }
            insert(head->left, d);
        }
        else
        {
            if (head->right == NULL)
            {
                head->right = new node();
                head->right->data = d;
                return;
            }
            insert(head->right, d);
        }
    }

    void deleteNode(node *&root, int key)
    {
        if (root == nullptr)
        {
            return; // Node not found
        }

        // If the key to be deleted is smaller than the root's key, then it lies in the left subtree
        if (key < root->data)
        {
            deleteNode(root->left, key);
        }
        // If the key to be deleted is greater than the root's key, then it lies in the right subtree
        else if (key > root->data)
        {
            deleteNode(root->right, key);
        }
        // If the key is the same as the root's key, then this is the node to be deleted
        else
        {
            // Node with only one child or no child
            if (root->left == nullptr)
            {
                node *temp = root->right;
                delete root;
                root = temp;
            }
            else if (root->right == nullptr)
            {
                node *temp = root->left;
                delete root;
                root = temp;
            }
            // Node with two children, get the in-order successor (smallest in the right subtree)
            else
            {
                node *temp = findMin(root->right);
                // Copy the in-order successor's dataue to this node
                root->data = temp->data;
                // Delete the in-order successor
                deleteNode(root->right, temp->data);
            }
        }
    }

    node *findMin(node *node)
    {
        while (node->left != nullptr)
        {
            node = node->left;
        }
        return node;
    }

    // Function to print in-order traversal of the BST
    void inOrderTraversal(node *root)
    {
        if (root != nullptr)
        {
            inOrderTraversal(root->left);
            cout << root->data << " ";
            inOrderTraversal(root->right);
        }
    }

    void traverse(node *head)
    {
        queue<node *> q;
        q.push(head);
        node *n;
        int counter = -1;
        int non_zero = 0;
        int prev = 0;
        while (!q.empty())
        {
            n = q.front();
            q.pop();
            if (n == NULL)
            {
                cout << 'x';
                counter++;
            }
            else
            {
                cout << n->data;
                non_zero++;
                counter++;
                q.push(n->left);
                q.push(n->right);
            }
            if (counter == 0 || counter == prev)
            {
                cout << endl;
                prev = non_zero * 2;
                non_zero = 0;
                counter = 0;
            }
        }
    }
};

int main()
{
    node *head = new node();
    string s = "new";
    while (s != "exit")
    {
        if (s == "new")
        {
            cout << "Enter Head Data :\t";
            cin >> head->data;
        }
        cout << "\nOptions: insert [data]\tprint\texit\n";
        cin >> s;
        if (s == "insert")
        {
            int data;
            cin >> data;
            head->insert(head, data);
        }
        if (s == "print")
            head->traverse(head);
        if (s == "height")
            cout << head->height(head) << endl;
    }
    return 0;
}
