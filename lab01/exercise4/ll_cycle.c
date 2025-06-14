#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    if(head==NULL) {
        return 0; // No cycle in an empty list
    }
    node *slow = head;
    node *fast = head;
    fast = fast->next;
    // if(fast == NULL) {
    //     return 0; // No cycle if fast pointer reaches the end
    // }else{
    //     fast=fast->next;
    //     if(fast==NULL){
    //         return 0;
    //     }
    // }
    // slow=slow->next;
    while(slow != NULL && fast != NULL) {
        if(slow == fast) {
            return 1; // Cycle detected
        }
        slow = slow->next;
        fast = fast->next;
        if(fast != NULL) {
            if (fast->next == NULL) {
                return 0; // No cycle if fast pointer reaches the end
            }
            fast = fast->next; // Move fast pointer two steps
        }
    }
    /* TODO: Implement ll_has_cycle */
}
