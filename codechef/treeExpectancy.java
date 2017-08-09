import java.util.*;
import java.io.*;
import java.math.*;
class treeExpectancy
{
	BigInteger gcd(BigInteger a,BigInteger b)
	{
		if(a.compareTo(b)==-1)
			gcd(b,a);
		if(b.compareTo(BigInteger.valueOf(0))==0)
			return a;
		return gcd(b,a.mod(b));
	}
	BigInteger binary_exp(BigInteger x,BigInteger n, BigInteger prime)
	{
		if (n.compareTo(BigInteger.valueOf(0))==0)
			return BigInteger.valueOf(1);
		else if(n.compareTo(BigInteger.valueOf(1))==0)
			return x.mod(prime);
		else
		{
			BigInteger temp=binary_exp(x,n.divide(BigInteger.valueOf(2)),prime);
			temp=(temp.multiply(temp)).mod(prime);
			if ((n.mod(BigInteger.valueOf(2))).compareTo(BigInteger.valueOf(0))==0)
				return temp;
			else return (x.mod(prime).multiply(temp)).mod(prime);
		}
	}
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		treeExpectancy obj=new treeExpectancy();
		while(t!=0)
		{
			t--;
			BigInteger n=new BigInteger(br.readLine());
			n=n.subtract(BigInteger.valueOf(1));
			if(n.compareTo(BigInteger.valueOf(0))==0)
				System.out.println("0 0");
			else
			{
				BigInteger numerator=(n.multiply(n)).add(n);
				BigInteger denominator=(BigInteger.valueOf(4).multiply(n)).subtract(BigInteger.valueOf(2));
				BigInteger factor=obj.gcd(numerator,denominator);
				numerator=numerator.divide(factor);
				denominator=denominator.divide(factor);
				BigInteger prime1=BigInteger.valueOf(1000000007);
				BigInteger prime2=BigInteger.valueOf(1000000009);
				BigInteger ans1=((numerator.mod(prime1)).multiply(obj.binary_exp(denominator,BigInteger.valueOf(1000000005),prime1))).mod(prime1);
				BigInteger ans2=((numerator.mod(prime2)).multiply(obj.binary_exp(denominator,BigInteger.valueOf(1000000007),prime2))).mod(prime2);
				System.out.println(ans1+" "+ans2);
			}
		}
	}
}