#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include<time.h>
char ch[10][130]={"Shymoli Paribahan","Ena Paribahan","Green Paribahan",
        "SaintMartin Paribahan","Sakura Paribahan","Hanif Paribahan",
        "Shohag Paribahan"};
char name[32][100]={'\0'};
char number[32][2]={'\0'};
int num1[32]={0};
int p;
void bus();
void name_number(int booking,char numstr[100]);
void booking();
int read_number(int p);
void read_name(int p);
void status();
void status_1(int p);
void cancel();

int main()

{
    system("COLOR 0B");
    char str[100]="### WELCOME TO BUS TICKET RESERVATION SYSTEM ###";
    int a,i = 0;

    printf("\n\n\n\n");
    printf("\t\t\t\t");

    while (str[i] != '\0')
    {
     usleep(100000);
        printf("%c", str[i]);
        i++;

    }
    delay(1);
    system("cls");
    loadingBar(100000);
    system("cls");
    system("COLOR 07");
    printf("\n\n\n\t=========================================== LOGIN FORM ===========================================\n\n");
    printf("\t\t\t(1)Login As Customer \n\n");


    printf("\t\t\t(2)Login As Manager \n\n");

    printf("\t\t\t(3)Exit\n\n");
    printf("\t\t\tSelect any one to continue: ");
    scanf("%d",&a);

    if(a==1){
    system("cls");
    loadingBar(10000);
    system("COLOR 07");
    selection();
    }

    if(a==2){
    system("cls");
    loadingBar(10000);
    login();
    manager();
    }
    else{
    system("cls");
    loadingBar(100);
    system("CLS");

    printf("\n\n\n\n\n\n\n\t----------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tThank You For Using This System\t\t\t\t\t\t\n");
    printf("\t----------------------------------------------------------------------------------------------------------\n");
    getch();
    return 0;
}
    }

void bus()
{   int a;
system("COLOR 06");
    system("cls");
    printf("\n\n\n");
    printf("=========================================== BUS RESERVATION SYSTEM ============================================\n\n\n");
    printf("\t\t\t\t\t[1]  =>  %s\n",ch[0]);
    printf("\n");
    printf("\t\t\t\t\t[2]  =>  %s\n",ch[1]);
    printf("\n");
	printf("\t\t\t\t\t[3]  =>  %s\n",ch[2]);
    printf("\n");
	printf("\t\t\t\t\t[4]  =>  %s\n",ch[3]);
    printf("\n");
	printf("\t\t\t\t\t[5]  =>  %s\n",ch[4]);
	printf("\n");
	printf("\t\t\t\t\t[6]  =>  %s\n",ch[5]);
	printf("\n");
	printf("\t\t\t\t\t[7]  =>  %s\n",ch[6]);
	printf("\n");

    getch();




}

