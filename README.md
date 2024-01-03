Link: https://codeforces.com/problemset/problem/1632/C
### Analysis
```
a > 0 and b > 0
a < b

possible operations:
(1) add 1 to a
(2) add 1 to b
(3) set a = a | b (bitwise OR)

goal:
- min no. of operations to make a = b

------------------------

1
56678 164422

164422:
00000000000000101000001001000110

56678:
00000000000000001101110101100110

56678 OR 164422 = 188262

00000000000000101101111101100110

ans: 23329

------------------------

1 operation iff a and b have matching set bits

problem:
- combination of 2nd & 3rd operations
```
