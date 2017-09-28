def sum(n):
    res=0;
    while n>0:
        res=res+n%10;
        n=int(n/10);
    return res;

n=int(input(""));

res=1;

while True:
    k=sum(n);

    if n-k>0:
        n=n-k;
        res=res+1;

    else:
        break;

print(res);
