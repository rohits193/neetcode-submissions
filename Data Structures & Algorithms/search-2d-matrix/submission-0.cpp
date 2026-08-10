class Solution {
   public:
    bool binarysearch(int l, int r, const vector<int>& arr, int target) {
        if (l>r) return false;
        int mid = l + (r - l) / 2;
        if (arr[mid] == target) {
            return true;
        } else {
            return (arr[mid] < target ? binarysearch(mid + 1, r, arr, target)
                                      : binarysearch(l, mid - 1, arr, target));
        }

    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int matsize = rows * cols;
        int i = 0;
        while (i < rows) {
            if (matrix[i][cols - 1] == target) {
                return true;
            } else if (matrix[i][cols - 1] < target) {
                i++;
            } else {
                return binarysearch(0, cols - 1, matrix[i], target);
            }
        }

        return false;
    }
};
