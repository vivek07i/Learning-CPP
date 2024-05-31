#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>

using namespace std;

void demonstrateSTL() {
    // Vector
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    cout << "Vector: ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << endl;
    // Output: Vector: 1 2 3 4 5 6 

    // List
    list<int> lst = {1, 2, 3, 4, 5};
    lst.push_back(6);
    cout << "List: ";
    for (int l : lst) {
        cout << l << " ";
    }
    cout << endl;
    // Output: List: 1 2 3 4 5 6 

    // Deque
    deque<int> deq = {1, 2, 3, 4, 5};
    deq.push_back(6);
    cout << "Deque: ";
    for (int d : deq) {
        cout << d << " ";
    }
    cout << endl;
    // Output: Deque: 1 2 3 4 5 6 

    // Set
    set<int> st = {1, 2, 3, 4, 5};
    st.insert(6);
    cout << "Set: ";
    for (int s : st) {
        cout << s << " ";
    }
    cout << endl;
    // Output: Set: 1 2 3 4 5 6 

    // Unordered Set
    unordered_set<int> uset = {1, 2, 3, 4, 5};
    uset.insert(6);
    cout << "Unordered Set: ";
    for (int us : uset) {
        cout << us << " ";
    }
    cout << endl;
    // Output: Unordered Set: 4 6 1 3 2 5 (order may vary)

    // Map
    map<int, string> mp;
    mp[1] = "one";
    mp[2] = "two";
    mp[3] = "three";
    cout << "Map: ";
    for (const auto& [key, value] : mp) {
        cout << "{" << key << ", " << value << "} ";
    }
    cout << endl;
    // Output: Map: {1, one} {2, two} {3, three} 

    // Unordered Map
    unordered_map<int, string> ump;
    ump[1] = "one";
    ump[2] = "two";
    ump[3] = "three";
    cout << "Unordered Map: ";
    for (const auto& [key, value] : ump) {
        cout << "{" << key << ", " << value << "} ";
    }
    cout << endl;
    // Output: Unordered Map: {3, three} {1, one} {2, two} (order may vary)

    // Stack
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    cout << "Stack: ";
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
    // Output: Stack: 3 2 1 

    // Queue
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    cout << "Queue: ";
    while (!que.empty()) {
        cout << que.front() << " ";
        que.pop();
    }
    cout << endl;
    // Output: Queue: 1 2 3 

    // Priority Queue (Max Heap by default)
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    cout << "Priority Queue: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    // Output: Priority Queue: 3 2 1 
}

int main() {
    demonstrateSTL();
    return 0;
}
