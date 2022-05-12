#include "is-palindrome.h"
#include <vector>


bool is_palindrome(std::vector<int> ns)
{
	for (int i = 0; i != ns.size() / 2; i++) {
		int j = ns.size() - 1 - i;
		if (ns[i] != ns[j]) {
			return false;
		}
	}
	return true;
}
