impl Solution {
    pub fn fib(n: i32) -> i32 {
        if n == 0 {
            return 0;
        }
        
        if n == 1 {
            return 1;
        }
        
        let mut n0: i32 = 0;
        let mut n1: i32 = 1;
        let mut res: i32 = 0;
        
        for _ in (2..n+1) {
            res = n0+n1;
            n0 = n1;
            n1 = res;
        }
        return res;
    }
}
