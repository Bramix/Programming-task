def BinToDec(n):
	res=int(n,2)

	return res

def DecToBin(n):
	res=int(bin(n)[2:])
	return res

a=input("")
b=input("")

p1=BinToDec(a)
p2=BinToDec(b)
p=p1+p2;
res=DecToBin(p)
print(res)