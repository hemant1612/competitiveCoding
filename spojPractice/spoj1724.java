import java.io.*;
import java.math.*;
class spoj1724
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t--!=0)
		{
			int n=Integer.parseInt(br.readLine());
			BigInteger sum=BigInteger.ZERO;
			sum=BigInteger.valueOf((long)Math.pow(n,2));
			
			n--;
			if(n%2==0)
			{
				int x=n/2;
				sum=sum.add(BigInteger.valueOf(4*(x)*(x+1)*(2*x+1)/6));
			}
			else
			{
				int x=(n-1)/2+1;
				sum=sum.add(BigInteger.valueOf(4*(x)*(x+1)*(2*x+1)/6+x-2*(x)*(x+1)));
			}
			System.out.println(sum);
		}
	}
}
