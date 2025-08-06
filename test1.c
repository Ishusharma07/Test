#include <stdio.h>
void main()
{
	int hh = 6;
	int min = 120;
	int sec = 40;
	int teamp;
	
	teamp = (hh*3600) + (min*60) + sec;
	printf("hh %d\n" , hh);
	printf("min %d\n" , min );
	printf("sec %d\n", sec );
	printf("teamp %d" , teamp );
	
	
}