

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

using pii = pair<int,int>;

#define all(x) x.begin(), x.end()

#define rall(x) x.rbegin(), x.rend()

#define pb push_back

#define sz(x) (int)x.size()



struct ListNode {

    int val;

    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x) , next(next) {}

};



class Solution {

public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode dummy(0);

        ListNode* current = &dummy;



        int carry = 0;

        while(l1 || l2 || carry) {

            int sum = carry;



            if(l1) {

                sum += l1->val;

                l1 = l1->next;

            }



            if (l2) {

                sum += l2->val;

                l2 = l2 -> next;

            }



            carry = sum / 10;

            current ->next = new ListNode(sum % 10);

            current = current->next;

        }



        return dummy.next;

    }

};



// for the debug


