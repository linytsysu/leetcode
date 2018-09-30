``` c++
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int dig = 0;
        ListNode result(0);
        ListNode* t = &result;
        while (l1 || l2 || dig) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            sum += dig;
            dig = sum / 10;
            t->next = new ListNode(sum % 10);
            t = t->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return result.next;
    }
};
```