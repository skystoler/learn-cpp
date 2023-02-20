#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode* prev;
    ListNode(int v)
        :val(v)
        ,next(nullptr)
        ,prev(nullptr){}
};

int main(){
    ListNode* head=new ListNode(0);
    ListNode* node=head;
    for(int i=1;i<10;++i){
        ListNode* newnode=new ListNode(i);
        newnode->prev=node;
        node=node->next;
        node=newnode;
    }
    while(node!=nullptr){
        cout<<node->val<<" ";
        node=node->next;
    }
    return 0;
}
