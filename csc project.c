#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include <stdlib.h>

void reservation();
void roomservice();
void hallreserve();
void checkout();
void transport();
void bill(char name[], int room_num, int member_code, float total_bill);

int main()
{
	int A;
	
	printf("\n\n\n");
	printf("\n ____  ___    ___    ___    ___                         ___    ___   @   ___ ");
	printf("\n  |   |   |  |   |  |   |  |      |   |  |    |     |  |   |  |   |  |  |   |");
	printf("\n  |   |   |  |   |  |   |  |___   |___|  |     |   |   |   |  |   |  |  |   |");
	printf("\n  |   |      |---|  |   |      |    |    |      | |    |---|  |   |  |  |---|");
	printf("\n  |   |      |   |  |   |   ___|    |    |___    |     |   |  |   |  |  |   |");
	printf("\n                                                                           \n");
	printf("\n                                  * *   * *                                  ");
	printf("\n                                 *    *    *                                 ");
	printf("\n                                 *         *                                 ");
	printf("\n                                  *       *                                  ");
	printf("\n                                     * *                                \n\n ");
	
	printf("\n\t>>>>>>>>>>>> WELCOME TO HOTEL TRANSYLVANIA <<<<<<<<<<<<<<<< \n");
	printf("\n\n\t-------------------------------------------                ");
	printf("\n\t|             Choices                     |                  ");
	printf("\n\t-------------------------------------------         ())      ");
	printf("\n\t| 1. Room Reservation                     |        ())()     ");
	printf("\n\t| 2. Room Services                ____    |       ()))(()    ");
	printf("\n\t| 3. Transportation              |    |   |      ()))())()   ");
	printf("\n\t| 4. Hall Reservation            |.   |   |      ())()()()   ");
	printf("\n\t| 5. Check Out                   |    |   |       ()| |()    ");
	printf("\n\t-------------------------------------------@@@@@@   | |  @@@@");
	printf("\n\n\n\tPlease enter your choice --> ");
	scanf("%d", &A);
	
	switch (A)
	{
		case 1:
			system("cls");
			reservation();
			break;
		
		case 2:
			system("cls");
			roomservice();
			break;
			
		case 3:
			system("cls");
			transport();
			break;
			
		case 4:
			system("cls");
			hallreserve();
			break;
		
		case 5:
			system("cls");
			checkout();
			break;
			
		default:
			system("cls");
			main();
	}
}

