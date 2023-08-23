#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	const int angles[] = {60, 90, 108, 120, 135, 140, 144, 150, 156, 160, 162, 165, 168, 170, 171, 172, 174, 175, 176, 177, 178, 179};
	for (int i = 0; i < t; i++) {
		int g;
		cin >> g;
		for (int j = 0; j < 22; j++) {
			if (angles[j] == g) {
				cout << "YES\n";
				goto exit;
			}
		}
		cout << "NO\n";
		exit:;
	}
}
