#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Rotate.h"


int strLength;
int d;
char * gendata(int n){ // 길이 입력, random string 생성
	srand(time(NULL));
	char * ret;
	ret = malloc(sizeof(char)*n + 1);
	int i;
	for (i = 0; i < n; i++){
		ret[i] = (rand() % 26) + 97;
	}
	ret[i] = '\0';
	return ret;
}

void PrintResult(double result_trivial, double result_juggle, double result_bw, double result_reverse){// 결과 출력
	printf("STRLength\t ROTATEdistance\t T.trivial\t T.juggle\t T.bw\t T.reverse\n");
	printf("%d\t %d\t %5.2f\t %5.2f\t %5.2f\t %5.2f\t", strLength, d, result_trivial, result_juggle, result_bw, result_reverse);
}

int main(int argc, const char * argv[]){
	strLength = atoi(argv[1]);
	d = atoi(argv[2]);

	clock_t current;
	double result_trivial = 0;
	double result_juggle = 0;
	double result_bw= 0;
	double result_reverse = 0;

	char* str = gendata(strLength);

	current = clock(); //현재 시간
	TrivialPricySolution(str,d);
	result_trivial = (double)clock() - current / CLOCKS_PER_SEC; //끝난 시간 - 현재시간

	//current = clock(); //현재 시간
	//juggling(str,d);
	//result_juggle = (double)clock() - current / CLOCKS_PER_SEC; //끝난 시간 - 현재시간

	//current = clock(); //현재 시간
//	bw(str,d);
	//result_bw = (double)clock() - current / CLOCKS_PER_SEC; //끝난 시간 - 현재시간

	current = clock(); //현재 시간
	Reversal_Algorithm(str,d);
	result_reverse = (double)clock() - current / CLOCKS_PER_SEC; //끝난 시간 - 현재시간

	PrintResult(result_trivial, result_juggle, result_bw, result_reverse);
	
	return 0;
}

