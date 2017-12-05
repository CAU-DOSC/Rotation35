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

char *juggling(char input[], int d)
{
	int i, j, k, temp, n, ntemp, gcd;
	n = starlen(input);
	int arr[10000];
	ntemp = n;
	int dtemp = d;
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

char *bw(char input[], int d)
 {
	char temp_a[10000];
	char temp_al[10000];
	char temp_ar[10000];
	char temp_b[10000];
	char temp_bl[10000];
	char temp_br[10000];
	int i;
	int length = strlen(input);
	if (d>0)
		 {
		int rotatenum = d;
		if (d < length / 2)
			 {
			for (i = 0; i<d; i++)
				 {
				temp_a[i] = input[i];
				}
			for (i = d; i<length - d; i++)
				 {
				temp_bl[i] = input[i];
				}
			for (i = length - d; i<length; i++)
				 {
				temp_br[i] = input[i];
				}
			strcat(temp_br, temp_bl);
			strcat(temp_br, temp_a);
			return temp_br;
			}
		
			else
			 {
			for (i = length - d; i<length; i++)
				 {
				temp_b[i] = input[i];
				}
			for (i = 0; i<d; i++)
				 {
				temp_al[i] = input[i];
				}
			for (i = d; i<length - d; i++)
				 {
				temp_ar[i] = input[i];
				}
			strcat(temp_b, temp_al);
			strcat(temp_b, temp_ar);
			return temp_b;
			}
		}
	
		else
		 {
			d = d*(-1);
			if (d<length / 2)
			{	
				for (i = length - d; i<length; i++)
				{
					temp_b[i] = input[i];
				}
				for (i = 0; i<d; i++)
				{
					temp_al[i] = input[i];
				}
				for (i = d; i<length - d; i++)
				{
					temp_ar[i] = input[i];
				}
				strcat(temp_b, temp_al);
				strcat(temp_b, temp_ar);
				return temp_b;
			}
		
			else
			{
				for (i = 0; i<d; i++)
				{
					temp_a[i] = input[i];
				}
				for (i = d; i<length - d; i++)
				{
					temp_bl[i] = input[i];
				}
			for (i = length - d; i<length; i++)
				{
				temp_br[i] = input[i];
				}
			strcat(temp_br, temp_bl);
			strcat(temp_br, temp_a);
			
				return temp_br;
			}
		}
	}