import java.io.*;
import java.util.*;
import java.math.*;
class spoj2157
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t!=0)
		{
			t--;
			System.out.println();
			String s=br.readLine();
			int cp=0;
			int ce=0;
			for(int i=0;i<s.length();i++)
			{
				if(s.charAt(i)=='+')
					cp=i;
				else if(s.charAt(i)=='=')
					ce=i;
			}
			String s1=s.substring(0,cp-1);
			String s2=s.substring(cp+2,ce-1);
			String s3=s.substring(ce+2,s.length());
			int d=0;
			for(int i=0;i<s.length();i++)
			{
				if((int)s1.charAt(i)>=97&&(int)s1.charAt(i)<=122)
				{
					 d=1;
					break;
				}
				else if((int)s2.charAt(i)>=97&&(int)s2.charAt(i)<=122)
				{
					 d=2;
					break;
				}
				else if((int)s3.charAt(i)>=97&&(int)s3.charAt(i)<=122)
				{
					 d=3;
					break;
				}
			}
			//System.out.println(d);
			if(d==1)
			{
				int n2=Integer.parseInt(s2);
				//int n2=Integer.parseInt(s2);
				int n3=Integer.parseInt(s3);
				//int n3=Integer.parseInt(s3);;
				
				int n1=n3-n2;
				System.out.println(n1+" + "+n2+" = "+n3);
			}
			else if(d==2)
			{
				int n1=Integer.parseInt(s1);
				
				int n3=Integer.parseInt(s3);;
				
				int  n2=n3-n1;
				System.out.println(n1+" + "+n2+" = "+n3);
				
			}
			else
			{
				int n1=Integer.parseInt(s1);
				
				int n2=Integer.parseInt(s2);
				
				int n3=n2+n1;
				System.out.println(n1+" + "+n2+" = "+n3);
			}
		}
	}
}