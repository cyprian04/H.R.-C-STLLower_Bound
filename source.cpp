#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while (T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
		cout << noshowpos << left << hex << showbase << nouppercase << (long long)(A) << endl;
		cout << showpos << dec << setw(15) << setfill('_') << right << fixed << setprecision(2) << B << endl;
		cout << noshowpos << left << scientific << setprecision(9) << uppercase << C << endl;
	}
	return 0;

}