#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int m = nums1.size(); int n = nums2.size();

        if(m+n == 2)
            return ((nums1[0] + nums2[0]) / 2);

        vector<int>* smallA = (m >= n) ? &nums2 : &nums1;
        vector<int>* bigA   = (m < n) ? &nums2 : &nums1;

        // ok so we have the big and small arrays, each with their sizes.
        // we need to merge sort up till A[(m+n)/2]
        int max_mid = ceil((m+n)/2);
        int low_mid = floor((m+n)/2);
        if ((m+n)%2 == 0) {
            max_mid = (m+n)/ 2;
            low_mid = (m+n)/ 2 - 1;
        } else {
            max_mid = ceil((m+n)/2);
            low_mid = max_mid;
        }
        cout << "Max_mid: " << max_mid << " low_mid: " << low_mid <<endl;

        // we need to sort in the elements of the smaller array into the bigger
        // until the index the sorted in element, plus the count of previous
        // sorted in elements, is greater than the median of the combined array.
        
        int lastTwo[2][2] = {{-1,-1},{-1,-1}};
        int p_index = 0;
        
        for(int i = 0; i < static_cast<int>(smallA->size()); i++)
        {
            p_index         = findLocation((*smallA)[i], *bigA, p_index, static_cast<int>(bigA->size())-1) + i;

            cout << "P_index for element P["<<i<<"] is: " << p_index << endl;

            if(p_index > max_mid)
                break;

            lastTwo[0][0] = lastTwo[1][0];
            lastTwo[0][1] = lastTwo[1][1];
            lastTwo[1][0] = i;
            lastTwo[1][1] = p_index;
        }
        
        // now we have the element that has crossed the middle, along with 
        int low_mid_val = 0;
        int high_mid_val = 0;
        if(lastTwo[1][1] == max_mid)
            high_mid_val = (*smallA)[lastTwo[1][0]];
        else 
            high_mid_val = (*bigA)[max_mid - lastTwo[1][0] -1 ];

        if(lastTwo[1][1] == low_mid)
            low_mid_val = (*smallA)[lastTwo[1][0]];
        else if(lastTwo[0][1] == low_mid)
            low_mid_val = (*smallA)[lastTwo[0][0]];
        else
            low_mid_val = (*bigA)[low_mid - lastTwo[1][0] -1 ];

        cout << "High mid val is: " << high_mid_val << endl;
        cout << "Low mid val is: "  << low_mid_val << endl;
        return ((double)(high_mid_val + low_mid_val) / 2) ;
    }

    // Finds the location of where an element should go 
    int findLocation(int p, vector<int>& A, int low, int high)
    {
        // case of a 1 length array
        if(low == high) 
            return (p > A[low]) ? low + 1 : low;

        int mid = ( (high - low) / 2 + low);

        // case that the mid point equals our element
        if(A[mid] == p)
            return mid;

        // case that our element resides in the lower subarray
        else if( p < A[mid])
            return findLocation(p, A, low, ((mid-1)>=0)?mid-1:0 );

        // case that our element resides in the upper subarray

        else // ( p > A[mid])
            return findLocation(p, A, mid+1, high);
    }
};

int main(void)
{
    vector<int> nums2{1, 1, 3, 3};
    vector<int> nums1{1, 1, 3, 3};

    // vector<int> nums1{, , , 3, 4, , , };

    Solution sol;

    cout << "Median: " << sol.findMedianSortedArrays(nums1, nums2) << endl;

    return 0;
}
