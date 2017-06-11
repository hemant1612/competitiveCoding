
//problems of partial sums are of 2 types

//type1
/*
	problems in which you are asked to sum a part of
	the elements without modifying the querries

	Suppose you're given the elements a1,a2,...,an
	and for each l,r you need to print al+...+ar

	You should have another array s1,s2,...sn of which
	for each si=a1+a2+...+ai

	Now (viola!) you're answer is sr-s(l-1)
*/

//type 2 (bit more difficult)
/*
	problems in which you need to perform some querries
	and modify the elements of the array

	Suppose you're given the elements a1,a2,...,an
	and for each l,r,v you need to add v to each ai for
	l<=i<=r

	What you should do.
		Have a parallel array (p) whose all elements are 0
		for each l,r increase pl by v and decrease p(r+1) by v
		if r+1 is out of a valid index litemax
		Lastly for each i from 1 to n increase pi by p(i-1)
		Now print a1+p1,a2+p2,...,an+pn
*/
