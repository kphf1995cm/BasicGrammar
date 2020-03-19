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

	void ksort(std::vector<int>& vals) {
		if (vals.size() > 0) {
			for (int i = 0; i < vals.size(); i++) {
				int k = i, j;
				for (j = i + 1; j < vals.size(); j++) {
					if (vals[j] < vals[k])
						k = j;
				}
				if (k != i) {
					int temp = vals[k];
					vals[k] = vals[i];
					vals[i] = temp;
				}
			}
		}
	}

	void pipesort(std::vector<int>& vals) {
		if (vals.size()>0) {
			for (int i = vals.size() - 1; i >= 0; i--) {
				for (int j = 0; j < i; j++) {
					if (vals[j] > vals[j + 1]) {
						int temp = vals[j + 1];
						vals[j + 1] = vals[j];
						vals[j] = temp;
					}
				}
			}
		}
	}
};

#endif