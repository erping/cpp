/**
* offset of a member in struct
**/



#include<iostream>
using namespace std;
#define OFFSETOF(type, field) ((size_t)&(((type *)0)->field))
typedef struct test{
	int a;
	char b;
	short c;
}aa;
int main()
{
	size_t offsetofa = OFFSETOF(aa,a);
    size_t offsetofb = OFFSETOF(aa,b);

    size_t offsetofc = OFFSETOF(aa,c);
	cout<<offsetofa<<offsetofb<<offsetofc<<endl;	
	return 0;
}