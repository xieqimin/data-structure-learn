#include<iostream>
#include<string>
using namespace std;
void main() {
	/*����
����һ���ַ���������ֻ����"(",")","[","]"���ַ��ţ���������Ҫ������Ӷ��ٸ����Ų���ʹ��Щ����ƥ��������
�磺
[]��ƥ���
([])[]��ƥ���
((]�ǲ�ƥ���
([)]�ǲ�ƥ���
����
��һ������һ��������N����ʾ������������(N<=10)
ÿ��������ݶ�ֻ��һ�У���һ���ַ���S��S��ֻ����������˵�������ַ���S�ĳ��Ȳ�����100
���
����ÿ��������ݶ����һ������������ʾ������Ҫ��ӵ����ŵ�������ÿ��������ռһ��*/
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
