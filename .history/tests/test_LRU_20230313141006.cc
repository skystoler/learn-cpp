#include <bits/stdc++.h>

using namespace std;

#define N 3
#define M 30

struct List
{
    int val;
    List *pre, *nxt;
    List(int x, List *y, List *z)
    {
        val = x, pre = y, nxt = z;
    }
} *head;
int idx;
map<int, List *> mp;

void print()
{
    List *lst = head;
    cout << "当前队列情况:";
    do
    {
        cout << lst->val << ' ';
        lst = lst->nxt;

    } while (lst != head);
    cout << '\n';
    cout.flush();
}

void remove(List *nd)
{
    mp.erase(nd->val);
    if (nd == nd->nxt) // 只有一个节点
    {
        nd = NULL;
        return;
    }
    nd->pre->nxt = nd->nxt;
    nd->nxt->pre = nd->pre;
    if (head == nd) // 如果这个nd刚好是头节点，还需要更新头节点
    {
        head = head->nxt;
    }
}

void insert(List *nd) // nd插入到head
{
    if (mp.count(nd->val)) // 如果待插入的节点已经在队列中，那么先删除
    {
        remove(nd);
    }
    mp[nd->val] = nd;
    if (head == NULL) // 为空时
    {
        head = nd;
        head->pre = head->nxt = head;
        return;
    }
    nd->pre = head->pre;
    nd->nxt = head;
    head->pre->nxt = nd; // 这一句必须在下一句前面，因为下一句会更改head->pre
    head->pre = nd;
    head = nd;
}

void LRUInsert(List *nd)
{
    if (idx < N) // 内存页面有剩余
    {
        if (!mp.count(nd->val)) // nd不在内存页面中时，才追加计数
        {
            ++idx;
        }
        insert(nd);
    }
    else // 没有剩余时，淘汰队尾
    {
        if (!mp.count(nd->val)) // nd不在内存页面时，才需要淘汰队尾腾出空间
        {
            remove(head->pre);
        }
        insert(nd);
    }
    print();
}

int main()
{
    srand(time(0));
    for (int i = 0; i < M; i++)
    {
        int val = rand() % 4;
        cout << "访问" << val << ' ';
        if (!mp.count(val)) // 没有节点时，新建一个
        {
            List *nd = new List(val, NULL, NULL);
            LRUInsert(nd);
        }
        else
        {
            LRUInsert(mp[val]);
        }
    }
    return 0;
}