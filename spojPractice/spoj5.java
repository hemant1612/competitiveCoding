import java.io.*;
import java.math.*;
class spoj5
{
	public static void main(String args[])throws IOException
	{
		spoj5 obj=new spoj5();
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t--!=0)
		{
			BigInteger n=new BigInteger(br.readLine());
			//int n=Integer.parseInt(br.readLine());
			int f=0;
			n=n.add(BigInteger.valueOf(1));
			while(f==0)
			{
				boolean check=obj.isPrime(n);
				if(check)
				{
					f=1;
					System.out.println(n);
					break;
				}
				n=n.add(BigInteger.valueOf(1));
			}
		}
	}
	boolean isPrime(BigInteger n)
	{
		String s=n.toString();
		String s1=new StringBuffer(s).reverse().toString();
		//System.out.println(s);
		//System.out.println(s1);
		if(s.equals(s1))
			return true;
		else
			return false;
	}
}