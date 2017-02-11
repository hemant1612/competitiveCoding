import java.util.*;
import java.io.*;
class hackerrank
{
	public static void main(String [] args)throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n=Integer.parseInt(br.readLine());
		int m[]=new int[n];
		String lines=br.readLine();
		String[] strs=lines.trim().split("\\s+");
		for(int i=0;i<n;i++)
		{
			m[i]=Integer.parseInt(strs[i]);
		}
		int t1=0,t2=0,t3=0,t4=0,t5=0;
		for(int i=0;i<n;i++)
		{
			if(m[i]==1)
				t1++;
			else if(m[i]==2)
				t2++;
			else if(m[i]==3)
				t3++;
			else if(m[i]==4)
				t4++;
			else if(m[i]==5)
				t5++;
			
		}
		//System.out.println("t1 "+t1+" t2 "+t2+" t3 "+t3+" t4 "+t4+" t5 "+t5);
		int max=Math.max(t1,Math.max(t2,Math.max(t3,Math.max(t5,t4))));
		if(max==t1)
			System.out.println("1");
		else if(max==t2)
			System.out.println("2");
		else if(max==t3)
			System.out.println("3");
		else if(max==t4)
			System.out.println("4");
		else if(max==t5)
			System.out.println("5");
	}
}
