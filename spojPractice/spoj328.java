import java.io.*;
import java.math.*;
import java.util.*;
class spoj328
{
	public static void main(String args[])throws IOException
	{
		Scanner sc=new Scanner(System.in);
		while(sc.hasNextBigInteger())
		{
			BigInteger n=sc.nextBigInteger();
			if(n.equals(BigInteger.valueOf(1)))
				System.out.println("1");
			else
			{
				n=(n.multiply(BigInteger.valueOf(2))).subtract(BigInteger.valueOf(2));
				System.out.println(n);
			}
		}
	}
}