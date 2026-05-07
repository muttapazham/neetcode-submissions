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
    void reorderList(ListNode* head) {
        queue<ListNode*> q;
        stack<ListNode*> st;
        ListNode* temp=head;
        int n=0;
        if(head->next==nullptr) return;
        while(temp!=nullptr)
        {
            n++;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<n;i++)
        {
            if(i<n/2)
            q.push(temp);
            else
            st.push(temp);
            temp=temp->next;
        }
        temp=head;
        q.pop();
        while(!q.empty())
        {
            temp->next=st.top();
            temp=temp->next;
            temp->next=q.front();
            temp=temp->next;
            st.pop();
            q.pop();
        }
        while(!st.empty())
        {
            temp->next=st.top();
            st.pop();
            temp=temp->next;
        }
        temp->next=nullptr;
    }
};