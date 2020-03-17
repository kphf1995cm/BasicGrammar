#ifndef _BASICALGO_H_
#define _BASICALGO_H_
#include <vector>

class Sort {
	int partition(std::vector<int>& nums, int low, int high) {
		int pivot = nums[low];
		while (low < high) {
			while (low<high&&nums[high] >= pivot)
				high--;
			nums[low] = nums[high];
			while (low < high&&nums[low] <= pivot)
				low++;
			nums[high] = nums[low];
		}
		nums[low] = pivot;
		return low;
	}

	void quicksort(std::vector<int>& nums, int i, int j) {
		if (i < j) {
			int mid = partition(nums, i, j);
			quicksort(nums, i, mid - 1);
			quicksort(nums, mid + 1, j);
		}
	}
};

#endif