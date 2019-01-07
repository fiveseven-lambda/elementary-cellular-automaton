#include <stdio.h>

int main(void){
	unsigned long long cell = 1llu << 32;
	unsigned char rule = 90;
	for(int i = 0; i < 32; ++i){
		unsigned long long tmp = 0;
		for(int j = 0; j < 64; ++j) tmp |= (unsigned long long)(rule >> (cell >> j & 7) & 1) << j + 1;
		for(int j = 0; j < 64; ++j) putchar(cell >> j & 1 ? 'o' : ' ');
		cell = tmp;
		putchar('\n');
	}
	return 0;
}
