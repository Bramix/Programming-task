st=input("");
n=len(st);
res=0;

for i in range(int(n/2)):
	if st[i]==st[n-i-1]:
		res=res+1;

if n%2==1:
	res=res+1;

print (res);
