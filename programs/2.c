//WAP to find area and perimeter of circle,square and rectangle
# include<stdio.h>
int main(){
int s,l,b,r,ps,as,rp,ra;
float cp,ca;
printf("enter radious of circle");
scanf("%d",&r);
printf("enter side of square");
scanf("%d",&s);
printf("enter length and breadth of rectangle");
scanf("%d%d",&l,&b);
cp=3.14*r;ca=3.14*r*r;
ps=4*s;as=s*s;
rp=2*(l+b);ra=l*b;
printf("perimeater of circle=%f \n area of circle =%f\n",cp,ca);
printf("perimeater of square=%d \n area of square =%d\n",ps,as);
printf("perimeater of rectangle=%d \n area of rectangle =%d\n",rp,ra);
  return 0;
}