//code using Bubble Sort

#include<stdio.h>
int main()
{
            
            
  int a[20]; //function to print array element
  int number,i; //declaration of variables
  printf("Enter the size of array:\n");
  scanf("%d",&number);

   for(i=0;i<number;i++)
  {
   scanf("%d",&a[i]);
  }


                //implement bubble Sort
  {
      int j,count;
      for(i=0;i<number;i++)
      {
          for(j=i+1;j<number;j++)
          {
              if(a[i]>a[j])
              {
                  count=a[i];
                  a[i]=a[j];
                  a[j]=count;
              }
          }
      }
  }

  //result

  printf("array element after sorting\n");
  for(i=0;i<number;i++)
  {
      printf("%d\n",a[i]);
  }

  return 0;
  
}