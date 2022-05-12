#include "split.h"


void split(int* ns, unsigned size, int** odds, unsigned* n_odds, int** evens, unsigned* n_evens)
{
	*n_odds = 0;
	*n_evens = 0;

	for (int i = 0; i != size; i++) {
		if (ns[i] % 2 == 0) {
			(*n_evens)++;
		}
		else
		{
			(*n_odds)++;
		}
	}
	*evens = new int[*n_evens];
	*odds = new int[*n_odds];

	int j = 0;
	int k = 0;
	for (int i = 0; i != size; i++) {
		if (ns[i] % 2 == 0) {
			(*evens)[j++] = ns[i];
		}
		else
		{
			(*odds)[k++] = ns[i];
		}
	}
}
