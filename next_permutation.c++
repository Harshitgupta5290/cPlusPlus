#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int arr[] = {2,1,3};

    next_permutation(arr,arr+3);

    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];

    return 0;
}

/*class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
};*/