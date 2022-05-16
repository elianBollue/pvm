#include "nth.h"

int& nth(std::vector<int>& ns, int i) {
	int index = i;
	int size = ns.size();
	while (index >= size) {
		index = index - size;
	}
	while (index < 0) {
		index = index + size;
	}
	return ns[index];
}

int nth(const std::vector<int>& ns, int i) {
	int index = i;
	int size = ns.size();
	while (index >= size) {
		index = index - size;
	}
	while (index < 0) {
		index = index + size;
	}
	return ns[index];
}