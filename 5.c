//WAP to accpect student information and display student's mark list//

#include <stdio.h>
    int main()
    {
        char name[50];
        int rollno;
        float m1,m2,m3,total,per;

            printf("Enter Student Name:");
            scanf("%s",name);

            printf("Enter Roll NO:");
            scanf("%d",&rollno);

            printf("Enter Marks of Subject 1:");
            scanf("%f",&m1);

            printf("Enter Marks of Subject 2:");
            scanf("%f",&m2);

            printf("Enter Marks of Subject 3:");
            scanf("%f",&m3);

        total = m1 + m2 + m3 ;
        per = total / 3 ;

            printf("Name:%s\n",name);
            printf("Roll No:%d\n",rollno);
            printf("Subject 1:%.2f\n",m1);
            printf("Subject 2:%.2f\n",m2);
            printf("Subject 3:%.2f\n",m3);
            printf("Total:%.2f\n",total);
            printf("Percentage:%.2f\n",per);
        return 0;
    }
