class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        int thirdLargest = INT_MIN;

        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] > largest) {
                thirdLargest = secondLargest;
                secondLargest = largest;
                largest = nums[i];
            }
            else if (nums[i] > secondLargest) {
                thirdLargest = secondLargest;
                secondLargest = nums[i];
            }
            else if (nums[i] > thirdLargest) {
                thirdLargest = nums[i];
            }

            if (nums[i] < smallest) {
                secondSmallest = smallest;
                smallest = nums[i];
            }
            else if (nums[i] < secondSmallest) {
                secondSmallest = nums[i];
            }
        }

        int prod1 = largest * secondLargest * thirdLargest;
        int prod2 = largest * smallest * secondSmallest;

        return max(prod1, prod2);
    }
};
