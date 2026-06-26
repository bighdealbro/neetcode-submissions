class Solution {
public:
    void merge(int *arr, int low, int mid, int high) {
        vector<int> left(arr + low, arr + mid + 1);
        vector<int> right(arr + mid + 1, arr + high + 1);

        int i = 0, j = 0;
        int k = low;
        
        while (i < left.size() && j < right.size()) {
            if (left[i] <= right[j])
                arr[k++] = left[i++];
            else
                arr[k++] = right[j++];
        }
        
        while (i < left.size())    
            arr[k++] = left[i++];
            
        while (j < right.size()) 
            arr[k++] = right[j++];
    }

    void mergesort(int *arr, int low, int high) {
        if (low >= high) 
            return;
        int mid = low + (high - low) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums.data(), 0, nums.size() - 1);
        return nums;
    }
};
