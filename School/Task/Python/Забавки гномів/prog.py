def Convert(d,ch):
    p="";
    while d>0:
        ost=d%ch;
        if ost<10:
            p=p+str(ost);

        else:
            p=p+chr(65+ost-10);

        d=int(d/ch);


    p=p[::-1];

    return p;

s=input("");
p1,p2,p3=s.split("/");
d1=int(p1);
d2=int(p2);
d3=int(p3);

ch=d1+1;

p1=Convert(d1,ch);
p2=Convert(d2,ch);
p3=Convert(d3,ch);



print(p1+"/"+p2+"/"+p3);
