#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int j,a_t[5][5],b_t[5][5];
int a[5][5],b[5][5],c[5][5],ar,ac,br,bc;
printf("\n row and col size of matrix A ");
scanf("%d %d",&ar,&ac);
printf("\n row and col size of matrix B ");
scanf("%d %d",&br,&bc);
for(int i=0;i<ar;i++){
for(j=0;j<ac;j++){
printf("Enter  elemnet a%d%d of matrix A ",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("\n");
for(i=0;i<br;i++){
for(j=0;j<bc;j++){
printf("Enter element b%d%d of matrix B ",i+1,j+1);
scanf("%d",&b[i][j]);
}
}
printf("\nMatrix A:\n");
for(i=0;i<ar;i++){ printf("\n");
for(j=0;j<ac;j++){
printf("%d\t",a[i][j]);
}
}
printf("\n");
printf("\nMatrix B\n");
for(i=0;i<br;i++){ printf("\n");
for(j=0;j<bc;j++){
printf("%d\t",b[i][j]);
}
}
int bre = 0,bre1=0;
if(ac!=br || ar!=br || ac!=bc){
bre1=1;
printf("\naddition not possible");
if(ac!=br){
bre=1;
printf("\nmultiplication not possible");
}
}
int var1;
printf("\nEnter 1 for multiplication\n2 for addition\n3 for transpose");
scanf("%d",&var1);
switch(var1)
{
case 1:
if(bre == 1){
printf("Multiplication not possible");
break;
}
for(i=0;i<ar;i++){
for(j=0;j<bc;j++){
c[i][j]=0;
for(int l=0;l<br;l++){
c[i][j]=c[i][j]+(a[i][l]*b[l][j]);
}
}
}

printf("\nResult Multiplication");
for(i=0;i<ar;i++){
printf("\n");
for(j=0;j<bc;j++){
printf("%d\t",c[i][j]);
}}
break;


case 2:
if(bre1==1){
printf("\nmxn order not same for both matrix");
break;
}

for(i=0;i<ar;i++){
for(j=0;j<ac;j++){
c[i][j]=a[i][j]+b[i][j];
}}
printf("\nAddition:\n");
for(i=0;i<ar;i++){ printf("\n");
for(j=0;j<bc;j++){
printf("%d\t",c[i][j]);
}}
break;

case 3:

for(i=0;i<ar;i++){
for(j=0;j<ac;j++){
a_t[j][i]=a[i][j];
}}

for(i=0;i<br;i++){
for(j=0;j<bc;j++){
b_t[j][i]=b[i][j];
}}

printf("\ntranspose matrix A & B\n");
for(i=0;i<ac;i++){ printf("\n");
for(j=0;j<ar;j++){
printf("%d\t",a_t[i][j]);
}}
printf("\n");
for(i=0;i<bc;i++){ printf("\n");
for(j=0;j<br;j++){
printf("%d\t",b_t[i][j]);
}}
break;

}
getch();
}