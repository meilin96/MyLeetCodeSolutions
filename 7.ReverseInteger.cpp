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
	std::cout << ireverse(123);
}
