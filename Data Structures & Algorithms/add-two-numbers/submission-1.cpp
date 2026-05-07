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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* temp=nullptr;
        int sum=0;
        ListNode* res;
        while(temp1!=nullptr && temp2!=nullptr)
        {
            sum+=temp1->val + temp2->val;
            ListNode* node = new ListNode;
            node->val=sum%10;
            sum=sum/10;
            if(temp==nullptr)
            {
                temp=node;
                res=temp;
            }
            else
            {
            temp->next=node;
            temp=temp->next;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=nullptr)
        {
            sum+=temp1->val;
            ListNode* node = new ListNode;
            node->val=sum%10;
            sum=sum/10;
            if(temp==nullptr)
            {
                temp=node;
                res=temp;
            }
            else
            {
            temp->next=node;
            temp=temp->next;
            }
            temp1=temp1->next;
        }
        while(temp2!=nullptr)
        {
            sum+=temp2->val;
            ListNode* node = new ListNode;
            node->val=sum%10;
            sum=sum/10;
            if(temp==nullptr)
            {
                temp=node;
                res=temp;
            }
            else
            {
            temp->next=node;
            temp=temp->next;
            }
            temp2=temp2->next;
        }
        if(sum!=0)
        {
            ListNode* node = new ListNode;
            node->val=sum;
            temp->next=node;
        }
        return res;
    }
};