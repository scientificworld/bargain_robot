//û���ʶ��ֻ�����д�۸��ˡ���T T 
#include"robot.h"
int main(){
	srand(time(0));
	int money=rand()%500+1; 
	for(int count=0;count<=0;count--){
		thing=rand()%10+1;
		price=rand()%25+1;
		if(money<price){
			break; 
		} 
		cout<<"��ң�һ��"<<robot[thing]<<"����Ǯ��"<<endl;
		sleep((rand()%4+1)*1000); 
		cout<<"���ң�һ��"<<robot[thing]<<price<<"Ԫ��"<<endl;
		sleep(1000); 
		if(price>=20){
			cout<<"��ң�̫���ˣ�"<<endl; 
		}
		else if(price<=8){
			cout<<"��ң���ô���ˣ����ҳ����"<<endl;
			money-=price*2; 
		}
		else{
			cout<<"��ң����Ż�������һ��ɡ�"<<endl;
			money-=price; 
		}
		sleep(1000); 
	}
	cout<<"��ң�����Ĺ����ˡ��ټ���"<<endl;
	sleep(2000); 
	return 0; 
} 
