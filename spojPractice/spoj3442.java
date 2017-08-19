import java.io.*;
import java.util.*;
class spoj3442
{
	public static void main(String atgsp[]) throws IOException
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t!=0)
		{
			t--;
			int a=sc.nextInt();
			long b=sc.nextLong();
			if(a==0) System.out.println("0");
			else
			{
				if(b==0) System.out.println("1");
				else
				{
					b=b%4;
					if(b==0) b=4;
					int ans=1;
					for(int i=1;i<=b;i++) ans*=a;
					System.out.println(ans%10);
				}
			}
		}
	}
}