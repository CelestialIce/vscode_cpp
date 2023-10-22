#include <iostream>
#include <unordered_map>
using namespace std;

struct Node {
    int address;
    int value;
    int next;
};

int main() {
    int start, n;
    cin >> start >> n;

    unordered_map<int, Node> mp;
    for (int i = 0; i < n; ++i) {
        int address, value, next;
        cin >> address >> value >> next;
        mp[address] = {address, value, next};
    }

    unordered_map<int, bool> hash;
    int uniqueHead = -1, uniqueTail = -1;
    int dupHead = -1, dupTail = -1;

    while (start != -1) {
        Node& node = mp[start];
        int absVal = abs(node.value);
        if (hash.find(absVal) == hash.end()) {
            hash[absVal] = true;
            if (uniqueHead == -1) {
                uniqueHead = uniqueTail = start;
            } else {
                mp[uniqueTail].next = start;
                uniqueTail = start;
            }
        } else {
            if (dupHead == -1) {
                dupHead = dupTail = start;
            } else {
                mp[dupTail].next = start;
                dupTail = start;
            }
        }
        start = node.next;
    }

    if (uniqueTail != -1) mp[uniqueTail].next = -1;
    if (dupTail != -1) mp[dupTail].next = -1;

    for (int p = uniqueHead; p != -1; p = mp[p].next) {
        printf("%05d %d ", mp[p].address, mp[p].value);
        if (mp[p].next == -1) printf("-1\n");
        else printf("%05d\n", mp[p].next);
    }
    for (int p = dupHead; p != -1; p = mp[p].next) {
        printf("%05d %d ", mp[p].address, mp[p].value);
        if (mp[p].next == -1) printf("-1\n");
        else printf("%05d\n", mp[p].next);
    }

    return 0;
}
// #include <iostream>
// #include <unordered_set>
// #include <unordered_map>

// using namespace std;

// struct Node {
//     int address;
//     int value;
//     int next;
// };

// int main() {
//     int start, n;
//     cin >> start >> n;
    
//     unordered_map<int, Node> m;
//     for (int i = 0; i < n; ++i) {
//         int address, value, next;
//         cin >> address >> value >> next;
//         m[address] = {address, value, next};
//     }
    
//     unordered_set<int> s;  // 存储出现过的绝对值
//     int prev = -1, cur = start;
//     int delHead = -1, delTail = -1;
//     while (cur != -1) {
//         Node &node = m[cur];
//         int absValue = abs(node.value);
//         if (s.find(absValue) == s.end()) {
//             s.insert(absValue);
//             prev = cur;
//         } else {
//             if (prev != -1) m[prev].next = node.next;
//             if (delHead == -1) delHead = delTail = cur;
//             else {
//                 m[delTail].next = cur;
//                 delTail = cur;
//             }
            
//         }
//         cur = node.next;
//     }
    
//     // 输出结果
//     int num=0;
//     cur = start;
//     while (cur != -1) {
//         Node &node = m[cur];
//         printf("%05d %d ", node.address, node.value);
//         if (node.next == -1) printf("-1\n");
//         else printf("%05d\n", node.next);
//         cur = node.next;
//         if(cur==-1)
//         num=node.value;
//     }
    
//     cur = delHead;
//     while (cur != -1) {
//         Node &node = m[cur];
//         if(num==node.value)
//             break;
//         printf("%05d %d ", node.address, node.value);
        
//         if (node.next == -1) printf("-1\n");
//         else printf("%05d\n", node.next);
//         cur = node.next;
//     }
//     return 0;
// }
