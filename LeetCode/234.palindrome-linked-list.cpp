/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *temp= head;
        vector<int> arr;
        while(temp->next!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        bool flag=true;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[n-i-1]){
                flag=false;
                break;
            }
        }
        return flag;
    }
};
// @lc code=end

