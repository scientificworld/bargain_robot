#include<string>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void sleep(int x){ 
	clock_t now=clock(); 
	while(clock()-now<x);
}
string robot[10]={"ƻ��","����","��","����","����","�㽶","����","��ݮ","��ݮ","����"};
int price,thing;