void reservation()
{
	const int SGL =300;
	const int TWIN = 400;
	const int DLX = 500;
	const int SPR = 550;
	const int FMLY = 600;
	const int SUITE = 700;
	const int PRM_SUITE = 1000;
	const float GST = 0.06;
	
	int day, night, room, adult, children, amount;
	float cid, cod, price;
	char yon, rc, roomcode;
	
	printf("\n\t\t        _._._                       _._._");
    printf("\n\t\t       _|   |_                     _|   |_");
    printf("\n\t\t       | ... |_._._._._._._._._._._| ... |");
    printf("\n\t\t       | ||| |  o TRANSYLVANIA o   | ||| |");
    printf("\n\t\t       1 --- 1  ---    ---    ---  1 --- 1");
    printf("\n\t\t  ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|");
    printf("\n\t\t (())) |     |---------------------|     |");
    printf("\n\t\t(())())1 --- 1  ---    ---    ---  1 --- 1");
    printf("\n\t\t(()))()1     1  :::   _____   :::  1     1");
    printf("\n\t\t()))(()|     | |~|~|  |_|_|  |~|~| |     |");
    printf("\n\t\t   ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|");
    printf("\n\t\t~ ~^^ @@@@@@@@@@@@@@/=======\@@@@@@@@@@@@@@");
    printf("\n\t\t      ^~^~                              ~^~^");
	printf("\n\n\t\t    ----- WELCOME TO TRANSYLVANIA HOTEL -----");
	
	do 
	{
		printf("\n\n\n\tPlease enter check-in date: ");
		scanf("%f", &cid);
	}
	while (cid<=0);
		
	do
	{
		printf("\n\tPlease enter check-out date: ");
		scanf("%f", &cod);
	}
	while (cod<=0);
	
	do
	{
		printf("\n\n\tPlease enter number of day (s): ");
		scanf("%d", &day);
	}
	while (day<=0);
	
	do
	{
		printf("\n\tPlease enter number of night (s): ");
		scanf("%d", &night);
	}
	while (night<0);
	
	system("cls");
	printf("\n\n\n\n\t\t\t  Please choose room below:");
	printf("\n\n\t----------------------------------------------------------");
	printf("\n\t|      Type of Room         |    Price per night (RM)    |");
	printf("\n\t----------------------------------------------------------");
	printf("\n\t| (A) Single                |         300.00             |");
	printf("\n\t| (B) Twin                  |         400.00             |");
	printf("\n\t| (C) Deluxe                |         500.00             |");
	printf("\n\t| (D) Superior              |         550.00             |");
	printf("\n\t| (E) Family                |         600.00             |");
	printf("\n\t| (F) Suite                 |         700.00             |");
	printf("\n\t| (G) Premier Suite         |        1000.00             |");
	printf("\n\t----------------------------------------------------------");
	printf("\n\t                         |      |                         ");
	printf("\n\t                         |      |                         ");
	printf("\n\t                         |   @  |                         ");
	printf("\n\t    <@)_//               |    @ |            <@)_//       ");
	printf("\n\t     (___)               |@     |             (___)       ");
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	
	printf("\n\n\t\t\t* All prices are excluding GST *");
	
	do
	{
		printf("\n\n\n\n\tPlease enter amount of room to book: ");
		scanf("%d", &room);
	}
	while (room<0);
	
	do
	{
		printf("\n\n\tPlease enter amount of adult (s): ");
		scanf("%d", &adult);
	}
	while (adult<0);
	
	do
	{
		printf("\n\n\tPlease enter amount of children: ");
		scanf("%d", &children);
	}
	while (adult<0);
	
	do
	{
		printf("\n\n\tPlease enter the room code you wished to book (A/B/C/D/E/F/G) : ");
		scanf("%s", &roomcode);
	}
	while (roomcode!='A'&&roomcode!='B'&&roomcode!='C'&&roomcode!='D'&&roomcode!='E'&&roomcode!='F'&&roomcode!='G');
	
	if (roomcode=='A')
	{
		price=(GST*SGL*day)+(SGL*day);
		printf("\n\n\t\t*** Your total price is RM %.2f ***", price);
		printf("\n\n\n\tDo you want to add any request? Press Y (YES): ");
		scanf("%s",&yon);
		
		if (yon=='Y'||yon=='y')
		{
			printf("\n\n\t\tPlease choose the requests below:");
			printf("\n\n\t\t  -----------------------------");
			printf("\n\t\t  |        Request code       |");
			printf("\n\t\t  -----------------------------");
			printf("\n\t\t  | (a) More bed sheets       |");
			printf("\n\t\t  | (b) More pillows          |");
			printf("\n\t\t  | (c) More towels           |");
			printf("\n\t\t  | (d) More toilet tissues   |");
			printf("\n\t\t  | (e) More soaps            |");
			printf("\n\t\t  | (f) More cups             |");
			printf("\n\t\t  | (g) More blankets         |");
			printf("\n\t\t  -----------------------------");
			printf("\n\n\t\t* All requests are free of charge *\n\n");
			
			do
			{
				printf("\n\tState your request code here: ");
				scanf("%s", &rc);
			}
			while (rc!='a'&&rc!='b'&&rc!='c'&&rc!='d'&&rc!='e'&&rc!='f'&&rc!='g');
	
			do
			{
				printf("\n\tState your amount: ");
				scanf("%d",&amount);
			}
			while (amount<=0);
			
			printf("\n\n\tYour request will be processed soon! Have a nice day ^_^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		}
		
		else
		{
			printf("\n\n\t\t\t\tThank You!^^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");	
		}	
	}
	
	else if (roomcode=='B')	
	{
		price=(GST*TWIN*day)+(TWIN*day);
		printf("\n\n\t\t*** Your total price is RM %.2f ***", price);
		printf("\n\n\n\tDo you want to add any request? Press Y (YES): ");
		scanf("%s",&yon);
		
		if (yon=='Y'||yon=='y')
		{
			printf("\n\n\t\tPlease choose the requests below:");
			printf("\n\n\t\t  -----------------------------");
			printf("\n\t\t  |        Request code       |");
			printf("\n\t\t  -----------------------------");
			printf("\n\t\t  | (a) More bed sheets       |");
			printf("\n\t\t  | (b) More pillows          |");
			printf("\n\t\t  | (c) More towels           |");
			printf("\n\t\t  | (d) More toilet tissues   |");
			printf("\n\t\t  | (e) More soaps            |");
			printf("\n\t\t  | (f) More cups             |");
			printf("\n\t\t  | (g) More blankets         |");
			printf("\n\t\t  -----------------------------");
			printf("\n\n\t\t* All requests are free of charge *\n\n");
			
			do
			{
				printf("\n\tState your request code here: ");
				scanf("%s", &rc);
			}
			while (rc!='a'&&rc!='b'&&rc!='c'&&rc!='d'&&rc!='e'&&rc!='f'&&rc!='g');
	
			do
			{
				printf("\n\tState your amount: ");
				scanf("%d",&amount);
			}
			while (amount<=0);
			
			printf("\n\n\tYour request will be processed soon! Have a nice day ^_^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		}
		
		else
		{
			printf("\n\n\t\t\t\tThank You!^^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");	
		}	
	}
	
	else if (roomcode=='C')
	{
		price=(GST*DLX*day)+(DLX*day);
		printf("\n\n\t\t*** Your total price is RM %.2f ***", price);
		printf("\n\n\n\tDo you want to add any request? Press Y (YES): ");
		scanf("%s",&yon);
		
		if (yon=='Y'||yon=='y')
		{
			printf("\n\n\t\tPlease choose the requests below:");
			printf("\n\n\t\t  -----------------------------");
			printf("\n\t\t  |        Request code       |");
			printf("\n\t\t  -----------------------------");
			printf("\n\t\t  | (a) More bed sheets       |");
			printf("\n\t\t  | (b) More pillows          |");
			printf("\n\t\t  | (c) More towels           |");
			printf("\n\t\t  | (d) More toilet tissues   |");
			printf("\n\t\t  | (e) More soaps            |");
			printf("\n\t\t  | (f) More cups             |");
			printf("\n\t\t  | (g) More blankets         |");
			printf("\n\t\t  -----------------------------");
			printf("\n\n\t\t* All requests are free of charge *\n\n");
			
			do
			{
				printf("\n\tState your request code here: ");
				scanf("%s", &rc);
			}
			while (rc!='a'&&rc!='b'&&rc!='c'&&rc!='d'&&rc!='e'&&rc!='f'&&rc!='g');
	
			do
			{
				printf("\n\tState your amount: ");
				scanf("%d",&amount);
			}
			while (amount<=0);
			
			printf("\n\n\tYour request will be processed soon! Have a nice day ^_^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		}
		
		else
		{
			printf("\n\n\t\t\t\tThank You!^^\n\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");	
		}	
	}

	else if (roomcode=='D')
	{
		price=(GST*SPR*day)+(SPR*day);
		printf("\n\n\t\t*** Your total price is RM %.2f ***", price);
		printf("\n\n\n\tDo you want to add any request? Press Y (YES): ");
		scanf("%s",&yon);
		
		if (yon=='Y'||yon=='y')
		{
			printf("\n\n\t\tPlease choose the requests below:");
			printf("\n\n\t\t  -----------------------------");
			printf("\n\t\t  |        Request code       |");
			printf("\n\t\t  -----------------------------");
			printf("\n\t\t  | (a) More bed sheets       |");
			printf("\n\t\t  | (b) More pillows          |");
			printf("\n\t\t  | (c) More towels           |");
			printf("\n\t\t  | (d) More toilet tissues   |");
			printf("\n\t\t  | (e) More soaps            |");
			printf("\n\t\t  | (f) More cups             |");
			printf("\n\t\t  | (g) More blankets         |");
			printf("\n\t\t  -----------------------------");
			printf("\n\n\t\t* All requests are free of charge *\n\n");
			
			do
			{
				printf("\n\tState your request code here: ");
				scanf("%s", &rc);
			}
			while (rc!='a'&&rc!='b'&&rc!='c'&&rc!='d'&&rc!='e'&&rc!='f'&&rc!='g');
	
			do
			{
				printf("\n\tState your amount: ");
				scanf("%d",&amount);
			}
			while (amount<=0);
			
			printf("\n\n\tYour request will be processed soon! Have a nice day ^_^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		}
		
		else
		{
			printf("\n\n\t\t\t\tThank You!^^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");	
		}	
	}
	
	else if (roomcode=='E')
	{
		price=(GST*FMLY*day)+(FMLY*day);
		printf("\n\n\t\t*** Your total price is RM %.2f ***", price);
		printf("\n\n\n\tDo you want to add any request? Press Y (YES): ");
		scanf("%s",&yon);
		
		if (yon=='Y'||yon=='y')
		{
			printf("\n\n\t\tPlease choose the requests below:");
			printf("\n\n\t\t  -----------------------------");
			printf("\n\t\t  |        Request code       |");
			printf("\n\t\t  -----------------------------");
			printf("\n\t\t  | (a) More bed sheets       |");
			printf("\n\t\t  | (b) More pillows          |");
			printf("\n\t\t  | (c) More towels           |");
			printf("\n\t\t  | (d) More toilet tissues   |");
			printf("\n\t\t  | (e) More soaps            |");
			printf("\n\t\t  | (f) More cups             |");
			printf("\n\t\t  | (g) More blankets         |");
			printf("\n\t\t  -----------------------------");
			printf("\n\n\t\t* All requests are free of charge *\n\n");
			
			do
			{
				printf("\n\tState your request code here: ");
				scanf("%s", &rc);
			}
			while (rc!='a'&&rc!='b'&&rc!='c'&&rc!='d'&&rc!='e'&&rc!='f'&&rc!='g');
	
			do
			{
				printf("\n\tState your amount: ");
				scanf("%d",&amount);
			}
			while (amount<=0);
			
			printf("\n\n\tYour request will be processed soon! Have a nice day ^_^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		}
		
		else
		{
			printf("\n\n\t\t\t\tThank You!^^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");	
		}	
	}

	else if (roomcode=='F')
	{
		price=(GST*SUITE*day)+(SUITE*day);
		printf("\n\n\t\t*** Your total price is RM %.2f ***", price);
		printf("\n\n\n\tDo you want to add any request? Press Y (YES): ");
		scanf("%s",&yon);
		
		if (yon=='Y'||yon=='y')
		{
			printf("\n\n\t\tPlease choose the requests below:");
			printf("\n\n\t\t  -----------------------------");
			printf("\n\t\t  |        Request code       |");
			printf("\n\t\t  -----------------------------");
			printf("\n\t\t  | (a) More bed sheets       |");
			printf("\n\t\t  | (b) More pillows          |");
			printf("\n\t\t  | (c) More towels           |");
			printf("\n\t\t  | (d) More toilet tissues   |");
			printf("\n\t\t  | (e) More soaps            |");
			printf("\n\t\t  | (f) More cups             |");
			printf("\n\t\t  | (g) More blankets         |");
			printf("\n\t\t  -----------------------------");
			printf("\n\n\t\t* All requests are free of charge *\n\n");
			
			do
			{
				printf("\n\tState your request code here: ");
				scanf("%s", &rc);
			}
			while (rc!='a'&&rc!='b'&&rc!='c'&&rc!='d'&&rc!='e'&&rc!='f'&&rc!='g');
	
			do
			{
				printf("\n\tState your amount: ");
				scanf("%d",&amount);
			}
			while (amount<=0);
			
			printf("\n\n\tYour request will be processed soon! Have a nice day ^_^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		}
		
		else
		{
			printf("\n\n\t\t\t\tThank You!^^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");	
		}	
	}
	
	else if (roomcode=='G')
	{
		price=(GST*PRM_SUITE*day)+(PRM_SUITE*day);
		printf("\n\n\t\t*** Your total price is RM %.2f ***", price);
		printf("\n\n\n\tDo you want to add any request? Press Y (YES): ");
		scanf("%s",&yon);
		
		if (yon=='Y'||yon=='y')
		{
			printf("\n\n\t\tPlease choose the requests below:");
			printf("\n\n\t\t  -----------------------------");
			printf("\n\t\t  |        Request code       |");
			printf("\n\t\t  -----------------------------");
			printf("\n\t\t  | (a) More bed sheets       |");
			printf("\n\t\t  | (b) More pillows          |");
			printf("\n\t\t  | (c) More towels           |");
			printf("\n\t\t  | (d) More toilet tissues   |");
			printf("\n\t\t  | (e) More soaps            |");
			printf("\n\t\t  | (f) More cups             |");
			printf("\n\t\t  | (g) More blankets         |");
			printf("\n\t\t  -----------------------------");
			printf("\n\n\t\t* All requests are free of charge *\n\n");
			
			do
			{
				printf("\n\tState your request code here: ");
				scanf("%s", &rc);
			}
			while (rc!='a'&&rc!='b'&&rc!='c'&&rc!='d'&&rc!='e'&&rc!='f'&&rc!='g');
	
			do
			{
				printf("\n\tState your amount: ");
				scanf("%d",&amount);
			}while (amount<=0);
			
			printf("\n\n\tYour request will be processed soon! Have a nice day ^_^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		}
		
		else
		{
			printf("\n\n\t\t\t\tThank You!^^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");	
		}	
	}
}

void roomservice()
{
	char sc, hc, gender;
	
	printf("\n\t\t        _._._                       _._._");
    printf("\n\t\t       _|   |_                     _|   |_");
    printf("\n\t\t       | ... |_._._._._._._._._._._| ... |");
    printf("\n\t\t       | ||| |  o TRANSYLVANIA o   | ||| |");
    printf("\n\t\t       1 --- 1  ---    ---    ---  1 --- 1");
    printf("\n\t\t  ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|");
    printf("\n\t\t (())) |     |---------------------|     |");
    printf("\n\t\t(())())1 --- 1  ---    ---    ---  1 --- 1");
    printf("\n\t\t(()))()1     1  :::   _____   :::  1     1");
    printf("\n\t\t()))(()|     | |~|~|  |_|_|  |~|~| |     |");
    printf("\n\t\t   ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|");
    printf("\n\t\t~ ~^^ @@@@@@@@@@@@@@/=======\@@@@@@@@@@@@@@");
    printf("\n\t\t      ^~^~                              ~^~^");
	printf("\n\n\t\t    -----WELCOME TO TRANSYLVANIA HOTEL-----");
	
	printf("\n\n\n\n\t\t\tPlease choose the services below:");
	printf("\n\n\t\t\t-----------------------------");
	printf("\n\t\t\t|     Room Service Code     |");
	printf("\n\t\t\t-----------------------------");
	printf("\n\t\t\t|  (A) Housekeeping         |");
	printf("\n\t\t\t|  (B) Food Delivery        |");
	printf("\n\t\t\t|  (C) TV Channel           |");
	printf("\n\t\t\t-----------------------------");
	printf("\n\n\t\t\t* All prices are excluding GST *");
	
	do
	{
		printf("\n\n\n\tPlease enter the room service code (A/B/C): ");
		scanf("%s", &sc);
	}
	while (sc!='A'&&sc!='B'&&sc!='C');
	
	system("cls");
	
	if (sc=='A')
	{
		do
		{
			printf("\n\n\n\tDo you want a male or female housekeeper? (M/F): ");
			scanf("%s",&gender);
		}
		while (gender!='M'&&gender!='F');
		
           
			printf("\n\n\n\tPlease choose the type of housekeeping work below:");
			printf("\n\n\t\t-----------------------------------");
			printf("\n\t\t|        Type of housekeeping       |");
			printf("\n\t\t-------------------------------------");
			printf("\n\t\t|  (a) Making beds                  |");
			printf("\n\t\t|  (b) Cleaning and tidying room    |");
			printf("\n\t\t|  (c) Cleaning toilet              |");
			printf("\n\t\t-------------------------------------");
		
			do
			{
				printf("\n\n\n\tState your housekeeping code here (a/b/c): ");
				scanf("%s", &hc);
			}
			while (hc!='a'&&hc!='b'&&hc!='c');	
			
			printf("\n\n\n\tYour request will be processed soon. Have a nice day! ^_^\n");
			printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		}
	
	
	else if (sc=='B')
	{
		const float FR = 12;
		const float CR = 15;
		const float CC = 16;
		const float LC = 17;
		
		char food, pc;
		float amount;
		
		do
		{
			printf("\n\n\n\tWhat type of food do you prefer? Eastern or Western? (E/W): ");
			scanf("%s",&food);
		}
		while (food!='E'&&food!='W');
		
		if (food=='E')
		{
			printf("\n\n\n\tPlease choose one of the packages below:");
			printf("\n\n\t---------------------------------------------------------------");
			printf("\n\t|             Packages              |        Price (RM)       |");
			printf("\n\t---------------------------------------------------------------");
			printf("\n\t|  (a) Fried Rice + Iced Nescafe    |         12.00           |");
			printf("\n\t|  (b) Chicken Rice + Iced Milo     |         15.00           |");
			printf("\n\t---------------------------------------------------------------");
			
			do
			{
				printf("\n\n\n\tState your package code here (a/b): ");
				scanf("%s", &pc);
			}
			while (pc!='a'&&pc!='b');
			
			do
			{
				printf("\n\n\tState your amount: ");
				scanf("%f", &amount);	
			}
			while (amount<0);
			
			if (pc=='a')
			{
				printf("\n\n\n\t\t\t** Your total price is RM %.2f **", amount*FR);
				printf("\n\n\n\tYour food will be delivered soon. Enjoy your meal. Thank you! ^_^\n");
				printf("\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
			}
			
			else if (pc=='b')
			{
				printf("\n\n\n\t\t\t** Your total price is RM %.2f **", amount*CR);
				printf("\n\n\n\tYour food will be delivered soon. Enjoy your meal. Thank you! ^_^\n");
				printf("\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
			}		
		}
	
		else if (food=='W')
		{
			printf("\n\n\n\tPlease choose one of the packages below:");
			printf("\n\n\t-------------------------------------------------------------");
			printf("\n\t|             Packages              |        Price (RM)       |");
			printf("\n\t---------------------------------------------------------------");
			printf("\n\t|  (c) Chicken Chop + Orange Juice  |         16.00           |");
			printf("\n\t|  (d) Lamb Chop + Apple Juice      |         17.00           |");
			printf("\n\t---------------------------------------------------------------");
			
			do
			{
				printf("\n\n\n\tState your package code here (c/d): ");
				scanf("%s", &pc);
			}
			while (pc!='c'&&pc!='d');
			
			do
			{
				printf("\n\n\tState your amount: ");
				scanf("%f", &amount);	
			}
			while (amount<0);
		
			if (pc=='c')
			{
				printf("\n\n\n\t\t\t** Your total price is RM %.2f **", amount*CC);
				printf("\n\n\n\tYour food will be delivered soon. Enjoy your meal. Thank you! ^_^\n");
				printf("\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
			}
			
			else if (pc=='d')
			{
				printf("\n\n\n\t\t\t** Your total price is RM %.2f **", amount*LC);
				printf("\n\n\n\tYour food will be delivered soon. Enjoy your meal. Thank you! ^_^\n");
				printf("\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
			}
		}
	}
	
	else if (sc=='C')
	{
		char gc, mc;
		
		printf("\n\n\n\t\t\tPlease choose movie genre below:");
		printf("\n\n\t\t\t---------------------------");
		printf("\n\t\t\t|         Genre           |");
		printf("\n\t\t\t---------------------------");
		printf("\n\t\t\t|    (A) Family           |");
		printf("\n\t\t\t|    (B) Horror           |");
		printf("\n\t\t\t|    (C) Action           |");
		printf("\n\t\t\t|    (B) Romance          |");
		printf("\n\t\t\t---------------------------");
		
		do
		{
			printf("\n\n\n\tState your genre code here (A/B/C/D): ");
			scanf("%s", &gc);
		}
		while (gc!='A'&&gc!='B'&&gc!='C'&&gc!='D');
		
		system("cls");
		
		switch (gc)
		{
			case 'A':
				printf("\n\n\n\tPlease choose movie you wished to watch below:");
				printf("\n\n\n\n\t\t\t----------------------------------");
				printf("\n\t\t\t|       Malay Movies             |");
				printf("\n\t\t\t----------------------------------");
				printf("\n\t\t\t|  (a) Cicak Man 3               |");
				printf("\n\t\t\t|  (b) Suamiku Encik Perfect 10  |");
				printf("\n\t\t\t|  (c) Adnan Sempit Sawadikap    |");
				printf("\n\t\t\t----------------------------------");
				printf("\n\n\n\t--------------------------------------------------------------------");
				printf("\n\t|                      English Movies                              |");
				printf("\n\t--------------------------------------------------------------------");
				printf("\n\t|  (d) Alvin and the Chipmunks: The Road Chip                      |");
				printf("\n\t|  (e) Alexander and the Terrible, Horrible, No Good, Very Bad Day |");
				printf("\n\t|  (f) Pan                                                         |");
				printf("\n\t--------------------------------------------------------------------");
			
				do
				{
					printf("\n\n\n\tState your movie code here (a/b/c/d/e/f): ");
					scanf("%s", &mc);
				}
				while (mc!='a'&&mc!='b'&&mc!='c'&&mc!='d'&&mc!='e'&&mc!='f');
				
				printf("\n\n\tYour request will be processed soon. Enjoy your movie. Thank you! ^_^\n");
				printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
				break;
				
			case 'B':
				printf("\n\n\n\tPlease choose movie you wished to watch below:");
				printf("\n\n\n\n\t\t--------------------------------------");
				printf("\n\t\t|           Malay Movies             |");
				printf("\n\t\t--------------------------------------");
				printf("\n\t\t|  (a) Puaka Balai Gombak            |");
				printf("\n\t\t|  (b) Rumah Pusaka Di Simpang Jalan |");
				printf("\n\t\t|  (c) Bangunan                      |");
				printf("\n\t\t--------------------------------------");
				printf("\n\n\n\t\t--------------------------------------");
				printf("\n\t\t|          English Movies            |");
				printf("\n\t\t--------------------------------------");
				printf("\n\t\t|  (d) Sinister 2                    |");
				printf("\n\t\t|  (e) Indisious Chapter 3           |");
				printf("\n\t\t|  (f) Crimson Peak                  |");
				printf("\n\t\t--------------------------------------");
			
				do
				{
					printf("\n\n\n\tState your movie code here (a/b/c/d/e/f): ");
					scanf("%s", &mc);
				}
				while (mc!='a'&&mc!='b'&&mc!='c'&&mc!='d'&&mc!='e'&&mc!='f');
				
				printf("\n\n\tYour request will be processed soon. Enjoy your movie. Thank you! ^_^\n");
				printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
				break;
				
			case 'C':
				printf("\n\n\n\tPlease choose movie you wished to watch below:");
				printf("\n\n\n\n\t\t------------------------------------------------");
				printf("\n\t\t|                Malay Movies                  |");
				printf("\n\t\t------------------------------------------------");
				printf("\n\t\t|  (a) Kepong Gangster 2                       |");
				printf("\n\t\t|  (b) Polis Evo                               |");
				printf("\n\t\t|  (c) Juvana 2 - Terperangkap Dalam Kebebasan |");
				printf("\n\t\t------------------------------------------------");
				printf("\n\n\n\t\t------------------------------------------------");
				printf("\n\t\t|               English Movies                 |");
				printf("\n\t\t------------------------------------------------");
				printf("\n\t\t|  (d) The Hunger Games: Mockingjay (Part 2)   |");
				printf("\n\t\t|  (e) Maze Runner: The Scorch Trials          |");
				printf("\n\t\t|  (f) Hitman: Agent 47                        |");
				printf("\n\t\t------------------------------------------------");
			
				do
				{
					printf("\n\n\n\tState your movie code here (a/b/c/d/e/f): ");
					scanf("%s", &mc);
				}
				while (mc!='a'&&mc!='b'&&mc!='c'&&mc!='d'&&mc!='e'&&mc!='f');
				
				printf("\n\n\tYour request will be processed soon. Enjoy your movie. Thank you! ^_^\n");
				printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
				break;
			
			case 'D':
				printf("\n\n\n\tPlease choose movie you wished to watch below:");
				printf("\n\n\n\n\t\t-------------------------------------");
				printf("\n\t\t|         Malay Movies              |");
				printf("\n\t\t-------------------------------------");
				printf("\n\t\t|  (a) Suamiku Jatuh dari Langit    |");
				printf("\n\t\t|  (b) Girlfriend Kontrak           |");
				printf("\n\t\t|  (c) Isteri untuk Dijual          |");
				printf("\n\t\t-------------------------------------");
				printf("\n\n\n\t\t-------------------------------------");
				printf("\n\t\t|          English Movies           |");
				printf("\n\t\t-------------------------------------");
				printf("\n\t\t|  (d) The DUFF                     |");
				printf("\n\t\t|  (e) About Time                   |");
				printf("\n\t\t|  (f) Love, Rosie                  |");
				printf("\n\t\t-------------------------------------");
			
				do
				{
					printf("\n\n\n\tState your movie code here (a/b/c/d/e/f): ");
					scanf("%s", &mc);
				}
				while (mc!='a'&&mc!='b'&&mc!='c'&&mc!='d'&&mc!='e'&&mc!='f');
				
				printf("\n\n\tYour request will be processed soon. Enjoy your movie. Thank you! ^_^\n");
				printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
				break;
				
			default:
				break;		
		}	
	}
}

void transport()
{
	int num_people;
	float date;
	char transport, place, parking, gender, driver, confirmation;
	
	printf("\n\t\t        _._._                       _._._");
    printf("\n\t\t       _|   |_                     _|   |_");
    printf("\n\t\t       | ... |_._._._._._._._._._._| ... |");
    printf("\n\t\t       | ||| |  o TRANSYLVANIA o   | ||| |");
    printf("\n\t\t       1 --- 1  ---    ---    ---  1 --- 1");
    printf("\n\t\t  ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|");
    printf("\n\t\t (())) |     |---------------------|     |");
    printf("\n\t\t(())())1 --- 1  ---    ---    ---  1 --- 1");
    printf("\n\t\t(()))()1     1  :::   _____   :::  1     1");
    printf("\n\t\t()))(()|     | |~|~|  |_|_|  |~|~| |     |");
    printf("\n\t\t   ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|");
    printf("\n\t\t~ ~^^ @@@@@@@@@@@@@@/=======\@@@@@@@@@@@@@@");
    printf("\n\t\t      ^~^~                              ~^~^");
	printf("\n\n\t\t    ----- WELCOME TO TRANSYLVANIA HOTEL -----");

	do
	{
		printf("\n\n\n\n\tPlease enter the date: ");
		scanf("%f", &date);
	}
	while(date<=0);
	
	do
	{
		printf("\n\n\tPlease enter the number of people: ");
		scanf("%d", &num_people);
	}
	while(num_people<=0);
	
	system("cls");
	
	printf("\n\n\n\t\t+-------------------+------+\n");
	printf("\t\t| Type of transport | Code |\n");
	printf("\t\t+-------------------+------+\n");
	printf("\t\t|        Car        |  A   |\n");
	printf("\t\t|        Van        |  B   |\n");
	printf("\t\t|        Bus        |  C   |\n");
	printf("\t\t|     Limousine     |  D   |\n");
	printf("\t\t|      Bicycle      |  E   |\n");
	printf("\t\t+-------------------+------+\n");
	
	do
	{
		printf("\n\n\tPlease enter the code of transport: ");
		scanf("%s", &transport);
	}
	while(transport!='A'&&transport!='B'&&transport!='C'&&transport!='D'&&transport!='E');
	
	switch(transport)
	{
		case 'A':	
			printf("\n\n\t\t\tYou have chosen car.\n");
			break;
			
		case 'B':
			printf("\n\n\t\t\tYou have chosen van.\n");
			break;

		case 'C':
			printf("\n\n\t\t\tYou have chosen bus.\n");
			break;
		
		case 'D':
			printf("\n\n\t\t\tYou have chosen limousine.\n");
			break;

		case 'E':
			printf("\n\n\t\t\tYou have chosen bicycle.\n");
			break;

		default:
			break;	
	}

	printf("\n\n\tDo you need any driver? Press Y (YES) / N (NO): ");
	scanf("%s", &driver);
	
	if (driver=='Y')
	{
		do
		{
			printf("\n\n\tEnter the gender of driver. Press M for Male / F for Female: ");
			scanf("%s", &gender);
		}
		while(gender!='M'&&gender!='F');
	}
			
	printf("\n\n\n\t\t+---------------+------+\n");
	printf("\t\t| Destination   | Code |\n");
	printf("\t\t+---------------+-----+\n");
	printf("\t\t|     Beach     |  A   |\n");
	printf("\t\t|   Theme Park  |  B   |\n");
	printf("\t\t|   Water Park  |  C   |\n");
	printf("\t\t| Shopping Mall |  D   |\n");
	printf("\t\t|      Zoo      |  E   |\n");
	printf("\t\t+---------------+------+\n");
	
	do
	{
		printf("\n\n\tPlease enter the code of place: ");
		scanf("%s", &place);
	}
	while (place!='A'&&place!='B'&&place!='C'&&place!='D'&&place!='E');
		
	switch(place)
	{
		case 'A':
			printf("\n\n\t\t\tYou have chosen the beach.");
			break;
	
		case 'B':
			printf("\n\n\t\t\tYou have chosen the theme park.");
			break;
	
		case 'C':
			printf("\n\n\t\t\tYou have chosen the water park.");
			break;
		
		case 'D':
			printf("\n\n\t\t\tYou have chosen the shopping mall.");
			break;
		
		case 'E':
			printf("\n\n\t\t\tYou have chosen the zoo.");
			break;
		
		default:
			break;
	}
	
	printf("\n\n\n\t\t+-----------------+------+\n");
	printf("\t\t| Parking Slots   | Code |\n");
	printf("\t\t+-----------------+------+\n");
	printf("\t\t|     VIP         |  A   |\n");
	printf("\t\t|     Normal      |  B   |\n");
	printf("\t\t|     OKU         |  C   |\n");
	printf("\t\t+-----------------+------+\n");
	
	do
	{
		printf("\n\n\tPlease enter the code of parking: ");
		scanf("%s", &parking);
	}	
	while (parking!='A'&&parking!='B'&&parking!='C');
		
	switch(parking)
	{
		case 'A':
			printf("\n\n\t\t\tYou have chosen the special parking.");
			break;
		
		case 'B':
			printf("\n\n\t\t\tYou have chosen the normal parking.");
			break;
		
		case 'C':
			printf("\n\n\t\t\tYou have chosen the OKU parking.");
			break;
		
		default:
			break;
	}
	
	do
	{
		printf("\n\n\n\tConfirm with your booking? Press Y (YES) / N (NO): ");
		scanf("%s", &confirmation);
	}	
	while (confirmation!='Y'&&confirmation!='N');
	
	printf("\n\n\t\t\tThank you for using our system ^_^\n\n");
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
}
	
void hallreserve()
{
	const float tax=1.16;
	float total_price, cid;
	int nod;
	char event, venue, pas, cat, preq, cres, ytsbg;
	
	printf("\n\t\t        _._._                       _._._");
    printf("\n\t\t       _|   |_                     _|   |_");
    printf("\n\t\t       | ... |_._._._._._._._._._._| ... |");
    printf("\n\t\t       | ||| |  o TRANSYLVANIA o   | ||| |");
    printf("\n\t\t       1 --- 1  ---    ---    ---  1 --- 1");
    printf("\n\t\t  ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|");
    printf("\n\t\t (())) |     |---------------------|     |");
    printf("\n\t\t(())())1 --- 1  ---    ---    ---  1 --- 1");
    printf("\n\t\t(()))()1     1  :::   _____   :::  1     1");
    printf("\n\t\t()))(()|     | |~|~|  |_|_|  |~|~| |     |");
    printf("\n\t\t   ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|");
    printf("\n\t\t~ ~^^ @@@@@@@@@@@@@@/=======\@@@@@@@@@@@@@@");
    printf("\n\t\t      ^~^~                              ~^~^");
	printf("\n\n\t\t    -----WELCOME TO TRANSYLVANIA HOTEL-----");
	
	printf("\n\n\t\t Event Venue Reservation");
	printf("\n\t+--------------------------+-------------+------------------+");
	printf("\n\t|                          |             |        Price     |");
	printf("\n\t|          Venue           |   Capacity  +------------------+");
	printf("\n\t|                          |             |  1 Day | 1/2 Day |");
	printf("\n\t+--------------------------+-------------+--------+---------+");
	printf("\n\t|  A. Ballroom             |      700    |  2000  |   1050  |");
	printf("\n\t|  B. Auditorium (L)       |      500    |  1500  |   800   |");
	printf("\n\t|  C. Auditorium (S)       |       50    |   500  |   300   |");
	printf("\n\t|  D. Board Room           |       26    |   300  |   160   |");
	printf("\n\t+--------------------------+-------------+--------+---------+");
	
	do
    {
		printf("\n\tPlease enter your reservation date : ddmmyyyy\n\t");
		scanf("%f", &cid);
	}
    while(cid<00002016);
    	printf("Sorry we don't own time machine.");
    
    do
    {
		printf("\n\tWhat kind of ceremony do you want to handle?\n\n\t");
		printf("\tA. Wedding / Birthday\n\t");
		printf("\tB. Talk / Singing\n\t");
		printf("\tC. Meeting\n\t");
		printf("\tD. I need a supervisor, please.\n\t");
		printf("\tE. I need an event manager, please.\n\t");
		scanf("%c", &event);
	
		if(event=='D')
		{
			printf("\n\t\t Supervisor Amelia - 012-5678901");
			printf("\n\t\t Supervisor Joshua - 013-9678401\n");
		}
		
		else if(event=='E')
		{
			printf("\n\t\t Event Manager Nailah - 019-5648908");
			printf("\n\t\t Event Manager Farruq - 013-3647408\n");
		}
	}
    while(event!='A'&&event!='B'&&event!='C'&&event!='D'&&event!='E');
    
    do
    {
		printf("\n\tWhich venue you want to reserve? (A/B/C/D)\n\n\t");
		printf("\tA. Ballroom\n\t");
		printf("\tB. Auditorium (L)\n\t");
		printf("\tC. Auditorium (S)\n\t");
		printf("\tD. Board Room \n\t");
	    scanf("%c", &venue);
	    printf("For how long?\n Full day(f) or Half day(h) ?");
	}
    while(venue!='A'&&venue!='B'&&venue!='C'&&venue!='D');
    
    do
	{
		printf("\n\tDo you need PA system?\n\n\t");
		printf("\tA. Yes\n\t");
		printf("\tB. No\n\t");
		scanf("%c", &pas);
    }
    while(pas!='A'&&pas!='B');
    
    do
    {
		printf("\n\tDo you need caterer?\n\n\t");
		printf("\tA. Yes\n\t");
		printf("\tB. No\n\t");
		scanf("%c", &cat);
	
		if(cat=='A')
		{
			printf("Sarah Catering - 019-6574392\n Best Ct Catering - 012-6031045\n Kuzi Catering - 011-56432874\n");
		}
		else
		{
			printf("Outside food are not allowed in our premise.");
		}
    }
    while(cat!='A'&&cat!='B');
    
    do
    {
		printf("\n\tDo you have personal request?\n\n\t");
		printf("\tA. Yes\n\t");
		printf("\tB. No\n\t");
		scanf("%c", &preq);
    }
	while(preq!='A'&&preq!='B');
	
	do
	{
		printf("\n\tConfirm Reservation?\n\n\t");
		printf("\tA. Yes\n\t");
		printf("\tB. No\n\t");
		scanf("%c", &cres);
	
		if(cres=='A')
		{
			printf("\n\tPayment Summary.\n\n\t");
			total_price=ytsbg;
		}
	}while(cres!='A'&&cres!='B');

}
	
void checkout()
{
	int count=0, member_code, room_num, a=10023;
	float total_bill, pay=567.3;
	char name[20], c, b, member,payment;
		
	printf("\n\t\t        _._._                       _._._");
	printf("\n\t\t       _|   |_                     _|   |_");
	printf("\n\t\t       | ... |_._._._._._._._._._._| ... |");
    printf("\n\t\t       | ||| |  o TRANSYLVANIA o   | ||| |");
    printf("\n\t\t       1 --- 1  ---    ---    ---  1 --- 1");
    printf("\n\t\t  ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|");
    printf("\n\t\t (())) |     |---------------------|     |");
    printf("\n\t\t(())())1 --- 1  ---    ---    ---  1 --- 1");
    printf("\n\t\t(()))()1     1  :::   _____   :::  1     1");
    printf("\n\t\t()))(()|     | |~|~|  |_|_|  |~|~| |     |");
    printf("\n\t\t   ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|");
    printf("\n\t\t~ ~^^ @@@@@@@@@@@@@@/=======\@@@@@@@@@@@@@@");
    printf("\n\t\t      ^~^~                              ~^~^");
	printf("\n\n\t\t    -----WELCOME TO TRANSYLVANIA HOTEL-----");
	
	printf("\t\t>>>>>>>>>>>>WELCOME TO HOTEL TRINSVANIA N3<<<<<<<<<<<\n");
	printf(" \t\t\t\tPutrjaya Kuala Lumpur  \n");
	printf(" \t\t\t      contact number -0148157414\n");
	time_t mytime;
	mytime = time(NULL);
	printf(ctime(&mytime));
	printf("\n\t Enter Your Name:\t ");
	gets(name);
	printf("\n\t Enter Your room number:\t");
	scanf(" %d",&room_num);
	printf("\n\t\t\tAre you sure you want to checkout ?\n\t\t\t\t\t");
	scanf(" %c",&c);
	
	if(c=='Y'||c=='y')
	{
		printf("\n\t\t\tDo you want to generate bill ? Press Y (YES) / N (NO): ");
		scanf(" %c",&payment);
		
		if(payment=='Y'||payment=='y')
		{
			printf("\n");
		}
		
		else
		{
			printf("\n\n\n\t\t\t>>hit any button to go to the main menu<<");
		}
	}
	
	else
	{
		printf("\n\n\n\t\t\t>>hit any button to go to the main menu<<");
	}

	printf("\n\t\t\tAre you a member ?(Y|N) :\t");
	scanf(" %c",&member);
	
	if(member=='y'||member=='Y')
	{
		do
		{
			printf("\n\t\t Enter your membership card number >>\t");
			scanf(" %d",&member_code);
    			if (member_code>a)
					printf(" you will get 40% discount");
    			else
    				printf("\t\t\t\t INVALID!\n");
					count++;
    	}
		while(member_code<a );
		
		total_bill=pay*0.4;
	}

	else
	{
		total_bill=pay;
	}
	
	printf("\n\t\t\t Your total_bill is RM %.2f ", total_bill);
	
	printf("\n\n\n\t Print bill ....\t ");
	printf("\n\n\n\t         \n");
	bill(name,room_num, member_code,total_bill);
	printf("\n\n\t\t\tThank You Sir/Miss, Please Come Again...!");
	printf("\n\t\t\t First Come, First Serve\n ");
	printf("\n\n\t\t\t Customers Always right !");
}

void bill(char name[], int room_num, int member_code, float total_bill)
{
	system("cls");
	printf("\n\t>>>>>>>>>>>> WELCOME TO HOTEL TRANSYLVANIA <<<<<<<<<<<<<<<< \n");
	printf("\t\t\t contact number - 0148157414\n");
	time_t mytime;
	mytime = time(NULL);
	printf(ctime(&mytime));
	
	printf("\n\t Customer Name: ");
	puts(name);
	printf("\n\t Membership card number : %d \t",member_code);
	
	printf(" Room Number: %d\n",room_num);
	
	printf("\n\t Your total bill is RM %.2f\n", total_bill);
	printf("\n\t____________________________________________________________________");
}




