#include <iostream>
using namespace std;
int main() {
	//while 1 дано 2 целых положительных числа a и b (a < b) вывести из этого диапозона все числа в рорядке убывания
	/*int a, b, i;
	cin >> a >> b;
	i = b;
	while (i >= a) {
		cout << i << " ";
		i--;
    }*/
	// for 2 дано 2 целых положительных числа a и b (a < b)
	// найти сумму четных чисел из этого диапозона
	/*int a, b, sum = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (i  % 2 == 0)
			sum += i
	    }

    }
    cout << sum << endl;*/
    // while 2 произведение тех числел, что не делятся на 5
	int i = 1, n, p = 1;
	cin >> n;
	while (i <= n) {
		if (i % 5 != 0) {
			p *= i; //p = p * i;
		}
		i++;
	}
	cout << p << endl;