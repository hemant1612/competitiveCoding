t=int(input())
while t!=0:
	t-=1
	s=input()
	state=-1
	current=0
	ans=1
	for i in range(len(s)):
		if s[i]=='<':
			if state!=0:
				state=0
				current=1
				if current>ans:
					ans=current
			else:
				current+=1
				if current>ans:
					ans=current
		elif s[i]=='>':
			if state!=1:
				state=1
				current=1
				if current>ans:
					ans=current
			else:
				current+=1
				if current>ans:
					ans=current
	if state!=-1:
		print((ans+1))
	else:
		print("1")