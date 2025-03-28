#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list
struct ListNode {
    int val;
    struct ListNode *next;
};

// Function to create a new node
struct ListNode* createNode(int value) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}

// Function to merge two sorted linked lists
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    struct ListNode* current = &dummy;  // Pointer to build the merged list

    // Traverse through both lists and merge them
    while (l1 != NULL && l2 != NULL) {
        if (l1->val < l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    // If one of the lists is not empty, append it to the result
    if (l1 != NULL) {
        current->next = l1;
    } else {
        current->next = l2;
    }

    return dummy.next;  // Return the next of dummy node, which is the head of the merged list
}

// Helper function to print the linked list
void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d", head->val);
        if (head->next != NULL) {
            printf(" => ");
        }
        head = head->next;
    }
    printf("\n");
}

// Helper function to create a linked list from an array of values
struct ListNode* createLinkedList(int arr[], int size) {
    if (size == 0) return NULL;
    struct ListNode* head = createNode(arr[0]);
    struct ListNode* current = head;
    
    for (int i = 1; i < size; i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }

    return head;
}

// Main function for testing
int main() {
    int arr1[] = {5, 10, 15};
    int arr2[] = {2, 3, 20};

    struct ListNode* l1 = createLinkedList(arr1, sizeof(arr1) / sizeof(arr1[0]));
    struct ListNode* l2 = createLinkedList(arr2, sizeof(arr2) / sizeof(arr2[0]));

    struct ListNode* mergedList = mergeTwoLists(l1, l2);

    printf("Merged List: ");
    printList(mergedList);

    return 0;
}
