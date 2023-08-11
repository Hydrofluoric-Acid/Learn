
class Solution {
    public static void main(String[] args) {
        int[] nums = { 2, 7, 11, 15 };
        int target = 9;
        System.out.println(Test.twoSum(nums, target).toString());
    }

}

class Test {
    public static int[] twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++) {
            for (int j = nums.length - 1; j > i; j--) {
                if (nums[i] + nums[j] == target) {
                    return new int[] { nums[i], nums[j] };
                }
            }
        }
        return new int[0];
    }
}
