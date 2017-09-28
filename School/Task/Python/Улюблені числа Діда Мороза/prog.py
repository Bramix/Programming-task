def proste(n):
    res=1;
    if n == 1:
        return False;

    else:
        for i in range(2,n+1):
            if n%i==0:
                res=res+1;
            if res>2:
                break;

    if res>2:
        return False;

    else:
        return True;

def tri(n):
    p=0;
    res=False;
    while n>0:
        if n%10==3:
            p=3;

        else:
            if p==3 and n%10==1:
                res=True;
                break;

            else:
                p=0;
        n=int(n/10);

    return res;


s=input("");
p1,p2=s.split(" ");

a=int(p1);
b=int(p2);

res=0;

for i in range(a,b+1):
    if proste(i)==True:
        if tri(i)==False:
            res=res+1;

print(res);
