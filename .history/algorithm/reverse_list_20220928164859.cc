#include <iostream.h>
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
        node=node->next;
        ListNode* newnode=new ListNode(i);
        node->next=newnode;
        newnode->prev=node;
    }
    while(head!=nullptr){
        cout<<head->val;
        head=head->next;
    }
    return 0;
}
