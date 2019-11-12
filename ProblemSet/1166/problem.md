# 打印金字塔 之二
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
输出由数字字符组成的图形。


## Input
输入有多行。第一行是一个正整数M，表示后面有M行输入。
之后每行是一个非零整数N，表示要输出一个由N行数字字符组成的图形。
M和N都不超过int类型的表示范围。


## Output
输出M个由数字字符组成的图形。
如果N>0，则输出一个底边在下、顶角在上的等腰三角形；如果N<0，则输出一个底边在上、顶角在下的等腰三角形。
每个等腰三角形的第i行（1<i<=N）由i的个位数组成。
两个等腰三角形之间用一个空行隔开。


## Sample Input
```
2
8
-5
```
## Sample Output
```
       1
      222
     33333
    4444444
   555555555
  66666666666
 7777777777777
888888888888888

555555555
 4444444
  33333
   222
    1
```

## HINT