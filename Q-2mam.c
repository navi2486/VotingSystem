#include<stdio.h>
#include<conio.h>

int p1=0, p2=0, p3=0, in=0, reg[100];

void admin_fun()
{
int pass;

printf("Enter password : ");
scanf("%d",&pass);

if(pass==1234)
{
    printf("REULTS\n1.PARTY A : %d\n2.PARTY B : %d\n3.PARTY C : %d\n",p1,p2,p3);
}
else
    printf("Invalid password : ");

getch();
}

void vote_fun()
{
int r,found=0,i,vt;

    do
    {
        printf("Enter your registration number : ");
        scanf("%d",&r);

        if(r==0000)
        break;

        for(i=0;i<=in;i++)
        {
            if(r==reg[i])
            found=1;
        }

        if(found==1)
        {
            printf("You cannot vote twice.");
            getch();
        }
        else
        {
            reg[in++]=r;
            printf("Vote:\n1.PARTY A\n2.PARTY B\n3.PARTY C\n");
            scanf("%d",&vt);

            switch(vt)
            {
                case 1:
                    p1++;
                    break;
                case 2:
                    p2++;
                    break;
                case 3:
                    p3++;
                    break;
                default :
                    printf("Invalid entry.");
            }
            getch();
        }
    }while(r!=0000);
}

int main()
{
int choice;

do
{
    printf("Choose one of the following : \n\t\t1.ADMIN\n\t\t2.VOTE\n\t\t3.EXIT\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            admin_fun();
            break;
        case 2:
            vote_fun();
            break;
        case 3:
            break;
        default:
            printf("Invalid choice");
    }
}while(choice!=3);
printf("Thank You!!!");
getch();
}
