#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);

	while(n--) {
		string s;
		cin >> s;

		if(s.length() <= 10)
			cout << s << "\n";
		else
			cout << s[0] << (s.length()-2) << s[s.length()-1] << "\n";
	}

	return 0;
}