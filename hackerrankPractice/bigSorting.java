import java.io.*;
import java.math.*;
import java.util.*;
class bigSorting
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n=Integer.parseInt(br.readLine());
		BigInteger a[]=new BigInteger[n];
		for(int i=0;i<n;i++)
		{
			BigInteger x=new BigInteger(br.readLine());
			a[i]=x;
		}
		Arrays.sort(a);
		for(int i=0;i<n;i++)
		{
			System.out.println(a[i]);
		}
	}
}