#include <iostream>
using namespace std;

class AAA {
private:
public:
	AAA(const int i) {cout << "AAA(const int i) call" << endl;}
	AAA(const AAA &aaa) {cout << "AAA(const AAA &aaa) call" << endl;}
};

int main() {
	// output is "AAA(const int i) call"
	AAA aaa1(1);

	// output is "AAA(const int i) call"
	AAA aaa2(AAA(1));

	return 0;
}
