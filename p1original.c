#include<stdio.h>
#include<math.h>

void input(int *base,int *height)
{
 printf("enter base and height\n");
  scanf("%d%d" ,base ,height);
}
void find_area(int base, int height, int *area)
{
   *area=0.5*base*height;
}
void output(int base, int height, int area)
{
  printf("the area of the triangle whose base and height are %d %d is =%d \n",base,height,area);
  }
int main()
{
  int base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
  }
