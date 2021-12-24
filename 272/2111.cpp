class Solution {
public:
    int binary_search(vector<int>& vc, int len, int tmp) {
        int left = 1;
        int right = len;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (vc[mid] <= tmp)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }
    
    int kIncreasing(vector<int>& arr, int k) {
        int         ans = 0;
        vector<int> vc(int(arr.size()) + 1);
        for (int i = 0; i < k; i++)
        {
            vc[1]   = arr[i];
            int len = 1;
            for (int j = i + k; j < arr.size(); j += k)
            {
                int tmp = arr[j];
                int idx = binary_search(vc, len, tmp);
                vc[idx] = tmp;
                if (idx > len)
                    len++;
            }
            ans += len;
        }
        return arr.size() - ans;
    }
};
