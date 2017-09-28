from math import factorial

m=int(input(""))
n=factorial(m)

def generator(n):

	while True:
		
		bool=True;
		
		if n==2:
			n=n+1

		else:
			n=n+2

		for i in range(2,n):
			
			if n%i==0:
				bool=False;
				break;

			i=i+1
		

		if(bool==True):
			return(n)
			break



def n_dil(n):
	res=1
	i=2
	t=1

	while n!=t:
		if n%i==0:
			buf=i
			k=1
			while n%buf==0:
				buf=buf*i
				k=k+1

			res=res*k
			k=k-1

			t=t*(i**k)

		i=generator(i)
		
	return res;

print(n_dil(n))
