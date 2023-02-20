#include <iostream.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode* prev;
    ListNode(int v)
        :val(v){}
};

int main(){
    ListNode* head=new ListNode();
    return 0;
}
