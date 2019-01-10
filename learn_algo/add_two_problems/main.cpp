/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <list>
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *answer;
        ListNode *answer_first;
        
        int sum = 0;
        
        bool first = 1;
        while(l1 != NULL || l2 != NULL)
        {
            if(l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }            
            std::cout << sum%10 << " ";

            if(first) 
            {
                answer = new ListNode(sum%10);
                answer_first = answer;
                first = 0;
            }
            else
            {
                answer->next = new ListNode(sum%10);
                answer = answer->next;
            }
            
            sum =  sum / 10;
        }
        
        if(sum > 0)
        {
            std::cout << sum;
            answer->next = new ListNode(sum);
        }
        
        return answer_first;
        
    }
};

int main()
{
    std::cout << "I love coco!" << std::endl;
    
    ListNode *l1        = new ListNode(2);
    l1->next            = new ListNode(4);
    l1->next->next      = new ListNode(3);

    ListNode *l2        = new ListNode(5);
    l2->next            = new ListNode(6);
    l2->next->next      = new ListNode(4);

    Solution solution;
    ListNode *answer = solution.addTwoNumbers(l1, l2);

    std::cout << "Our solution is: " << std::endl;
    while(answer != NULL)
    {
        std::cout<< answer->val << " ";
        answer = answer->next;
    }

    return 0;
}

