#include<iostream>
#include<string>
using namespace std;
void main() {
	/*描述
给你一个字符串，里面只包含"(",")","[","]"四种符号，请问你需要至少添加多少个括号才能使这些括号匹配起来。
如：
[]是匹配的
([])[]是匹配的
((]是不匹配的
([)]是不匹配的
输入
第一行输入一个正整数N，表示测试数据组数(N<=10)
每组测试数据都只有一行，是一个字符串S，S中只包含以上所说的四种字符，S的长度不超过100
输出
对于每组测试数据都输出一个正整数，表示最少需要添加的括号的数量。每组测试输出占一行*/
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		string t;
		int x=0,y=-1;
		int nn=0;
		while (x < s.length()) {
			switch (s[x])
			{
			case'(':t = t + "("; y++; break;
			case'[':t = t + '['; y++; break;
			case')':
				if (y == -1)
					nn++;
				else
				while (y >= 0) {
				if (t[y] == '(')
				{
					y--;
					break;
				}
				else {
					nn++;
					y--;
				}
			}break;
			case']':if (y == -1)
				nn++;
					else
				while (y >= 0) {
				if (t[y] == '[')
				{
					y--;
					break;
				}
				else {
					nn++;
					y--;
				}
			}break;
			default:
				break;
			}
			x++;
		}
		nn = nn + y + 1;
		cout << nn<<endl;
	}
}
