// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(isBadVersion(1))
            return 1;
        int low = 1;
        while(low < n)
        {
            int mid = low+(n - low)/2;
            if(isBadVersion(mid)) n = mid;
            else low = mid + 1;
        }
        return low;
    }
};