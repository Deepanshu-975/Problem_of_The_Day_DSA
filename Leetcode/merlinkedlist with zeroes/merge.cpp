ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);  // Create a dummy node to build the result list
    ListNode* new_Node = dummy;  // Pointer to build the new list
    ListNode* temp = head->next;  // Skip the initial zero node
    int sum = 0;

    while (temp) {
        if (temp->val == 0) {
            // End of a segment, add the sum to the new list
            ListNode* p = new ListNode(sum);
            new_Node->next = p;
            new_Node = new_Node->next;
            sum = 0;  // Reset sum for the next segment
        } else {
            // Add value to the current segment sum
            sum += temp->val;
        }
        temp = temp->next;
    }

    ListNode* result = dummy->next;  // The head of the new list
    delete dummy;  // Delete the dummy node
    return result;
    }

    // Tc:O(n)
    // Sc:O(1)