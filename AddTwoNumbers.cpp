/*You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Follow up:
What if you cannot modify the input lists? In other words, reversing the lists is not allowed.*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0; 
        
        vector<int> a;
        vector<int> b;
        while (l1!=NULL){
            a.push_back(l1->val);
            l1=l1->next;
         }
        
        while(l2!=NULL)
        {b.push_back(l2->val);
         l2=l2->next;
         }
        ListNode*  l3; ListNode* head;
        head=NULL;
        int rem = 0;
        int i = a.size()-1;
        int j = b.size()-1;
        
        while (!(i<0 && j<0) || rem!=0){
            sum = rem + (i<0?0:a[i]) + (j<0?0:b[j]);
            
            l3 = new ListNode(sum%10);
            rem = sum/10;
            l3->next = head;
            head = l3;
            i--;
            j--;
        }
        return l3;
    }
};
