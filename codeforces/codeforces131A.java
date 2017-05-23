import java.io.*;
import java.math.*;
import java.util.*;
public class codeforces131A
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String s=br.readLine();
		int f=1;
		for(int i=1;i<s.length();i++)
		{
			if(Character.isLowerCase(s.charAt(i)))
			{
				f=0;
				break;
			}
		}
		if(s.length()==1)
			System.out.println(s.toUpperCase());
		else
		{
			if(f==1)
			{
				s=s.toLowerCase();
				String s1=Character.valueOf(Character.toUpperCase(s.charAt(0)))+s.substring(1,s.length());
				System.out.println(s1);
			}
			else
			{
				System.out.println(s);
			}
		}
	}
}