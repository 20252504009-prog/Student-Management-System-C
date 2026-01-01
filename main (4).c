#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int i=0;
struct studentsdetails{
        char firstname[50];
        char lastname[50];
        int studentid;
        float cpi;
        int courseid[5];
}studentdetails[55];
void addstudent()
{
        printf("\nADD STUDENT DETAILS :\n");
        printf("\nENTER THE FIRST NAME OF STUDENT:\n");
        scanf("%s",studentdetails[i].firstname);
        printf("\nENTER THE LAST NAME OF STUDENT:\n");
        scanf("%s",studentdetails[i].lastname);
        printf("\nENTER THE STUDENT ID:\n");
        scanf("%d",&studentdetails[i].studentid);
        printf("\nENTER THE CPI OF THIS STUDENT:\n");
        scanf("%f",&studentdetails[i].cpi);
        printf("ENTER THE COURSES ID");
        for(int j=0;j<5;j++)
        {
                scanf("%d",&studentdetails[i].courseid[j]);
        }

        i=i+1;
}
void findstudent()

{
        int found=0;
        int studentid;
        printf("ENTER THE ROLL NUMBER OF STUDENT YOU WANT TO FIND:");
        scanf("%d",&studentid);
        for(int j=0;j<=i;j++)
        {
                if(studentid==studentdetails[j].studentid)
                {
                        printf("THE STUDENT DETAILS ARE AS FOLLOWS:\n");
                        printf("FIRST NAME IS %s\nLAST NAME IS %s\nSTUDENT ID IS IS %d\nCPI IS %f\n",studentdetails[j].firstname,studentdetails[j].lastname,studentdetails[j].studentid,studentdetails[j].cpi);
                        printf("COURSE ID :");
                        for(int k=0;k<5;k++)
                        {
                                printf("%d",studentdetails[j].courseid[k]);
                        }
                        printf("\n");

                        found=1;
                        break;
        }}
                if(found==0)
                {
                        printf("STUDENT ID NOT FOUND");
                }


}
void totalstudents()
{
        printf("TOTAL NUMBER OF STUDENTS =%d\n",i);
        printf("YOU CAN HAVE %d STUDENTS MORE\n",50-i);
}
void deletestudent()
{
        int found=0;
        int studentid;
        printf("ENTER THE STUDENT ID OF STUDENT TO BE DELETED");
        scanf("%d",&studentid);
        for(int j=0;j<i;j++)
        {
                if(studentid==studentdetails[j].studentid)
               {
                        for(int k=j;k<i-1;k++)
                        {
                                studentdetails[k]=studentdetails[k+1];
                        }
                        i--;
                        found=1;
                        printf("STUDENT RECORD DELETED\n");
                        break;
                }
        }
        if(found==0)
        {
                printf("ENTERED STUDENT ID DOESN'T EXIST");
        }
}
int main()
{

        int choice;
        do{
        printf("ENTER YOUR CHOICE\n");
        printf("1.ADD A STUDENT IN SYSTEM\n2.VIEW A STUDENT RECORD IN  SYTEM\n3.FIND TOTAL STUDENT\n4.DELETE A STUDENT FROM SYSTEM\n5.EXIT THE SYTEM\n" );
        scanf("%d",&choice);

        if(choice==1)
        {
                addstudent(); 
        }
        else if(choice==2)
        {
                findstudent();
        }
        else if(choice==3)
        {
                totalstudents();
        }
        else if(choice==4)
        {
                deletestudent();
        }
        else if(choice==5)
        {
                break;
        }
        else
        {
                printf("INVALID CHOICE BY USER");
        }}
        while(1);
return 0;
}
                        
                       