#include<stdio.h>
#include<stdlib.h>

 typedef   struct nno
{
  int a;

struct  nno *p;


} ppt;

ppt* fas( int a){

ppt* b =  (ppt*) malloc(sizeof(ppt));
b->a=a;
b->p=NULL;

return b;
};


void aad(ppt *s , int a){

ppt *v ;
v=s;
while(v->p!=NULL){

    v=v->p;



}
ppt *w=(ppt*)malloc(sizeof(ppt));
v->p=w;
w->a=a;
w->p=NULL;




}

int main(){

ppt *st,*o;
st = fas(10);
aad(st,5);
aad(st,8);
o=st;

while(o!=NULL){
printf("%d  ",o->a);
o=o->p;

}




return 0;
}


