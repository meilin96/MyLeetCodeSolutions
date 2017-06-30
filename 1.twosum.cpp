#include <iostream>
#include <vector>
using namespace std;
std::vector<int> twoSum(vector<int>& nums, int target) {
        int l = nums.size();
        std::vector<int> a;
        for(int i = 0;i < l;i++){
            for(int j = i+1;j < l;j++){
                if(nums[i] + nums[j] == target){
                    a.push_back(i);
                    a.push_back(j);
                    cout << i << ' ' << j << endl;
                    return a;
                }
            }
        }
    }
int main()
{
	vector<int> a = {3,2,4};
	vector<int> r = twoSum(a,6);
	for(auto i : r)
		cout << i << ' ';
//	int a[10] = {0};
//	for(int i = 0;i < 10;i++){
//		a[i] = i;
//	} 
//	for(int i = 0;i < 10;i++){
//		
//	}
}

