#include <iostream>
using namespace std;
int f(int n){
        if(n == 1)
            return 1;
        else if(n == 2)
            return 2;
        else if(n == 0)
        	return 0;
        else
            return (f(n-1) + f(n-2));
}

int main(){
//	int res = f(44);
//	cout << res;
	cout << sizeof(int) << endl;
}
