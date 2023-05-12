#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void bin_to_others(long int n)
{
    
    long int  oct=0, hex=0,deci=0, temp;
    int i=0, rem;
    

    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        deci=deci+rem*pow(2,i);
        temp=temp/10;
        i++; 
    }
    printf("\nEquivalent decimal value: %ld ",deci);
  
    
    i=1;
    temp=n;
    while (temp != 0)
    {
        rem = temp% 10;
        oct = oct+ rem*i;
        i= i* 2;
        temp = temp / 10;
    }
    printf(" \nOctal number: %lo", oct);


    i=1;
    temp=n;
    while (temp!= 0)
    {
        rem = temp % 10;
        hex = hex + rem * i;
        i = i* 2;
        temp =temp / 10;
    }
    printf("\nHexadecimal number :  %lX", hex);
}

void oct_to_others(long int oct)
{
    int rem[50],len=0,decimal=0,i=0,num,ans;
    long int temp;
    temp=oct;
    while(temp!=0)
    {
        ans=temp % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        temp = temp/10;
    }

    i=0;
    do
    {
        rem[i]=decimal%2;
        decimal=decimal/2;
        i++;
        len++;
    }
    while(decimal!=0);

    printf("\nEquivalent Binary Number : ");
    for(i=len-1; i>=0; i--)
    {
        printf("%d",rem[i]);
    }

    decimal=0,i=0;
    temp=oct;
    printf("\nEquivalent Decimal Number : ");
    while(temp!=0)
    {
        ans=temp % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        temp = temp/10;
    }
    printf(" = %d",decimal);
    len=0,decimal=0,i=0,ans=0;
    temp=oct;
    while(temp!=0)
    {
        ans=temp % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        temp = temp/10;
    }
    i=0;
    while(decimal!=0)
    {
        rem[i]=decimal%16;
        decimal=decimal/16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1; i>=0; i--)
    {
        switch(rem[i])
        {
        case 10:
            printf("A");
            break;

        case 11:
            printf("B");
            break;

        case 12:
            printf("C");
            break;

        case 13:
            printf("D");
            break;

        case 14:
            printf("E");
            break;

        case 15:
            printf("F");
            break;

        default:
            printf("%d",rem[i]);
        }

    }
}


void hex_to_others(char hex[])
{
    int i=0, len,num=0,power=0,decimal=0,rem[100];



    printf("\nEquivalent Binary Number : ");
    for(i=0; i<strlen(hex); i++)
    {
        switch (hex[i])
        {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
        case 'a':
            printf("1010");
            break;
        case 'B':
        case 'b':
            printf("1011");
            break;
        case 'C':
        case 'c':
            printf("1100");
            break;
        case 'D':
        case 'd':
            printf("1101");
            break;
        case 'E':
        case 'e':
            printf("1110");
            break;
        case 'F':
        case 'f':
            printf("1111");
            break;

        default:
            printf("\n Invalid hexa digit %c ", hex[i]);
        }
    }


    printf("\nEquivalent Decimal Number : ");
    for(i=strlen(hex)-1; i>=0; i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else

        {
            num=hex[i]-48;
        }

        decimal=decimal+num*pow(16,power);
        power++;
    }
    printf("  %d",decimal);


    num=0,power=0,decimal=0;
    for(i=strlen(hex)-1; i>=0; i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else

        {
            num=hex[i]-48;
        }

        decimal=decimal+num*pow(16,power);
        power++;
    }

    i=0, len=0;
    while(decimal!=0)
    {
        rem[i]=decimal%8;
        decimal=decimal/8;
        i++;
        len++;
    }
    printf("\nEquivalent Octal Number : ");
    for(i=len-1; i>=0; i--)
    {
        printf("%d",rem[i]);
    }

}


