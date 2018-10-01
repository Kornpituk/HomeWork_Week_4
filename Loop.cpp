#include<stdio.h>

int main(){
	
	int j;
	int id=21;//do while
	for(int i=1;i<=10;i++){
		printf("%d:",i);
		if(i%28==0||i%29==0){
			printf(" We are TechnicCom");
		}//end01
		if(i%30==0){
			printf(" 30 Year Anniversary Undelete");
		}//end02
		for(j=2;j<=i;j++){
			if(i%j==0){
					break;
				}
			}
			if(i==j){
				printf(" Prime Number");
			}//end03
		if(i==1){
			printf(" Kronpituk Kunnika Gun");
		}//end04
		if(i==9){
			printf(" Sarocha lungkham Char");
		}
		if(i==3){
			printf(" Parkotkan Phochom Pee");
		}//end 05
		printf("\n");
	}//End for------------------------------------------------------
	//start while!!!!!----------------------------------------------
	int iw=11;
	while (iw<=20){
		printf("%d:",iw);
		if(iw%28==0||iw%29==0){
			printf(" We are TechnicCom");
		}//end01
		if(iw%30==0){
			printf(" 30 Year Anniversary Undelete");
		}//end02
		for(j=2;j<=iw;j++){
			if(iw%j==0){
					break;
				}
			}
			if(iw==j){
				printf(" Prime Number");
			}//end03
		if(iw==1){
			printf(" Kronpituk Kunnika Gun");
		}//end04
		if(iw==9){
			printf(" Sarocha lungkham Char");
		}
		if(iw==3){
			printf(" Parkotkan Phochom Pee");
		}
		if(iw==20){
			printf(" pitiwat promnimit Mike");
		}
		if(id==26){
			printf(" Budsababan Kewmai Bow");
		}
		//end 05
		printf("\n");
		iw++;
	}//End while-------------------------------------------------------
	//start do while!!!!!--------------------------------------------------
	do
	{
	
		printf("%d:",id);
		
		if(id%28==0||id%29==0){
			printf(" We are TechnicCom");
		}//end01
		if(id%30==0){
			printf(" 30 Year Anniversary Undelete");
		}//end02
		for(j=2;j<=id;j++){
			if(id%j==0){
					break;
				}
			}
			if(id==j){
				printf(" Prime Number");
			}//end03
		if(id==1){
			printf(" Kronpituk Kunnika Gun");
		}//end04
		if(id==9){
			printf(" Sarocha lungkham Char");
		}
		if(id==3){
			printf(" Parkotkan Phochom Pee");
		}
		if(id==20){
			printf(" pitiwat promnimit Mike");
		}
		if(id==26){
			printf(" Budsababan Kewmai Bow");
		}
		//end 05
		printf("\n");
		id++;
	}while(id<=100);
	//End do while--------------------------------------------------------------------------------------------------
}//Mian
