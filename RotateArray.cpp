class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Ensure k is within the range of array size

        if (k == 0) return; // No need to rotate if k is zero

        int count = 0; // Counter for elements moved
        int start = 0; // Start position for each rotation

        while (count < n) {
            int current = start;
            int prev = nums[start];

            do {
                int next = (current + k) % n;
                int temp = nums[next];
                nums[next] = prev;
                prev = temp;
                current = next;
                count++;
            } while (start != current);

            start++; // Move to the next starting position for the next rotation
        }
    }
};
