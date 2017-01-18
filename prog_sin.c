#include <stdio.h>
#include <math.h>

// gcc -o prog_sin prog_sin.c -lm

int
main()
{
	int smp_freq = 16000;
	int smp_cnt, iv;
	double freq = 880;
	double len = 1.0;
	double sec, v;

	smp_cnt = 1;
	do{
		sec = (double)smp_cnt / smp_freq;
		v = sin(2* M_PI * freq * sec);
		iv = 128 + (int)(v * 127);
		putchar(iv);
		smp_cnt++;
	}while(sec < len);
	return 0;
}

/* EOF */
