// SortedArrayRanges.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"SortedArrayRanges.h"


int main()
{
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int i = 0; i < n; std::cin >> nums[i ++]);
	//SortedArrayRanges SAR;
	std::vector<std::string> ranges =SAR.summaryRanges(nums);
	for (int i = 0, len = ranges.size(); i < len; i++)
		std::cout << ranges[i] << " ";
	std::cout << '\n';
	exit(0);;
    return 0;
}

