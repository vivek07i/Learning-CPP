#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

Node* arrToLL(int arr[], int size) {
    if (size == 0) {
        return nullptr;
    }
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < size; i++) {
        Node* temp2 = new Node(arr[i]);
        temp->next = temp2;
        temp = temp2;
    }
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << "-->";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int getLength(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

bool checkIfthere(Node* head, int value) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->val == value) return true;
        temp = temp->next;
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = arrToLL(arr, size);

    cout << "Linked List: ";
    printList(head);

    cout << "Length of Linked List: " << getLength(head) << endl;

    int value = 3;
    if (checkIfthere(head, value)) {
        cout << value << " is present in the Linked List." << endl;
    } else {
        cout << value << " is not present in the Linked List." << endl;
    }

    return 0;
}
