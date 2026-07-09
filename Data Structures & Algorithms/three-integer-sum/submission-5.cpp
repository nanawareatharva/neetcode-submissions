class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {

            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                
                int sum = nums[i] + nums[j] + nums[k];

                if (sum < 0) {
                    j++;
                }

                else if (sum > 0) {
                    k--;
                }

                else {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);

                    j++;
                    k--;

                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }

        return ans;
    }
};

/*
        int n = nums.size();

        set<vector<int>> st;

        for (int i = 0; i < n; i++) {
            unordered_set<int> hashSet;

            for (int j = i + 1; j < n; j++) {
                int third = -(nums[i] + nums[j]);

                if (hashSet.find(third) != hashSet.end()) {
                    vector<int> temp = {nums[i], nums[j], third};

                    sort(temp.begin(), temp.end());

                    st.insert(temp);
                }

                hashSet.insert(nums[j]);
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());

        return ans;
*/

/*
        int n = nums.size();

        set<vector<int>> st;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> temp = {nums[i], nums[j], nums[k]};

                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());

        return ans;
*/

/*

1. Approach 1 (Using Three Nested Loops + Set)
- create a set to store only unique triplets.
- use three nested loops to generate all possible triplets.
- if sum of three elements is equal to 0, store them in a temporary vector.
- sort the temporary vector to maintain the same order.
- insert the sorted triplet into the set to avoid duplicates.
- after traversing all triplets, copy all unique triplets from set to the answer vector.
- finally return the answer vector.

2. Approach 2 (Using Hashing + Set)
- create a set to store only unique triplets.
- traverse the array using the first loop.
- create an unordered_set for every first element.
- traverse the remaining elements using the second loop.
- calculate the required third element to make the sum equal to 0.
- if third element is present in the hash set, store the triplet in a temporary vector.
- sort the temporary vector and insert it into the set to avoid duplicates.
- otherwise insert the current element into the hash set.
- after traversing all elements, copy all unique triplets from set to the answer vector.
- finally return the answer vector.

3. Approach 3 (Using Sorting + Two Pointers)
- first sort the given array.
- fix one element using a loop.
- skip duplicate elements to avoid repeated triplets.
- take two pointers, one next to fixed element and another at the end.
- calculate sum of all three elements.
- if sum is less than 0, move left pointer forward.
- if sum is greater than 0, move right pointer backward.
- if sum equals 0, store the triplet in answer vector.
- move both pointers and skip duplicate elements.
- repeat until left pointer becomes greater than or equal to right pointer.
- finally return the answer vector.
*/