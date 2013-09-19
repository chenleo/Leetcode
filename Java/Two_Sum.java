public class Solution {
    public int[] twoSum(int[] numbers, int target) {
	// Start typing your Java solution below
	// DO NOT write main() function
		        
	int[2] result;
	for (int i = 0; i< numbers.size();i++)
	{
		for (int j = 0; j < numbers.size(); j++)
		{
			if (numbers[i] + numbers[j] == target)
				{
				     result[0] = i+1;
				     result[1] = j+1;
				     return result;
				}
		 }
	}
	}
}
