#include <iostream>

using namespace std;

struct Node {
    int value;
    Node *left, *right;
};

Node* init(int);

void in_order(Node*);
void find_min(Node*);
void find_max(Node*);
void search_tree(Node*);

Node* insert_node(Node*, int);
Node* delete_node(Node*, int);

int main()
{
    Node *root;

    root = init(20);
    root->left = init(15);
    root->right = init(30);
    root->left->left = init(10);
    root->left->right = init(19);
    root->right->left = init(28);
    root->right->right = init(35);

    in_order(root);
    insert_node(root, 50);

    in_order(root);

    return 0;
}

Node* init(int n){
    Node* node = new Node;
    node->value = n;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void in_order(Node* n){
    if (n->left != NULL)
        in_order(n->left);

    cout << n->value << endl;

    if (n->right != NULL)
        in_order(n->right);
}

void find_min(Node* n){
    Node* temp = n;
    while (temp->left != NULL)
        temp = temp->left;

    cout << "The minimum number is " << temp->value << "." << endl;
}

void find_max(Node* n){
    Node* temp = n;
    while (temp->right != NULL)
        temp = temp->right;

    cout << "The maximum number is " << temp->value << "." << endl;
}

void search_tree(Node* n){
    int value;
    bool isFound = false;

    cout << "Enter the number you would like to search for: ";
    cin >> value;

    string location = "root";

    Node* temp = n;

    while (temp != NULL && !isFound){
        if (temp->value < value){
            temp = temp->left;
            location += "->left";
        } else if (temp->value > value){
            temp = temp->right;
            location += "->right";
        } else if (temp->value == value){
            isFound = true;
        }
    }

    if (isFound)
        cout << "Found at: " << location << endl;
    else
        cout << "Not found." << endl;
}

Node* insert_node(Node* root, int n){
    if (root == NULL)
        return init(n);

    if (n < root->value)
        root->left = insert_node(root->left, n);
    else if (n > root->value)
        root->right = insert_node(root->right, n);

    return root;
}

Node* delete_node(Node* root, int n){
    // tbd
}
