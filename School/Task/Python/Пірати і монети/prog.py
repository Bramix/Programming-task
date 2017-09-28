s=input("");
p1,p2=s.split(" ");
a=int(p1);
m=int(p2);

n=0;

while a*2<=m:
    m=m-a;
    n=n+1;
    a=a+1;

print(n);
