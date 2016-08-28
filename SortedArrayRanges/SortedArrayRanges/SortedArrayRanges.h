#pragma once
#include<string>
#include<vector>

class SortedArrayRanges {
public:
	std::vector<std::string> summaryRanges(std::vector<int>& nums) {
		std::vector<std::string> result;
		std::string temp;
		for (int i = 0, p, len = nums.size(); i <len;) {
			temp.clear();
			p = i;
			temp += std::to_string(nums[i++]);
			while (i <len && nums[i] == nums[i - 1] + 1)
				i++;
			if (i - 1 >p) {
				temp += "->";
				temp += std::to_string(nums[i - 1]);
			}
			result.push_back(temp);
		}
		return result;
	}
}SAR;