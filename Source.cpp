#include <iostream>
using namespace std;
int main() {
	//while 1 ���� 2 ����� ������������� ����� a � b (a < b) ������� �� ����� ��������� ��� ����� � ������� ��������
	/*int a, b, i;
	cin >> a >> b;
	i = b;
	while (i >= a) {
		cout << i << " ";
		i--;
    }*/
	// for 2 ���� 2 ����� ������������� ����� a � b (a < b)
	// ����� ����� ������ ����� �� ����� ���������
	/*int a, b, sum = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (i  % 2 == 0)
			sum += i
	    }

    }
    cout << sum << endl;*/
    // while 2 ������������ ��� ������, ��� �� ������� �� 5
	int i = 1, n, p = 1;
	cin >> n;
	while (i <= n) {
		if (i % 5 != 0) {
			p *= i; //p = p * i;
		}
		i++;
	}
	cout << p << endl;