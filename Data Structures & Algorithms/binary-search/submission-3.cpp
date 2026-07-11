class Solution{

private:
    int func(vector<int> &nums, int low, int high, int target){

        if (low > high) return -1;

        int index;

        int mid = low + ((high - low) / 2);

        if(target == nums[mid]) index = mid;

        else if(target > nums[mid]) index =  func(nums, mid+1, high, target);

        else index = func(nums, low, mid-1, target);

        return index;
    }


public:
    int search(vector<int> &nums, int target){

        int n = nums.size();

        return func(nums, 0, n-1, target);
    }
};