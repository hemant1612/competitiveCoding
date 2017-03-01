import java.io.*;
import java.util.*;
import java.math.*;
class spoj54
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		for(int q=1;q<=10;q++)
		{
			BigInteger total=new BigInteger(br.readLine());
			BigInteger more=new BigInteger(br.readLine());
			//System.out.println(total+" "+more);
			BigInteger k=total.add(more);
			k=k.divide(BigInteger.valueOf(2));
			BigInteger n=k.subtract(more);
			System.out.println(k);
			System.out.println(n);
		}
	}
}