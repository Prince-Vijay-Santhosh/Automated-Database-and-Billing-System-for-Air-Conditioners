								/* PSP FINAL PROJECT
								TEAM 5 - Cod3 Knights
								Developers: Prince, Hamid, Faisal, Lohith
								Date Of Program: 29-05-2022  */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int starchoice,i,j,bill=0,starchoice3,starchoice4,starchoice5,pmethod,emichoice,cvv;
	long long int mobile, cardno;
	float cpm;
	printf("\n");
	printf("                    Cod3 Knights AC Solutions\n");
	printf("\n");
	printf("TO PROTECT THE ENVIRONMENT, WE ONLY SELL AIR CONDITIONERS WHICH ARE RATED ABOVE 3 STARS.\n");
	printf("We have LIMITED number of BRANDS, as we choose the best brands available\n");
	printf("----------- WE DEEPLY REGRET THE INCONVENIENCE CAUSED! --------------------\n\n");
	char cname[20],ac[31][50]={
	"Blue Star 0.8 Tons Tower AC",
	"AmazonBasics 1.5 Ton Cassette AC",
	"LG 1.5 Ton Cassette AC",
	"Panasonic 1 Ton Split AC",
	"Samsung 1 Ton Split AC", 
	"LG 1.5 Ton Window AC",
	"Voltas 1.5 Ton Cassette AC",
	"Hisense 1.5 Ton Split AC",
	"Carrier 1.2 Ton Tower AC",
	"Whirlpool 1.5 Ton Cassette AC",
	"Godrej 1.5 Ton Cassette AC",
	"Lloyd 1.5 Ton Split AC",
	"Ogeneral 2 Ton Tower AC",
	"Mitsubishi 1.4 Ton Split AC",
	"DAIKIN 1.5 Ton Split AC",
	"Bluestar 2 Ton Split AC",
	"Voltas 1.2 Ton Cassette AC",
	"Godrej 2 Ton Split AC",
	"Kenster 1 Ton Tower AC",
	"LLOYD 1.5 Ton Split AC",
	"Kelvinator 0.8 Ton Split AC",
	"L.G 1 Ton Split AC",
	"Vestar 1 Ton Split AC",
	"Carrier 1.2 Ton Split AC",
	"Whirlpool 1.5 Ton Window AC",
	"Ogeneral 1.4 Ton Split AC",
	"Mitsubishi 2 Split AC",
	"Godrej 2 Ton Split AC",
	"Samsung 1.5 Ton Window AC",
	"Kenster 2 Ton Window AC",
	"Ogeneral 2 Ton Split AC",
	};
	int ids[30];
	int price[30]={
	23850,24954,27490,29999,31990,32854,34490,36999,37500,37990, //3 star prices
	31000,32999,33000,34590,35080,35999,36990,36490,38990,39990, // 4 star prices
	33990,36490,45990,50990,69990,79490,85990,97000,100000,120000 // 5 star prices
	};
	for(i=0;i<30;i++)
	ids[i]=0;
	do{
		// AC Selection
		printf("3) 3-Star (Rs 23850 - Rs 38000)\n4) 4-Star (Rs 31000 - Rs 39990)\n5) 5-Star (Rs 33990 - Rs 120000)\n");
		printf("Enter your preferred energy rating : \n");
	    scanf("%d",&starchoice);
	    starchoice:
	    switch(starchoice){
	    	case 0:
	    		exit(0);
	    	case 1:
	    		goto bill;
	    	case 3:
	    		printf("\nAvailable 3 Star Air Conditioners:\n");   // 3 star ac menu driven
	    		for(i=0;i<10;i++)
	    		printf("%d %s\n",i+1,ac[i]);
	    		printf("\n");
	    		printf("Enter your choice :\n");
	    		scanf("%d",&starchoice3);
	    		switch(starchoice3){
	    			case 1:
	    				printf("\nPrice is Rs %d\n",price[starchoice3-1]);
	    				bill+=price[starchoice3-1];
	    				printf("Bill is %d\n",bill);
	    				ids[0]++;
	    				break;
	    			case 2:
	    				printf("\nPrice is Rs %d\n",price[starchoice3-1]);
	    				bill+=price[starchoice3-1];
	    				printf("Bill is %d\n",bill);
	    				ids[1]++;
	    				break;
	    			case 3:
	    				printf("\nPrice is Rs %d\n",price[starchoice3-1]);
	    				bill+=price[starchoice3-1];
	    				printf("Bill is %d\n",bill);
	    				ids[2]++;
	    				break;
	    			case 4:
	    				printf("\nPrice is Rs %d\n",price[starchoice3-1]);
	    				bill+=price[starchoice3-1];
	    				printf("Bill is %d\n",bill);
	    				ids[3]++;
	    				break;
	    			case 5:
	    				printf("\nPrice is Rs %d\n",price[starchoice3-1]);
	    				bill+=price[starchoice3-1];
	    				printf("Bill is %d\n",bill);
	    				ids[4]++;
	    				break;
	    			case 6:
	    				printf("\nPrice is Rs %d\n",price[starchoice3-1]);
	    				bill+=price[starchoice3-1];
	    				printf("Bill is %d\n",bill);
	    				ids[5]++;
	    				break;
	    			case 7:
	    				printf("\nPrice is Rs %d\n",price[starchoice3-1]);
	    				bill+=price[starchoice3-1];
	    				printf("Bill is %d\n",bill);
	    				ids[6]++;
	    				break;
	    			case 8:
	    				printf("\nPrice is Rs %d\n",price[starchoice3-1]);
	    				bill+=price[starchoice3-1];
	    				printf("Bill is %d\n",bill);
	    				ids[7]++;
	    				break;
	    			case 9:
	    				printf("\nPrice is Rs %d\n",price[starchoice3-1]);
	    				bill+=price[starchoice3-1];
	    				printf("Bill is %d\n",bill);
	    				ids[8]++;
	    				break;
	    			case 10:
	    				printf("\nPrice is Rs %d\n",price[starchoice3-1]);
	    				bill+=price[starchoice3-1];
	    				printf("Bill is %d\n",bill);
	    				ids[9]++;
	    				break;
	    			default:
	    				printf("!!!!!!!!!ENTER VALID OPTION!!!!!!!!!!\n");
				}
				break;
			case 4:
				printf("\nAvailable 4 Star Air Conditioners:\n");   // 4 star ac menu driven
	    		for(i=10;i<20;i++)
	    		printf("%d %s\n",i-9,ac[i]);
	    		printf("\n");
	    		printf("Enter your choice :\n");
	    		scanf("%d",&starchoice4);
	    		switch(starchoice4){
	    			case 1:
	    				printf("\nPrice is Rs %d\n",price[starchoice4+9]);
	    				bill+=price[starchoice4+9];
	    				printf("Bill is %d\n",bill);
	    				ids[10]++;
	    				break;
	    			case 2:
	    				printf("\nPrice is Rs %d\n",price[starchoice4+9]);
	    				bill+=price[starchoice4+9];
	    				printf("Bill is %d\n",bill);
	    				ids[11]++;
	    				break;
	    			case 3:
	    				printf("\nPrice is Rs %d\n",price[starchoice4+9]);
	    				bill+=price[starchoice4+9];
	    				printf("Bill is %d\n",bill);
	    				ids[12]++;
	    				break;
	    			case 4:
	    				printf("\nPrice is Rs %d\n",price[starchoice4+9]);
	    				bill+=price[starchoice4+9];
	    				printf("Bill is %d\n",bill);
	    				ids[13]++;
	    				break;
	    			case 5:
	    				printf("\nPrice is Rs %d\n",price[starchoice4+9]);
	    				bill+=price[starchoice4+9];
	    				printf("Bill is %d\n",bill);
	    				ids[14]++;
	    				break;
	    			case 6:
	    				printf("\nPrice is Rs %d\n",price[starchoice4+9]);
	    				bill+=price[starchoice4+9];
	    				printf("Bill is %d\n",bill);
	    				ids[15]++;
	    				break;
	    			case 7:
	    				printf("\nPrice is Rs %d\n",price[starchoice4+9]);
	    				bill+=price[starchoice4+9];
	    				printf("Bill is %d\n",bill);
	    				ids[16]++;
	    				break;
	    			case 8:
	    				printf("\nPrice is Rs %d\n",price[starchoice4+9]);
	    				bill+=price[starchoice4+9];
	    				printf("Bill is %d\n",bill);
	    				ids[17]++;
	    				break;
	    			case 9:
	    				printf("\nPrice is Rs %d\n",price[starchoice4+9]);
	    				bill+=price[starchoice4+9];
	    				printf("Bill is %d\n",bill);
	    				ids[18]++;
	    				break;
	    			case 10:
	    				printf("\nPrice is Rs %d\n",price[starchoice4+9]);
	    				bill+=price[starchoice4+9];
	    				printf("Bill is %d\n",bill);
	    				ids[19]++;
	    				break;
	    			default:
	    				printf("!!!!!!!!!ENTER VALID OPTION!!!!!!!!!!\n");
				}
				break;
			case 5:
				printf("\nAvailable 5 Star Air Conditioners:\n");   // 5 star ac menu driven
	    		for(i=20;i<30;i++)
	    		printf("%d %s\n",i-19,ac[i]);
	    		printf("\n");
	    		printf("Enter your choice :\n");
	    		scanf("%d",&starchoice5);
	    		switch(starchoice5){
	    			case 1:
	    				printf("\nPrice is Rs %d\n",price[starchoice5+19]);
	    				bill+=price[starchoice5+19];
	    				printf("Bill is %d\n",bill);
	    				ids[20]++;
	    				break;
	    			case 2:
	    				printf("\nPrice is Rs %d\n",price[starchoice5+19]);
	    				bill+=price[starchoice5+19];
	    				printf("Bill is %d\n",bill);
	    				ids[21]++;
	    				break;
	    			case 3:
	    				printf("\nPrice is Rs %d\n",price[starchoice5+19]);
	    				bill+=price[starchoice5+19];
	    				printf("Bill is %d\n",bill);
	    				ids[22]++;
	    				break;
	    			case 4:
	    				printf("\nPrice is Rs %d\n",price[starchoice5+19]);
	    				bill+=price[starchoice5+19];
	    				printf("Bill is %d\n",bill);
	    				ids[23]++;
	    				break;
	    			case 5:
	    				printf("\nPrice is Rs %d\n",price[starchoice5+19]);
	    				bill+=price[starchoice5+19];
	    				printf("Bill is %d\n",bill);
	    				ids[24]++;
	    				break;
	    			case 6:
	    				printf("\nPrice is Rs %d\n",price[starchoice5+19]);
	    				bill+=price[starchoice5+19];
	    				printf("Bill is %d\n",bill);
	    				ids[25]++;
	    				break;
	    			case 7:
	    				printf("\nPrice is Rs %d\n",price[starchoice5+19]);
	    				bill+=price[starchoice5+19];
	    				printf("Bill is %d\n",bill);
	    				ids[26]++;
	    				break;
	    			case 8:
	    				printf("\nPrice is Rs %d\n",price[starchoice5+19]);
	    				bill+=price[starchoice5+19];
	    				printf("Bill is %d\n",bill);
	    				ids[27]++;
	    				break;
	    			case 9:
	    				printf("\nPrice is Rs %d\n",price[starchoice5+19]);
	    				bill+=price[starchoice5+19];
	    				printf("Bill is %d\n",bill);
	    				ids[28]++;
	    				break;
	    			case 10:
	    				printf("\nPrice is Rs %d\n",price[starchoice5+19]);
	    				bill+=price[starchoice5+19];
	    				printf("Bill is %d\n",bill);
	    				ids[29]++;
	    				break;
	    			default:
	    				printf("!!!!!!!!!ENTER VALID OPTION!!!!!!!!!!\n");
				}
				break;
				
				default:
					printf("!!!!!!!!!ENTER VALID OPTION!!!!!!!!!!\n");
		}
		printf("__________________________________________\n");
		printf("\nEnter 0 to exit\n");
		printf("Enter 1 to go to payment\n");
		printf("Enter any other number to continue purchase\n");
		printf("__________________________________________\n");
	}while(1);

	// bill generation
	bill:
	printf("BILL=%d\n",bill);
	printf("Enter customer name\n");
	scanf("%s",cname);
	printf("Enter Mobile number\n");
	scanf("%lld",&mobile);
	printf("Enter payment method\n");
	printf("1 Cash\n");
	printf("2 Debit card\n");
	printf("3 Credit card\n");
	printf("4 EMI\n");
	scanf("%d",&pmethod);
	switch(pmethod){
		case 1:
			printf("\n**********************************BILL********************************\n");
			for(i=0;i<70;i++)
			printf("-");
			printf("\n");
			printf("                         Cod3 Knights AC Solutions\n");
			for(i=0;i<70;i++)
			printf("-");
			printf("\n\n");
            printf("Id\t\tItems\t\t\tQuantity\t\tCost\n");
            for(i=0;i<12;i++)
            if(ids[i]!=0)
            printf("%d\t\t%s\t\t\t%d\t\t%d\n",i+1,ac[i],ids[i],price[i]*ids[i]);
            printf("\n\n\nCustomer Name:                                      ");
            printf("%s",strupr(cname));
			printf("\nCustomer Mobile Number:                             %lld",mobile);   
            printf("\n");   
            printf("Total cost=                                         %d\n",bill);
            printf("payment type:                                       Cash\n");
            printf("payment status:                                     Done\n");
            printf("\n");	
            printf("                         Thank You Visit Again\n");

            printf("\n");
            for(i=0;i<70;i++)
            printf("*");
            printf("\n");	
            break;
        case 2:
        	printf("Enter card number\n");
        	scanf("%d",&cardno);
        	printf("Enter CVV\n");
        	scanf("%d",&cvv);
			printf("\n**********************************BILL********************************\n");
			for(i=0;i<70;i++)
			printf("-");
			printf("\n");
			printf("                         Cod3 Knights AC Solutions\n");
			for(i=0;i<70;i++)
			printf("-");
			printf("\n\n");
            printf("Id\t\tItems\t\t\tQuantity\t\tCost\n");
            for(i=0;i<12;i++)
            if(ids[i]!=0)
            printf("%d\t\t%s\t\t\t%d\t\t%d\n",i+1,ac[i],ids[i],price[i]*ids[i]);
            printf("\n\n\nCustomer Name:                                      ");
            printf("%s",strupr(cname));
			printf("\nCustomer Mobile Number:                             %lld",mobile);   
            printf("\n");   
            printf("Total cost=                                         %d\n",bill);
            printf("payment type:                                       Debit card\n");
            printf("payment status:                                     Done\n");
            printf("\n");	
            printf("                         Thank You Visit Again\n");

            printf("\n");
            for(i=0;i<70;i++)
            printf("*");
            printf("\n");	
            break;
        case 3:
        	printf("Enter card number\n");
        	scanf("%d",&cardno);
        	printf("Enter CVV\n");
        	scanf("%d",&cvv);
			printf("\n**********************************BILL********************************\n");
			for(i=0;i<70;i++)
			printf("-");
			printf("\n");
			printf("                         Cod3 Knights AC Solutions\n");
			for(i=0;i<70;i++)
			printf("-");
			printf("\n\n");
            printf("Id\t\tItems\t\t\tQuantity\t\tCost\n");
            for(i=0;i<12;i++)
            if(ids[i]!=0)
            printf("%d\t\t%s\t\t\t%d\t\t%d\n",i+1,ac[i],ids[i],price[i]*ids[i]);
            printf("\n\n\nCustomer Name:                                      ");
            printf("%s",strupr(cname));
			printf("\nCustomer Mobile Number:                             %lld",mobile);   
            printf("\n");   
            printf("Total cost=                                         %d\n",bill);
            printf("payment type:                                       Credit card\n");
            printf("payment status:                                     Done\n");
            printf("\n");	
            printf("                         Thank You Visit Again\n");

            printf("\n");
            for(i=0;i<70;i++)
            printf("*");
            printf("\n");	
            break;
        case 4:
        	printf("How many months you want to pay?\n");
        	printf("Available options:\n");
        	printf("3 Months\n");
        	printf("6 Months\n");
        	printf("9 Months\n");
        	printf("12 Months\n");
        	scanf("%d",&emichoice);
        	if(emichoice==3)
        	cpm=bill/3;
        	else if(emichoice==6)
        	cpm=bill/6;
        	else if(emichoice==9)
        	cpm=bill/9;
        	else if(emichoice==12)
        	cpm=bill/12;
        	printf("Enter card number\n");
        	scanf("%d",&cardno);
        	printf("Enter CVV\n");
        	scanf("%d",&cvv);
			printf("\n**********************************BILL********************************\n");
			for(i=0;i<70;i++)
			printf("-");
			printf("\n");
			printf("                         Cod3 Knights AC Solutions\n");
			for(i=0;i<70;i++)
			printf("-");
			printf("\n\n");
            printf("Id\t\tItems\t\t\tQuantity\t\tCost\n");
            for(i=0;i<12;i++)
            if(ids[i]!=0)
            printf("%d\t\t%s\t\t\t%d\t\t%d\n",i+1,ac[i],ids[i],price[i]*ids[i]);
            printf("\n\n\nCustomer Name:                                      ");
            printf("%s",strupr(cname));
			printf("\nCustomer Mobile Number:                             %lld",mobile);   
            printf("\n");   
            printf("Total cost=                                         %d\n",bill);
            printf("COST PER MONTH=                                     %f\n",cpm);
            printf("payment type:                                       EMI\n");
            printf("payment status:                                     Pending\n");
            printf("\n");	
            printf("                         Thank You Visit Again\n");

            printf("\n");
            for(i=0;i<70;i++)
            printf("*");
            printf("\n");	
            break;
		}
}
