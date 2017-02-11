import java.util.*;
import java.io.*;
class hackerrank
{
	public static void main(String [] args)throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String s="hackerrank";
		int t=Integer.parseInt(br.readLine());
		for(int q=1;q<=t;q++)
		{
			String check=br.readLine();
			int count=0,place=0;
			for(int i=0;i<s.length();i++)
			{

				for(int j=place;j<check.length();j++)
				{
					if(s.charAt(i)==check.charAt(j))
					{
						place=j+1;
						count++;
						break;
					}
				}
			}
			if(count==s.length())
				System.out.println("YES");
			else
				System.out.println("NO");
		}
	}
}
	