# 求矩阵的每行之和
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
编写一个程序，求矩阵各行元素值相加之和。其中，矩阵的元素都是很小的整数，且各行元素之和的数值不会超出int类型的表示范围。


## Input
输入为多行。第一行K>0，表示有K个测试用例。
之后K个测试用例中，首先是两个整数0<=M,N<=100，表示该测试用例的矩阵是一个M行N列的矩阵。之后是一个M行N列的整数组成的矩阵。


## Output
输出有K行，每个测试用例的结果占一行。每行的格式为：
case i:d1 d2 ... dj
其中i表示测试用例的编号（从1开始），d1、d2、....、dj表示相应测试用例的各行的和，两两之间用空格隔开。


## Sample Input
```
4
3 3
1 2 3
1 2 3
1 2 3
2 3
1 1 1
1 1 1
1 1
1
5 1
3
4
5
6
7
```
## Sample Output
```
case 1:6 6 6
case 2:3 3
case 3:1
case 4:3 4 5 6 7
```

## HINT