void dec_to_others(long int dec)
{
    int rem[50],i=0,len=0;
    long int temp;
    temp=dec;
    do
    {
        rem[i]=temp%2;

        temp=temp/2;
        i++;
        len++;
    }
    while(temp!=0);

    printf("\nEquivalent Binary Number : ");
    for(i=len-1; i>=0; i--)
    {
        printf("%d",rem[i]);
    }


    
    i=0,len=0;
    temp=dec;
    do
    {
        rem[i]=temp%8;
        temp=temp/8;
        i++;
        len++;
    }
    while(temp!=0);

    printf("\nEquivalent Octal Number : ");
    for(i=len-1; i>=0; i--)
    {
        printf("%d",rem[i]);
    }




    i=0,len=0;
    temp=dec;
    do
    {
        rem[i]=temp%16;
        temp=temp/16;
        i++;
        len++;
    }
    while(temp!=0);

    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1; i>=0; i--)
    {
        switch(rem[i])
        {
        case 10:
            printf("A");
            break;

        case 11:
            printf("B");
            break;

        case 12:
            printf("C");
            break;

        case 13:
            printf("D");
            break;

        case 14:
            printf("E");
            break;

        case 15:
            printf("F");
            break;

        default:
            printf("%d",rem[i]);
        }

    }
}







int main()
{

    int num=1,  i, ch;
    long  int copy;
    char deci[10],hex[10], oct[10], bina[10];
    printf("\n\n\t\t\t\t****************************************************\t\t\t\t\n");
	printf("\n\t\t\t\t\tWELCOME TO NUMBER CONVERSION SYSTEM\t\t\t\t\t\n");
	printf("\n\t\t\t\t****************************************************\t\t\t\t\n\n");
    do
    {
    	
        printf("\n\n1.Binary to others \n2.Octal to others \n3.Heexadecimal to others	\n4.Decimal to others \n5.Exit\n");
        printf("\nChoose the conversion:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
        {
			
		A:
           
                printf("\nEnter the Number in Binary form (0 & 1): ");
                fflush(stdin);
                gets(bina);
                fflush(stdin);
                int flag=1;

                for(i=0; i<=strlen(bina)-1; i++)
                {
                    if(isdigit((int)bina[i])==0)
                    {
                        flag=0;
                        break;
                    }
                    else
                    {
                    	flag=1;
					}
                }
                if(flag==1)
                {
                	long int bin=atoi(bina);
                	if(bin==0)
            		{
		                bin_to_others(bin);
		            }
		            else if(bin==1)
		            {
		                bin_to_others(bin);
		            }
		            else
		            {
			            copy = bin;
						int temp = 0;
	
	                	while(copy != 0)
	                	{
	                 	   temp = copy%10;
		
	                  	  if((temp==0) || (temp==1))
	                  	  {
	                        copy = copy/10;
	                        if(copy == 0)
	                        {
	                            bin_to_others(bin);
	                        }
	                        
	                   	 }
	                  	  else
	                    	{
	                      	  printf("Not a valid binary number..! \nTry again\n");
	                    	goto A;
	                    	}
						}
                	
            		}
                
               }
            else
               {
                  printf("Not a valid binary number..! \nTry again\n");
                  goto A;
            	}
             break;
        }
           
        

        case 2:
        {
        	 
		B:
                 printf("\nEnter the Octal number (0 to 7): ");
                fflush(stdin);
                gets(oct);
                fflush(stdin);
                int flag=1;

                for(i=0; i<=strlen(oct)-1; i++)
                {
                    if(isdigit((int)oct[i])==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    int octa=atoi(oct);
                    copy=octa;

            while(copy!=0)
            {
                num=copy%10;
                if(num>7)
                {
                    printf("\nNot a valid octal number..! \nTry again\n");
                    goto B;
                }
                else
                {
                    copy=copy/10;
                    i++;
                }
            }
            		oct_to_others(octa);

                    
                  
                }
                else
                {
                    printf("\nNot a valid octal number..! \nTry again\n");
                	goto B;
                }
            
            break;
            
        }
        case 3:
        {

		C:


            printf("\nEnter the Number in Hexa-Decimal form(0 to 9 and A to F): ");
            scanf("%s",&hex);

            for(i=strlen(hex)-1; i>=0; i--)
            {
                if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    goto C;
                }

            }

            hex_to_others(hex);
            break;


        }
        case 4:
        {
           
            D:
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                fflush(stdin);
                gets(deci);
                fflush(stdin);
                 int flag=1;

                for(i=0; i<=strlen(deci)-1; i++)
                {
                    if(isdigit((int)deci[i])==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    int result=atoi(deci);
                    dec_to_others(result);
                    break;
                }
                else
                {
                    printf("\nNot a valid decimal number..! \nTry again\n");
                    goto D;
                }
            
            break;

        }
        case 5:
            break;
        default :
          	printf("\n You have entered wrong choice...!\n");
        }
    }while(ch!=5);

}