void booking()
{

    int i=0;
    char numstr[100];
system("cls");
printf("=========================================== BUS RESERVATION SYSTEM ============================================\n\n\n");//for entering train number
bus();
printf("Enter the Bus number:--->");
scanf("%d",&p);
system("cls");
printf("=========================================== BUS RESERVATION SYSTEM ============================================\n\n\n");//for selecting coach
printf("Your Bus Number is %d ********** %s",p,ch[p-1]);
status_1(p);
 FILE *f1, *fopen();
 char str1[80]="32",str2[4],str3[4];
 int seat1,seat2,booking=0;
if(p == 1)
{
 f1 = fopen("tr1.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}else if(p == 2)
{
 f1 = fopen("tr2.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}else if(p == 3)
{
 f1 = fopen("tr3.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
else if(p == 4)
{
 f1 = fopen("tr4.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
else if(p == 5)
{
 f1 = fopen("tr5.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
seat1=atoi(str1);
if(seat1 <= 0)
{
 printf("There is no blank seat in this bus ");
}else
{
printf("\n\n\n\t\t\t\tAvailable Seats:------>%d\n",seat1);
printf("\n\t\t\t\tNumber of Tickets:----->");
scanf("%d",&booking);
printf("\n");

seat1=seat1-booking;
itoa(p,numstr,10);
name_number(booking,numstr);
printf("\n\t\t\t\tThe Total booking amount is %d",200*booking);
itoa(seat1, str1, 10);

if(p == 1)
{
 f1 = fopen("tr1.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
else if(p == 2)
{
 f1 = fopen("tr2.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(p == 3)
{
 f1 = fopen("tr3.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(p == 4)
{
 f1 = fopen("tr4.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(p == 5)
{
 f1 = fopen("tr5.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
}
}



void name_number(int booking,char numstr[100])
{
char tempstr[100],tempstr1[12]="status",tempstr2[12]="number";
int number;
    FILE *a,*b;
    int i=0;
   strcat(numstr,".txt");
   strcat(tempstr1,numstr);
   strcat(tempstr2,numstr);
   a = fopen(tempstr1,"a");
   b = fopen(tempstr2,"a");
for(i=0; i<booking; i++)
{
    printf("============================Enter the details for ticket no %d============================\n\n\n",i+1);
      printf("\t\t\t\tEnter the seat number:--->");
      scanf("%d",&number);
      printf("\t\t\t\tEnter the name of person:--->");
      scanf("%s",name[number-1]);
    printf("\n======================================================================================================\n\n");
    printf("\n");
      itoa(number, tempstr, 10);
      fprintf(a,"%s ",name[number-1]);
      fprintf(b,"%s ",tempstr);

}
fclose(a);
fclose(b);
}



int read_number(int p)
{
char tempstr[100],tempstr2[12]="number";
FILE *a,*b;
char numstr[100];
int i=0,j=0,k;
itoa(p,numstr,10);
strcat(numstr,".txt");
strcat(tempstr2,numstr);
a = fopen(tempstr2,"a+");
   while(!feof(a))
   {
      number[i][j] = fgetc(a);

      if(number[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
      j++;
      }
   }
   k=i;
   for(i=0; i<k; i++)
   {
       num1[i] = atoi(number[i]);
   }
   fclose(a);
   return k;
}


void read_name(int p)
{
char tempstr1[12]="status";
FILE *b;
char numstr[100];
int i=0,j=0,k=0;
itoa(p,numstr,10);
strcat(numstr,".txt");
strcat(tempstr1,numstr);
b = fopen(tempstr1,"a+");
   while(!feof(b))
   {
      name[i][j] = fgetc(b);

      if(name[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
        j++;
      }

   }
   name[i][j]='\0';
   k=i;
   fclose(b);
}

void status()
{
system("cls");
printf("=========================================== BUS RESERVATION SYSTEM ============================================\n\n\n");
    int i,p,index=0,j;
    bus();
    printf("Enter the number of bus:---->");
    scanf("%d",&p);
    system("cls");
    j=read_number(p);
    read_name(p);
    printf("____________________________________________________________________________________________________________________\n");
    printf("                                      Bus.no-->%d---->%s                                                            \n",p,ch[p-1]);
    printf("____________________________________________________________________________________________________________________\n");
    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    for(i=0; i<j; i++)
    {
        strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("\t\t\t\t");
        for(j=0; j<4; j++)
            {
        printf("%d.%s\t",index+1,tempname[index+1]);
        index++;
            }
            printf("\n");
    }
    printf("Press any key to continue...");
    getch();
}

void status_1(int p)
{
    printf("Your Bus Number is %d ********** %s",p,ch[p-1]);
    system("cls");
printf("=========================================== BUS RESERVATION SYSTEM ============================================\n\n\n");
    int i,index=0,j;
    j=read_number(p);
    read_name(p);
    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    for(i=0; i<j; i++)
    {
        strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("\t\t\t\t");
        for(j=0; j<4; j++)
            {
        printf("%d.%s\t",index+1,tempname[index+1]);
        index++;
            }
            printf("\n");
}
}


void cancel()
{
 int seat_no,i,j;
 char numstr[100],tempstr2[15]="number",tempstr1[15]="status";
 bus();
 printf("Enter the bus number:---->");
 scanf("%d",&p);
 system("cls");
 loadingBar(1000);
 itoa(p,numstr,10);
 strcat(numstr,".txt");
 strcat(tempstr1,numstr);
 strcat(tempstr2,numstr);
 read_number(p);
 read_name(p);
 status_1(p);

 printf("Enter the seat number:--->");
 scanf("%d",&seat_no);
 FILE *a,*b;
 a = fopen(tempstr1,"w+");
 b = fopen(tempstr2,"w+");
 for(i=0; i<32; i++)
 {
     if(num1[i] == seat_no)
     {
         for(j=0; j<32; j++)
         {
             if(num1[j] != seat_no && num1[j] != 0)
             {
                 fprintf(b,"%d ",num1[j]);
                 fprintf(a,"%s",name[j]);
             }
             else if(num1[j] == seat_no && num1[j] != 0)
             {
                 strcpy(name[j],"Empty ");

             }
         }
     }

 }
fclose(a);
fclose(b);
printf("\n\n");
printf("======================================================================================================\n");
 printf("\t\t\t\tSeat has been canceled \t\t\t\n");
    printf("======================================================================================================\n");
    getch();
}


void login(int e){
    system("COLOR 70");
    int i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
	system("cls");

    printf("\n \t\t\t ================= ENTERING AS A MANAGER =================  ");
    printf(" \n \t\t\t                  Enter Username: ");
	scanf("%s", &uname);
	printf(" \n\t\t\t                  Enter Password: ");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';

	i=0;

		if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
	{
	printf("  \n\n\n \t \t \t \t  !!! LOGIN IS SUCCESSFULL !!! \n\n\n \n\t\t\t\t*******WELCOME TO OUR SYSTEM********");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();
	break;
	}
	else
	{
		printf("\n  \t\t\t\t    \t  SORRY !!!!  LOGIN IS UNSUCESSFULL");
		e++;

		getch();

	}
}
	while(e<=2);
	if (e>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");
}

void delay(int sec){

    int miliseconds = 1000 * sec;
    clock_t start = clock();
    while (clock() < start + miliseconds);

}

void loadingBar(int e){
    system("COLOR 0A");

    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\tLOADING\n\n");

    printf("\t\t\t\t\t");


    for (int i = 0; i < 26; i++)

        printf("%c", a);

    printf("\r");
    printf("\t\t\t\t\t");


    for (int i = 0; i < 26; i++) {

        printf("%c", b);
        usleep(e);
    }

}

void selection(){
    int a;
system("COLOR 07");
    system("cls");
    printf("\n\n\n");
   printf("====================================== WELCOME TO BUS RESERVATION SYSTEM ======================================\n\n\n");
    printf("\t\t\t\t\t(1)View Bus List\n");
    printf("\n");
    printf("\t\t\t\t\t(2)Book Tickets\n");
    printf("\n");
    printf("\t\t\t\t\t(3)cancel Booking\n");
    printf("\n");
    printf("\t\t\t\t\t(4)Bus Status Board\n");
    printf("\n");
    printf("\t\t\t\t\t(5)Exit\n\n");
    printf("===============================================================================================================\n\n");
    printf("\t\t\tEnter Your Choice:: ");
  scanf("%d",&a);
     if(a==1){
        bus();
     }
     if(a==2){
        booking();
        }

    if(a==3){
        cancel();}

    if(a==4){
        status();
    }
    if(a==5){

    system("cls");
    printf("\t----------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tThank You For Using Our System\t\t\t\t\t\t\n");
    printf("\t----------------------------------------------------------------------------------------------------------\n");


    }
    else{
        printf("Wrong input");
        system("cls");
        selection();

    }
    }


struct bus
{
    int no;
    char name[30];

};

void manager()
{
    struct bus s[300]= {{1,"Shymoli Paribahan"},{2,"Ena Paribahan"},{3,"Green Paribahan"},
        {4,"SaintMartin Paribahan"},{5,"Sakura Paribahan"},{6,"Hanif Paribahan"},
        {7,"Shohag Paribahan"}
    };


 int a, i,n=7;
 printf("\n\n\n\n\n\t\t============================Manager's Panel======================================\n\n");
    printf("\t\t\t\t\t1.Add Bus to the list.\n\n \t\t\t\t\t2.Delete Bus from the list\n\n \t\t\t\t\t3.View Bus list\n\n\t\t\t\t\t4.Exit\n");
    printf("\n\t\t\t\t\tEnter choice:");
    scanf("%d",&a);

   if(a==1)
   {

    printf("\n\n\n\t\t ==================================ADDING A BUS======================================\n\n");
    printf("\t\t\t\t\tEnter the name of the bus you want to add:");
   // fgets(s[i].name,100,stdin);
    fflush(stdin);
    gets(s[n].name);
    n++;


    for(i=0; i<n; i++)
    {
        printf("\n\t\t\t\t\t%d. %s\n\n",i+1,s[i].name);
    }
}
if(a==2){
    printf("\n\n\n\t\t==================================DELETING A BUS==================================\n\n");

    int m;
    printf("\t\t\t\t\tEnter the number of the bus you want to delete:");
    scanf("%d",&m);

    if(m>=n)
    {
        printf("\t\t\t\t\tInvalid number.please enter a number between 1-%d",n);
    }
    else
    {
        int index=0;
        for(i=0; i<n; i++)
        {
            if(s[i].no==m)
            {
                index=i;
            }
        }

        for(i=index; i<n-1; i++)
        {
            s[i]=s[i+1];
        }

        for(i=0; i<n-1; i++)
        {
            printf("\t\t\t\t\t%d. %s\n",i+1,s[i].name);
        }}

  }
  if(a==3){
    for(i=0; i<n; i++)
    {
        printf("\t\t\t\t\t%d. %s\n",i+1,s[i].name);
    }
    printf("\n\t\t\t\t\tPress any keys to continue...\n");
    getch();
   // manager();
   }
  if(a==4){
        exit(0);
  }
}


