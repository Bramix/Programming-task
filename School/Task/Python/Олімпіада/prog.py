s1=input("");
s2=input("");

h,m,s=s1.split(" ");

h1=int(h);
m1=int(m);
s1=int(s);

h,m,s=s2.split(" ");

h2=int(h);
m2=int(m);
s2=int(s);

time1=s1+m1*60+h1*3600;
time2=s2+m2*60+h2*3600;

time=time2-time1;


hr=int(time/3600);
time=time-hr*3600;

mr=int(time/60);
time=time-mr*60;

sr=time;

print(str(hr)+" "+str(mr)+" "+str(sr));
