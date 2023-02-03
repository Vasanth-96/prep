
#include<bits/stdc++.h>
using namespace std;
#define ll long long

//set --sorted always.  -- insert(), begin(), end(), count(), clear(), erase(iter), size(), empty()
set<int> s;
//it is implemented using balanced binary tree such as avl or redblack.
//it uses logn complxity to insert delete or find opearions.

//multiset --sorted  -- insert(), begin(), end(), count(), clear(), erase(iter), size(), empty()
multiset<int> s;


//unordered_set --not sorted  -- insert(), begin(), end(), count(), clear(), erase(iter), size(), empty()
unordered_set<int> s;
//it uses hash datastructure
//O(1) but O(n) while collisons.

//unoredered_multiset --not sorted -- insert(), begin(), end(), count(), clear(), erase(iter), size(), empty()
unordered_multiset<int> s;
//it uses hash datastructure
//O(1) but O(n) while collisons.

unordered_map<int, int> mp;//hash table
map<int, int> mp; //avl or redblack tree
multimap<int, int> mp;//avl or redblack tree
// functions:  erase(key), erase(iter), erase(iter1, iter2), insert(), begin(), end(), clear(), find(key) != mp.end()

queue<int> q; //deque, list
//funtions: push(num), pop(), empty(), size(), front()--first element,back()--last element

stack<int> s;//deque, list
//funtions: push(num), pop(), top(), size(), empty()

deque<int> dq; //dynamic array
// funtions: push_back(num), pop_back(), push_front(), pop_front(), front(), back(), size(), empty()

list<int> li;//doubly-linked list
//it like vector with operations on both sides 
//funtions: push_back(num), pop_back(), push_front(), pop_front(), front(), back(), size(), empty()

priority_queue<int> pq;//max-heap - binary heap --o(1) access, insert and delete(log n)
priority_queue<int, vector<int>, greater<int> > pq;//min-heap  
