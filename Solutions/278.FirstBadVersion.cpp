// Forward declaration of isBadVersion API.
#include <iostream>
using namespace std;

bool isBadVersion(int version){
	if(version >= 1702766719)
		return true;
	else
		return false;
}

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int low = 1;
        unsigned int high = n;
        while(low <= high){
            unsigned int mid = (low + high)/2;
            if(isBadVersion(mid) == true)
                high = mid -1;
            else
                low = mid + 1;
        }
        return low>high?low:high;
    }
};

int main()
{
	Solution s;
	cout << s.firstBadVersion(2126753390);
}
