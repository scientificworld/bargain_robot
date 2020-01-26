//没生活常识，只好随便写价格了……T T 
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
		cout<<"买家：一斤"<<robot[thing]<<"多少钱？"<<endl;
		sleep((rand()%4+1)*1000); 
		cout<<"卖家：一斤"<<robot[thing]<<price<<"元。"<<endl;
		sleep(1000); 
		if(price>=20){
			cout<<"买家：太贵了！"<<endl; 
		}
		else if(price<=8){
			cout<<"买家：这么便宜！给我称两斤！"<<endl;
			money-=price*2; 
		}
		else{
			cout<<"买家：看着还不错。来一斤吧。"<<endl;
			money-=price; 
		}
		sleep(1000); 
	}
	cout<<"买家：我买的够多了。再见！"<<endl;
	sleep(2000); 
	return 0; 
} 
