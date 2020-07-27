#include<iostream>
using namespace std;
struct d
{
    int x,y,z;
    d(int xx,int yy,int zz){x=xx;y=yy;z=zz;}
}dd(1,2,3),*pd=&dd;
#define dda(p) printf("%d,%d,%d.",p->x,p->y,p->z);
main()
{
    d *p=&dd;
    dda(p);
}
 
//宏的使用  &   结构体指针