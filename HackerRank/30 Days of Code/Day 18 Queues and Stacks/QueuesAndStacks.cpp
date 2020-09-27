#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

class Solution
{

     stack<char> s;
    queue<char> q;
    public:
    void pushCharacter(char i) {
        s.push(i);
    }
    void enqueueCharacter(char i) {
        q.push(i);
    }
    char popCharacter() {
        char temp = s.top();
        s.pop();
        return temp;
    }
    char dequeueCharacter() {
        char temp = q.front();
        q.pop();
        return temp;
    }
};

