# README file for TEAM[3,5]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.

--------------------------
Lee Do hyeong - Main, Header
Bang Sung Won - Reversal_Algorithm Fucntion
Ko Eun Jin - Juggling_Algorithm Fucntion
Lee Seung Chan - TrivialPricySolution_Algorithm Fucntion 
Kim Yong Hwan - BlockSwap_Algorithm Fucntion
--------------------------

Library File

char *TrivialPricySolution(char input[], int d)

문자열을 매개변수로 받아 d만큼 Rotate시킨다.

TrivialPricySolution의 알고리즘으로 문자열을 Rotate시킨다.

char *juggling(char input[], int d)

문자열을 매개변수로 받아 d만큼 Rotate시킨다.

Juggling의 알고리즘으로 문자열을 Rotate시킨다.

char *bw(char input[], int d)

문자열을 매개변수로 받아 d만큼 Rotate시킨다.

BlockSwap의 알고리즘으로 문자열을 Rotate시킨다.

char *Reversal_Algorithm(char input[], int d)

문자열을 매개변수로 받아 d만큼 Rotate시킨다.

Reverse의 알고리즘으로 문자열을 Rotate시킨다.
--------------------------

Header File

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

char *TrivialPricySolution(char input[], int d);

char *juggling(char input[], int d);

char *bw(char input[], int d);

char *Reversal_Algorithm(char input[], int d);

Library 함수들 선언.
--------------------------

각자의 알고리즘을 하나의 라이브러리 C파일에 선언 후 정의. Main과 Header파일, 라이브러리 파일을 통해 하나의 완성된 코드를 구현.