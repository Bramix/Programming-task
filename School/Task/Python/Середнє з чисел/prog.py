s=input("");
p1,p2,p3=s.split(" ");

a=int(p1);
b=int(p2);
c=int(p3);

if (a<=b and b<=c) or (a>=b and b>=c):
    print (b);

if (b<=a and a<=c) or (b>=a and a>=c):
    print (a);

if (b<=c and c<=a) or (b>=c and c>=a):
    print (c);
