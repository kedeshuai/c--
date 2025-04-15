#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* num = dummy;
        int carry = 0;
        while (l1 || l2)
        {
            int n1 = l1 ? l1->val : 0;
            int n2 = l2 ? l2->val : 0;
            int sum = n1 + n2 + carry;
            carry = sum / 10;
            num->next = new ListNode(sum % 10);
            num = num->next;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        if (carry == 1)
            num->next = new ListNode(1);
        return dummy->next;
    }
};
int main()
{
     ListNode* l1 = new ListNode(9);
     l1->next = new ListNode(9);
     l1->next->next = new ListNode(9);

     ListNode* l2 = new ListNode(9);
     l2->next = new ListNode(9);
     l2->next->next = new ListNode(9);

     Solution s;
     ListNode* res = s.addTwoNumbers(l1, l2);
     while (res)
     {
         cout << res->val << " ";
         res = res->next;
     }
     cout << endl;
     return 0;
}