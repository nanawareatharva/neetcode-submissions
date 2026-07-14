/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        
        int n = mountainArr.length();

        int low = 1;
        int high = n-2;
        int mid = 0;
        int peak = 0;

        // peak

        while (low <= high){

            mid = low + (high-low) / 2;

            int left = mountainArr.get(mid-1);
            int curr = mountainArr.get(mid);
            int right = mountainArr.get(mid+1);

            if(left < curr && curr < right){
                low = mid+1;
            }

            else if (left > curr && curr > right){
                high = mid-1;
            }

            else{
                peak = mid;
                break;
            }
        }

        // on left

        low = 0;
        high = peak;

        while(low <= high){

            int mid = low + (high - low) / 2;

            int value = mountainArr.get(mid);

            if(value == target) return mid;

            else if(value < target) low = mid + 1;

            else high = mid -1;
        }

        //on right

        
        low = peak+1;
        high = n-1;

        while(low <= high){

            int mid = low + (high - low) / 2;

            int value = mountainArr.get(mid);

            if(value == target) return mid;

            else if(value > target) low = mid + 1;

            else high = mid -1;
        }

        return -1;
    }
};