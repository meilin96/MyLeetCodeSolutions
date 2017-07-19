#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
int ireverse(int x) {
		
        int flag = false;
        std::string cs = "2147483647";
        if(x < 0){
            flag = true;
            x = -x;
            if(x == -2147483648)
            	return 0;
        }
        std::stringstream ss;
        std::string sn;
        ss << x;
        ss >> sn;
        reverse(sn.begin(),sn.end());
        if(sn > cs && sn.size() == cs.size()) return 0;
        int n;
        ss.clear();
        ss << sn;
        ss >> n;
        if(flag) n = -n;
        return n;
}
class Solution {
public:
    int reverse(int x) {
        long long lx = x;
        if(lx > ~(1 << 31) || lx < (1 << 31))
            return 0;
        bool isF = false;
        if(lx < 0){
            lx = -lx;
            isF = true;
        }
        long long res = 0;
        while(lx){
            long long c = lx%10;
            lx/=10;
            res = res*10 + c;
            if(res > 2147483647)
                return 0;
        }
        return isF?-res:res;
    }
};
int main()
{
//	std::cout << sizeof(int) << std::endl;
//	int x = 0;
//	int px = -1;
//	for(int i = 0;i >= 0;i++){
//		x++;
//		px++;
//	}
//	std::cout << x << " " << px;
	long int test = 0;
	int a = 1 << 31;
	int b = a^(~0);
	std::cout << b << std::endl;
	std::cout << a << std::endl;
	std::cout << ir(123);
}
