#include <stdio.h>
#include <string.h>
int main()
{
    char CH;
    char str1[100],str2[100];
    int m,n;
    int i,j;
    printf("                                    JIIT CENTRAL LIBRARY ONLINE PORTAL\n");
    printf("                                        WELCOME TO ONLINE LIBRARY\n");
    int pass=9555,password,passwstd,enroll,k,check1,check2,tddate;
    char list_std_names[100][100],list_book_issued[100][100];
    int list_std_enroll[100],list_doi[100],list_duedate[100],list_stdpass[100];
    for (i=0;i<1000;i++)
    {
        printf("ENTER A IF YOU ARE ADMIN\nENTER S IF YOU ARE STUDENT\n");
        scanf("%c",&CH);
        if (CH=='A')
        {
            printf("WELCOME ADMIN PLEASE ENTER PASSWORD:");
            scanf("%d",&password);
            if (password==pass)
            {
                printf("ENTER 1 FOR ENTERING STUDENTS DATA\n");
                printf("ENTER 2 FINDING OUT LIST OF STUDENTS WITH DUE DATE\n");
                printf("ENTER 3 FOR CHANGING PASSWORD\n");
                scanf("%d",&check1);
                if (check1==1)
                {
                    printf("ENTER NUMBER OF ENTERIES TO BE MADE");
                    scanf("%d",&n);
                    for (i=0;i<n;i++)
                    {
                        printf("ENTER NAME OF STUDENT\n");
                        gets(str1);
                        m=strlen(str1);
                        for (j=0;j<m;j++)
                        {
                            list_std_names[i][j]=str1[j];
                        }
                        printf("ENTER ENROLLMENT NUMBER\n");
                        scanf("%d",&list_std_enroll[i]);
                        printf("ENTER STUDENT PASSWORD\n");
                        scanf("%d",&list_stdpass[i]);
                        printf("ENTER NAME OF BOOK ISSUED\n");
                        printf("ENTER DATE OF ISSUE in DDMMYYYY FORMAT");
                        scanf("%d",&list_doi[i]);
                        printf("ENTER DATE OF RETURN OF BOOK in DDMMYYY FORMAT");
                        scanf("%d",&list_duedate[i]);
                        strcpy(list_std_names[i],str1);
                        strcpy(list_book_issued[i],str2);
                    }
                }
                else if (check1==2)
                {
                    printf("ENTER TODAY DATE IN DDMMYYYY FORMAT");
                    scanf("%d",&tddate);
                    printf("STUDENTS WITH DUE DATES\n");
                    printf("NAME OF STUDENT.......DUE DATE\n");
                    for (i=0;i<n;i++)
                    {
                        if (tddate<=list_duedate[i])
                        {
                            printf("%c......%d\n",list_std_names[i],list_duedate[i]);
                        }
                    }
                }
                else if (check1==3)
                {
                    printf("ENTER NEW PASSWORD:");
                    scanf("%d",&pass);
                }
            }
        }
        else if (CH=='S')
        {
            printf("ENTER YOUR ENTROLLMENT NUMBER");
            scanf("%d",enroll);
            for (i=0;i<(sizeof(list_std_enroll)/4);i++)
            {
                if (enroll==list_std_enroll[i])
                {
                    k=i;
                }
            }
            printf("ENTER YOUR PASSWORD");
            scanf("%d",&passwstd);
            if (passwstd==list_stdpass[k])
            {
                printf("ENTER 1 TO CHECK BOOK ISSUED THEIR ISSUE DATE AND THEIR DUE DATES\n");
                printf("ENTER 2 TO CHANGE PASSWORD");
                scanf("%d",check2);
                if (check2==1)
                {
                    printf("*******STUDENT INFORMATION*******");
                    printf("NAME : %c",list_std_names[k]);
                    printf("ENROLLMENT NUMBER:%d",list_std_enroll[k]);
                    printf("BOOK ISSUED:%c",list_book_issued[k]);
                    printf("DATE OF ISSUE:%d(DDMMYYYY)",list_doi[k]);
                    printf("DUE DATE:%d(DDMMYYYY)",list_duedate[k]);
                }
                else if (check2==2)
                {
                    printf("ENTER NEW PASSWORD:");
                    scanf("%d",&passwstd);
                }
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}
