#include <vector>
#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int m = nums1.size(); int n = nums2.size();

        // 1 element arrays
        if(m == 1 && n == 1)
            return ((double)(nums1[0] + nums2[0]) / 2);
        
        // one of the arrays is empty
        else if(m == 0)
        {
            return getMedianOneArray(nums2);
        }

        // the other one is empty
        else if(n == 0)
        {
            return getMedianOneArray(nums1);
        }

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

        // we need to sort in the elements of the smaller array into the bigger
        // until the index the sorted in element, plus the count of previous
        // sorted in elements, is greater than the median of the combined array.
        
        int p_index = 0;
         
        // we're going to build our new array here
        vector<int> answerKey (max_mid+1);

        int j = 0;
        int i = 0;
        
        while(i < static_cast<int>(smallA->size()))
        {
            // find where the element from the smaller array should go
            p_index = findLocation((*smallA)[i], *bigA, p_index - i, static_cast<int>(bigA->size())-1) + i;

            // build up our answer array up to the middle of the that element
            while(j+i < p_index && j+i <= max_mid)
            {
                answerKey[j+i] = (*bigA)[j];
                j++;
            }

            if(p_index > max_mid)
                break;

            answerKey[p_index] = (*smallA)[i];
            i++;
            
            if(p_index == max_mid)
                break;

        }

        // if we finish going through the small array but the answer array isn't
        // done yet:
        
        while(j+i <= max_mid)
        {
            answerKey[j+i] = (*bigA)[j];
            j++;
        }
        
        // now we have the element that has crossed the middle, along with 
        int low_mid_val = answerKey[low_mid];
        int high_mid_val = answerKey[max_mid];        

        return ((double)(high_mid_val + low_mid_val) / 2) ;
    }

    // Finds the location of where an element should go 
    int findLocation(int p, vector<int>& A, int low, int high)
    {
        assert(high >= low);

        // case of a 1 length array
        if(low == high) 
            return (p > A[low]) ? low + 1 : low;

        // case of two element array
        else if(high ==  low + 1)
        {
            if(p >= A[high])
                return high + 1;
            else if( p >= A[low])
                return low + 1;
            else 
                return low;
        }

        // case of three element array
        else if(high - low == 2){
            if(p >= A[high])
                return high + 1;
            else if( p >= A[low+1])
                return high;
            else if( p >= A[low])
                return low+1;
            else
                return low;
        }

        int mid = (high - low) / 2 + low;

        // case that the mid point equals our element
        if(A[mid] == p)
            return mid;

        // case that our element resides in the lower subarray
        else if( p < A[mid])
            return findLocation(p, A, low, ((mid-1)>=0)?mid-1:0 );

        // case that our element resides in the upper subarray

        else 
            return findLocation(p, A, mid+1, high);
    }
    
    double getMedianOneArray(vector<int>& A)
    {
        int m = A.size();
        
        if (m == 1)
            return A[0];        
        else if (m % 2 == 0)
        {
            return ((double)(A[m/2]) + (double)A[m/2-1]) / 2 ;
            
        }        
        else 
            return A[m/2];
    }
};

int main(void)
{
    vector<int> nums1{1,5,6};
    vector<int> nums2{2,3,4};
    // vector<int> nums1{, , , 3, 4, , , };

    Solution sol;

    cout << "Median: " << sol.findMedianSortedArrays(nums1, nums2) << endl;

    return 0;
}
