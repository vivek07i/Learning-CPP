/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    Node *findMiddle(Node *head) {
        // OPTIMAL APPROACH
    
     // Initialize the slow pointer to the head.
    Node *slow = head; 
    
     // Initialize the fast pointer to the head.
    Node *fast = head; 

    // Traverse the linked list using the
    // Tortoise and Hare algorithm.
    while (fast != NULL && fast->next != NULL) {
        // Move slow one step.
        slow = slow->next; 
         // Move fast two steps.
        fast = fast->next->next; 
    }
    
    
     // Return the slow pointer,
     // which is now at the middle node.
    return slow; 
}
};


Node *findMiddle(Node *head) {

    // BRUTE FORCE

    // If the list is empty or has only
    // one element, return the head as
    // it's the middle.
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* temp = head;
    int count = 0;

    // Count the number of nodes in the linked list.
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    // Calculate the position of the middle node.
    int mid = count / 2 + 1;
    temp = head;

    // Traverse to the middle node by moving
    // temp to the middle position.
    while (temp != null) {
        mid = mid - 1;

        // Check if the middle
        // position is reached.
        if (mid == 0){
            // break out of the loop
            // to return temp
            break;
        }
        // Move temp ahead
        temp = temp->next;
    }

    // Return the middle node.
    return temp;
}