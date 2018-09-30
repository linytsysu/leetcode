#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

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

int main(int argc, const char * argv[]) {
    Solution solution;
    ListNode l11(2);
    ListNode l12(4);
    ListNode l13(3);
    l11.next = &l12;
    l12.next = &l13;
    
    ListNode l21(5);
    ListNode l22 = ListNode(6);
    ListNode l23 = ListNode(4);
    l21.next = &l22;
    l22.next = &l23;
    ListNode* result = solution.addTwoNumbers(&l11, &l21);
    
    while (result) {
        std::cout << result->val;
        result = result->next;
    }
    std::cout << std::endl;

    return 0;
}
