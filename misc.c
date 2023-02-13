#include<stdio.h>
#include<windows.h>

int main(){
    //mind-bending results? 🙀

    // //1
    // int j = 35 ;
    // printf ("\n%d %d %d", j == 35, j = 50, j > 40);

    // //2
    // int x= 15 ;
    // printf("\n%d %d %d", x != 15, x = 20, x < 30 );

    // //3
    // int k = 3, h = 4 ;
    // // if (k = h)

    // //4
    // if( k <= 4){
    //     {
    //         k = h;
    //         h = k;
    //     }
    // }

    // //5
    // int i = 4, z = 12 ;
    // if (i = 5 || "matlab hi nhi" )
    // printf ( "\nDean of students affairs" ) ;
    // else
    // printf ( "\nDosa" ) ;

    //6
    // int i = 4, j = -1, k = 0, w;
    // // w = i = i + 5 && j + 1 || k + 2;
    // if (!i + !j*1) // figuring out... 🥲
    // printf("\n%d", w);

    //7
    // int i = -1, j = 1, l, k ;
    // k = i && j;
    // l = i || j;
    // printf ( "\n%d %d", !k, !l);

    // if( i == -1 && j == 1)
    // printf("yee");

    //8
    // int a,b,c,d; //.................compiler dependent!
    // printf("%d %d %d %d", a, b, c, d);
    // if( a == 1 || b == 0 )
    // printf("printed");

    // if( a == 0 || b == 1 )
    // printf("not printed");

    //9
    // int k = 65;
    // printf("%c, %c"); //random garbage value 🤦🏻

    //10
    // for(char x = 0; x <= 255; x++){
    //     printf("\n%c",x);
    //     Sleep(2);
    // }

    // char x = 0 + 56, y = 256 + 56; //iske baad idk what goes into?
    // printf("%c === %c", x, y);

    //11
    // int x = 4, y = 3, z;
    // z = --x -y;
    // printf("%d", z);

    //12
    // float x =1.1;
    // printf("%d", x == 1.1);

    //13
    // int i = 1, j = 1;
    // for( ; j; printf("%d %d ",i, j))
    // j = i++ <= 1;
    // //2 1 3 0

    //14
    // unsigned int a = 10;
    // a = ~a;
    // printf("%u", a); //you know
    // printf("%d", a); // -11

    //15
    // int a = 5, b = -5, c = 0, d;
    // // d = ++a && ++b || ++c;
    // d = b++, ++b; //.................must!
    // printf("\n%d %d %d %d", a, b, c, d);

    //16
    //shift on negative ints
    // int x = -4;
    // x = x << 2;
    // //int of 1 byte: _1\0_ | _ _ _ _ _ _ _
    // printf("%d", x);

    //17...................Ayeeeeeeeeeeeeeeeeeeeee!
    // signed int x = -23;
    // unsigned int y = 23;
    // //signed > unsigned
    // printf("%d", y < x);

    //18.........NO Error
    // switch(printf("do\n")){
    //     case 1:
    //     printf("nhi!");
    //     break;
    //     default:
    //     printf("2.3");
    // } 

    //19
    // int i = 0, j = 0;
    // while(i < 5, j < 10){ // i < 5 || j < 10
    //     i++;
    //     j++;
    //     printf("%d\n",i);
    // }
    // for(;i < 5, j < 10; i++, j++){ // i < 5 || j < 10
    //     printf("%d\n",i);
    // }
    // printf("%d,%d",i,j);


    //20
    // int i = 0;
    // char c = 'a';
    // while (i < 2){
    //     i++;
    //     switch (c) {
    //         case 'a':
    //         printf("%c ", c);
    //         break;
    //         break; //maybe break for the loop but nooooooooooooooo!
    //     }
    // }
    // printf("after loop\n");

    //21... infinite loop
    // int i = 0, j = 0;
    // while (i < 2){
    //     l1: i++;
    //     while (j < 3){
    //         printf("Loop\n");
    //         goto l1;
    //     }
    // }

    //.......................................................

    //22..Zeher 🐍
    // char a[] = { 'A', 'B', 'C', 'D' };
    // char* ppp = &a[0];
    // *ppp++; // Line 1
    // printf("%c %c ", *++ppp, --*ppp); // Line 2

    //23..
    // char *ptr = "helloworld";
    // printf("%s",ptr + 5);

    //24..
    // char c[] = "GATE2011";
    // char *p = c;
    // printf("%s", p + p[3] - p[1]);
    
    // char c[]= "COMPUTER";
    // char *p= c;
    // printf("%s", p + p[3] - p[1]);

    // //25..
    // int i,j;
    // char a[6]= "world";
    // for(i=0 , j=5 ; i<j ; a[i++] = a[j--])
    // printf("%sn", a);

    // //26
    // char p[20];
    // char *s = "string";
    // int length = strlen(s);
    // int i;
    // for(i=0; i<length; i++)
    // p[i] = s[ length - i ];
    // printf("%s", p);

    // //27
    // char *str="his";
    // int i;
    // for (i=0;i<strlen(str);i++)
    // printf("%s",str++);

}