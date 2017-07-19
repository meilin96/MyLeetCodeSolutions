package main

import (
	"fmt"
	"strings"
//	"reflect"
)

func findWords(words []string) []string {
	m := make(map[byte]uint8)
	m['q'] = 1
	m['w'] = 1
	m['e'] = 1
	m['r'] = 1
	m['t'] = 1
	m['y'] = 1
	m['u'] = 1
	m['i'] = 1
	m['o'] = 1
	m['p'] = 1
	m['a'] = 2
	m['s'] = 2
	m['d'] = 2
	m['f'] = 2
	m['g'] = 2
	m['h'] = 2
	m['j'] = 2
	m['k'] = 2
	m['l'] = 2
	m['z'] = 3
	m['x'] = 3
	m['c'] = 3
	m['v'] = 3
	m['b'] = 3
	m['n'] = 3
	m['m'] = 3
	res := []string{}
	for i, v := range words{
		var row uint8 = 0
		flag := true
		tv := strings.ToLower(v)
		for _, sv := range tv{
			if row == 0{
				row = m[byte(sv)]
			}else{
				//fmt.Printf("tv = %v, sv = %v, row = %v, m[sv] = %v\n", tv, string(sv), row, m[byte(sv)])
				if m[byte(sv)] != row{
					flag = false
					break
				}
			}
		}
		if flag {
			res = append(res, words[i])
		}
	}
	return res
}

func main (){
	test := []string{"Hello","Alaska","Dad","Peace"}

	//findWords(test)
	fmt.Println(findWords(test))
}