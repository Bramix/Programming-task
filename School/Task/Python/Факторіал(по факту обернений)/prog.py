from math import factorial

n=input("");

def unfactorial(n):
	i=1000
	res=1
	kmin=0
	kmax=2000
	k=0
	znak=True;


	if n=="1":
		res=1

	elif n=="2":
		res=2

	elif n=="6":
		res=3

	elif n=="120":
		res=5

	else:
		while(True):
			nfact=factorial(i)
			nf=str(nfact)

			if (len(nf)>len(n)):
				kmax=i;
				znak=True;

			elif (len(nf)<len(n)):
				kmin=i;
				znak=False;

			elif(len(nf)==len(n)):
				res=i
				break;

			k=int((kmax-kmin)/2)

			if k<1:
				k=1;

			if (znak==False):
				i=i+k

			elif (znak==True):
				i=i-k

	return res



print(unfactorial(n))