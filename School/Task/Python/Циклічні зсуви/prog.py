k=int(input(""));

n=1;

while True:
    n=n+1;
    buf=0;
    for i in range(2,n):
        if n%i==0:
            buf=buf+1;

        if buf==k:
            print(n);
            break;
