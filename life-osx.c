#define F(n)for(n=1;n<33;n++)
#define l(a)+!(2*a&x)+!(a&x)+!(a>>1&x)
Q[68],*E=Q,*R=Q+34,y,i,*a;main(){srand(time(0));F(i)E[i]=rand()<<8;B:F(y){R[y]=0
;F(i){int x=1<<(i-1),A=l(E[y-1])l(E[y])l(E[y+1]),q=A==6||E[y]&x&&A==5;R[y]|=q?x:
0;printf(q?"[]":"  ");}puts("");}a=E;E=R;R=a;system("sleep .1;clear");goto B;}
