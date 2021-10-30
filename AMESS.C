#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosai=50,tea=50,vadai=200;
   int gidly,gdosai,gtea,gvadai;
   int midly,mdosai,mtea,mvadai;
   int balance,bidly,bdosai,btea,bvadai;
   //scanf("%d%d%d%d",&aidly,&adosai,&atea,&avadai);
   printf("\n******~~~~~gowtham's breakfast~~~~~~*******\n");
   printf("enter gowtham's idly:\n",gidly);
   scanf("%d",&gidly);
   printf("enter gowtham's dosai:\n",gdosai);
   scanf("%d",&gdosai);
   printf("enter gowtham's tea:\n",gtea);
   scanf("%d",&gtea);
   printf("enter gowtham's vadai:\n",gvadai);
   scanf("%d",&gvadai);
   bidly=idly-gidly;
   bdosai=dosai-gdosai;
   btea=tea-gtea;
   bvadai=vadai-gvadai;
   printf("\nbalance idly:\n%d",bidly);
   printf("\nbalance dosai:\n%d",bdosai);
   printf("\nbalance tea:\n%d",btea);
   printf("\nbalance vadai:\n%d",bvadai);
   printf("\n~~~~~~monisha's breakfast~~~~~~~~\n");
   printf("enter monisha's idly:\n",midly);
   scanf("%d",&midly);
   printf("enter monisha's dosai:\n",mdosai);
   scanf("%d",&mdosai);
   printf("enter monisha's tea:\n",mtea);
   scanf("%d",&mtea);
   printf("enter monisha's vadai:\n",mvadai);
   scanf("%d",&mvadai);
   bidly=bidly-midly;
   bdosai=bdosai-mdosai;
   btea=btea-mtea;
   bvadai=bvadai-mvadai;
   printf("\n*********after monisha ate********\n");
   printf("\nbalance idly:\n%d",bidly);
   printf("\nbalance dosai:\n%d",bdosai);
   printf("\nbalance tea:\n%d",btea);
   printf("\nbalance vadai:\n%d",bvadai);

   getch();

}


