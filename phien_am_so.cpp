#include<stdio.h>
int main(){
	int x, a, b, c, d;
	printf("nhap so x: ");
	scanf("%d",&x);
	a=x%10;		x=x/10; //hang dvi
	b=x%10;		x=x/10;	//hang chu
	c=x%10;		x=x/10;	//hang tram
	d=x%10;		x=x/10;	//hang nghin
	
	if (x>9)
		printf("Nhap sai so");
	else{
		if (d==0)
			printf("Khong nghin ");
		else if (d==1)
			printf("mot nghin ");
		else if(d==2)	
			printf("hai  nghin ");
		else if (d==3)
			printf("ba nghin ");
		else if (d==4)
			printf("bon nghin ");
		else if (d==5)
			printf("nam nghin ");
		else if (d==6)
			printf("sau nghin ");
		else if (d==7)
			printf("bay nghin ");
		else if (d==8)
			printf("tam nghin ");
		else
			printf("chin nghin ");
		
		if (c==0)
			printf("Khong tram ");
		else if (c==1)
			printf("mot tram ");
		else if (c==2)	
			printf("hai  tram ");
		else if (c==3)
			printf("ba tram ");
		else if (c==4)
			printf("bon tram ");
		else if (c==5)
			printf("nam tram ");
		else if (c==6)
			printf("sau tram ");
		else if (c==7)
			printf("bay tram ");
		else if (c==8)
			printf("tam tram ");
		else
			printf("chin tram ");
			
		if (b==0)
			printf(" ");
		else if (b==1)
			printf("muoi");
		else if (b==2)	
			printf("hai muoi ");
		else if (b==3)
			printf("ba muoi ");
		else if (b==4)
			printf("bon muoi ");
		else if (b==5)
			printf("nam muoi ");
		else if (b==6)
			printf("sau muoi ");
		else if (b==7)
			printf("bay muoi ");
		else if (b==8)
			printf("tam muoi ");
		else 
			printf("chin muoi ");	
			
		if (a==0)
			printf(" ");
		else if (a==1)
			printf("mot ");
		else if (a==2)	
			printf("hai ");
		else if (a==3)
			printf("ba ");
		else if (a==4)
			printf("bon ");
		else if (a==5)
			printf("nam ");
		else if (a==6)
			printf("sau ");
		else if (a==7)
			printf("bay");
		else if (a==8)
			printf("tam");
		else
			printf("chin");
		
	}
		
}

