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
    ListNode* node=head->next;
    for(int i=1;i<10;++i){
        ListNode* newnode=new ListNode(i);
        newnode->prev=node;
        newnode=node->next;
        node=newnode;
    }
    while(head!=nullptr){
        cout<<head->val<<" ";
        head=head->next;
    }
    return 0;
}
