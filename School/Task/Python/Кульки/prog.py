n=int(input(""))
s=input("")
color=[]
color=s.split(" ")

p=[0,0,0,0,0,0,0,0,0]

for i in color:
	if i=='1':
		p[0]=p[0]+1

	elif i=='2':
		p[1]=p[1]+1

	elif i=='3':
		p[2]=p[2]+1

	elif i=='4':
		p[3]=p[3]+1

	elif i=='5':
		p[4]=p[4]+1

	elif i=='6':
		p[5]=p[5]+1

	elif i=='7':
		p[6]=p[6]+1

	elif i=='8':
		p[7]=p[7]+1

	elif i=='9':
		p[8]=p[8]+1

buf=-1

for i in p:
	if i>=buf:
		buf=i

res=n-buf

print(res)
