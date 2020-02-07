#include <iostream>
#include <string.h>

void Task5_13() {

	int k;
	std::string s;
	std::string answer;
	std::cout << "Skoliko my nahli gribov?\n" << std::endl;
	std::cin >> s;


	if (s.size() != 0) {
		if (s[s.size() - 1] == 49) {
			if (s.size() > 1 && s[s.size() - 2] == 49) {
				answer = " gribov";
			} else {
				answer = " grib";
			}
		} else if (s[s.size() - 1] > 49 && s[s.size() - 1] < 53) {
			if (s.size() > 1 && s[s.size() - 2] == 49) {
				answer = " gribov";
			} else {
				answer = " griba";
			}
		} else if (s[s.size() - 1] >= 53 || s[s.size() - 1] == 48) {
			answer = " gribov";
		}
	}

	std::cout << "\nMy nashli " << s << answer << " v lesy\n";
	system("pause");
}