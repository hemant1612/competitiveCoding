from sys import stdin, stdout
q=int(input())
dict={}
while q!=0:
	q-=1
	a, b = map(str,stdin.readline().rstrip().split())
	if a=='add':
		if b in dict.keys():
			dict[b]+=1
		else:
			dict[b]=1
	elif a=='remove':
		if b in dict.keys():
			dict[b]-=1
	else:
		if b in dict.keys():
			print (dict[b])
		else:
			print ("0")
