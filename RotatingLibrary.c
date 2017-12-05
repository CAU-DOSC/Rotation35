#include "Rotate.h"

char *TrivialPricySolution(char input[], int d){
	char temp;
	int length = strlen(input);
	int rotateNum;
	if(d > 0){
		rotateNum = d;
		temp = input[0];
		for(int i = 0; i < rotateNum; i++){
			for(int j = 0; j < length-1; j++)
				input[j] = input[j+1];
		}
		input[length-1] = temp;
	}
	else{
		rotateNum = -1*d;
		temp = input[length-1];
		for(int i = 0; i < rotateNum; i++){
			for(int j = length-1; j > 0; j--)
				input[j] = input[j-1];
		}
		input[0] = temp;
	}
	return input;
}


char *Reversal_Algorithm(char input[], int d)
{
	char temp;
	int length = strlen(input);
	if (d > 0)
	{
		int rotateNum = d;
		int AllReverse = length;
		int SubReverse_1 = d;
		int SubReverse_2 = length;
		for (int i = 0; i < rotateNum; i++)
		{
			temp = input[i];
			input[i] = input[SubReverse_1 - 1];
			input[SubReverse_1 - 1] = temp;
			if (i == rotateNum / 2 - 1) // d의 절반만큼일때 loop를 빠져나간다.
				break;
			SubReverse_1--;
		}
		for (int j = rotateNum; j < length; j++)
		{
			temp = input[j];
			input[j] = input[SubReverse_2 - 1];
			input[SubReverse_2 - 1] = temp;
			if (j == (rotateNum + (length - rotateNum) / 2) - 1) // d의 절반만큼일때 loop를 빠져나간다.
				break;
			SubReverse_2--;
		}
		for (int k = 0; k < length; k++)
		{
			temp = input[k];
			input[k] = input[AllReverse - 1];
			input[AllReverse - 1] = temp;
			if (k == length / 2 - 1) // d의 절반만큼일때 loop를 빠져나간다.
				break;
			AllReverse--;
		}
	}
	else
	{
		int rotateNum = length + d;
		int AllReverse = length;
		int SubReverse_1 = length + d;
		int SubReverse_2 = length;
		for (int i = 0; i < rotateNum; i++)
		{
			temp = input[i];
			input[i] = input[SubReverse_1 - 1];
			input[SubReverse_1 - 1] = temp;
			if (i == rotateNum / 2 - 1) // d의 절반만큼일때 loop를 빠져나간다.
				break;
			SubReverse_1--;
		}
		for (int j = rotateNum; j < length; j++)
		{
			temp = input[j];
			input[j] = input[SubReverse_2 - 1];
			input[SubReverse_2 - 1] = temp;
			if (j == (rotateNum + (length - rotateNum) / 2) - 1) // d의 절반만큼일때 loop를 빠져나간다.
				break;
			SubReverse_2--;
		}
		for (int k = 0; k < length; k++)
		{
			temp = input[k];
			input[k] = input[AllReverse - 1];
			input[AllReverse - 1] = temp;
			if (k == length / 2 - 1) // d의 절반만큼일때 loop를 빠져나간다.
				break;
			AllReverse--;
		}
	}
	return input;
}

char *jugglng(char input[], int d)
{
	int i, j, k, temp, n, ntemp, gcd;
	n = starlen(input);
	ntemp = n;
	dteno = d;
	while (ntemp != 0)
	{
		int makegcd = dtemp % ntemp;
		dtemp = ntemp;
		ntemp = makegcd;
	}
	gcd = abs(dtemp);
	for (i = 0; i < gcd; i++)
	{
		temp = arr[i];
		j = i;
		while (1)
		{
			k = j + d;
			if (k >= n)
				k = k - n;
			if (k == i)
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}
	return input;
}
