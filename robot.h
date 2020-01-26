#include<string>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void sleep(int x){ 
	clock_t now=clock(); 
	while(clock()-now<x);
}
string robot[10]={"Æ»¹û","³È×Ó","Àæ","ÌÒ×Ó","ÆÏÌÑ","Ïã½¶","Î÷¹Ï","À¶Ý®","²ÝÝ®","·¬ÇÑ"};
int price,thing;
