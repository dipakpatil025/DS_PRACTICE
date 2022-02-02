#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout << s.top() << endl;

    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);
    cout << q.front() << " " << q.back() << endl;

    deque<int> dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(40);
    dq.push_back(100);
    dq.push_back(200);
    dq.push_back(300);

    for (auto &&i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << dq.at(1);

    for (auto &&i : dq)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}