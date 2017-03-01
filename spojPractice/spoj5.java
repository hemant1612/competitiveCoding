import java.io.*;
class spoj5
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		spoj5 obj=new spoj5();
		while(t--!=0)
		{
			int n=Integer.parseInt(br.readLine());
			int f=1;
			while(f==1)
			{
				int ans=obj.isPalindrome(++n);
				if(ans==1)
				{
					System.out.println(n);
					f=0;
					break;
				}
			}

		}
	}
	int isPalindrome(int n)
	{
		String s=Integer.toString(n);
		int f=1;
		for(int i=0;i<(int)Math.floor(n/2);i++)
		{
			char c1=s.charAt(i);
			char c2=s.charAt(n-i-1);
			if(c1!=c2)
			{
				f=0;
				break;
			}
		}
		if(f==1)
			return 1;
		else
			return 0;
	}
}