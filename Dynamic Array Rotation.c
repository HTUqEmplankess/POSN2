#include"stdio.h"
char c,dt;
int *ptr;
int *temp;
int size,x;
int gcd(int a,int b)
{
  if(b%a==0) return b;
  return gcd(b,b%a);
}
void Expand()
{
    int j=0;
    temp=malloc(size*2*sizeof(int));
    for(j=0;j<size;j++)
     {
        temp[j]=ptr[j];
        printf("%d\n",temp[j]);
     }
     free(ptr);
     size*=2;
     ptr=temp;
} //Expand to the function to allocate new memory every malloc
void Shiftz(int k,int si)
{
   printf("\nUpdated array : ");
   for(int i=0;i<gcd(si,k);i++)
      {
        int temp=ptr[i];
        int next,j=i;
        while(1)
        {
          next=j+k;
          if(next>=si)  next=next-si;
          if(next==i)  break;
          ptr[j]=ptr[next];
          j=next;
        }
        ptr[j]=temp;
      }
   PrintfArr(si);
}
void PrintfArr(int s)
{
    for(x=0;x<s;x++)
    {
      printf("%d ",ptr[x]);
    }
}
int main()
{
  while(c!='N')
    {
       int d,n,s;
       printf("Enter size of array: ");
            scanf("%d",&n);
       printf("Enter unit to shiftz to left : ");
            scanf("%d",&d);
       size=n,x=0;
       ptr=malloc((size+1)*sizeof(int));
       printf("Enter the member of array (interger) and when you finished please input -1: \n");
       for(int i=0;i<size;i++)
       {

          scanf("%d",&ptr[i]);
          if(ptr[i]==-1) { s=i;break;}
          else if(i==(size-1))
           {
             printf("Do you want to input more data (Y/N) : ");
             scanf(" %c",&dt);
                if(dt=='Y') Expand();
                else  {ptr[i+1]=-1; s=i+1;}
           }

       }

       printf("Member of array : ");
       PrintfArr(s);
       Shiftz(d,s);

       printf("\n\tDo you want to do it again (Y/N) : ");
       scanf(" %c",&c);
            if(c!='N') printf("\n\n\n");
    }

free(ptr);
return 0;
}





