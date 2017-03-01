import java.io.*;
import java.math.*;
import java.util.*;
class spoj2148
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		for(int q=1;q<=t;q++)
		{
			System.out.println();
			BigInteger n=new BigInteger(br.readLine());
			//BigInteger a[]=new BigInteger[n];
			BigInteger sum=BigInteger.valueOf(0);
			for(BigInteger i=BigInteger.valueOf(0);i.compareTo(n)<0;i=i.add(BigInteger.valueOf(1)))
			{
				BigInteger number=new BigInteger(br.readLine());
				sum=sum.add(number);
				//sum=sum.add(a[i]);
			}
			if(sum.mod(n).compareTo(BigInteger.valueOf(0))==0)
				System.out.println("YES");
			else
				System.out.println("NO");
		}
	}
}