import java.io.*;
class appleAndOrange
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String lines=br.readLine();
		String[] strs=lines.trim().split("\\s+");
		int a1[]=new int[2];
		for(int i=0;i<2;i++)
		{
			a1[i]=Integer.parseInt(strs[i]);
		}
		int s=a1[0];
		int t=a1[1];
		String lines1=br.readLine();
		String[] strs1=lines1.trim().split("\\s+");
		int a2[]=new int[2];
		for(int i=0;i<2;i++)
		{
			a2[i]=Integer.parseInt(strs1[i]);
		}
		int a=a2[0];
		int b=a2[1];
		String lines2=br.readLine();
		String[] strs2=lines2.trim().split("\\s+");
		int a3[]=new int[2];
		for(int i=0;i<2;i++)
		{
			a3[i]=Integer.parseInt(strs2[i]);
		}
		int m=a3[0];
		int n=a3[1];
		int apple[]=new int[m];
		int orange[]=new int[n];
		String lines3=br.readLine();
		String[] strs3=lines3.trim().split("\\s+");
		for(int i=0;i<m;i++)
		{
			apple[i]=Integer.parseInt(strs3[i]);
		}
		String lines4=br.readLine();
		String[] strs4=lines4.trim().split("\\s+");
		int countera=0,countero=0;
		for(int i=0;i<n;i++)
		{
			orange[i]=Integer.parseInt(strs4[i]);
		}
		for(int i=0;i<m;i++)
		{
			if((a+apple[i])>=s&&(a+apple[i])<=t)
				countera++;
		}
		for(int i=0;i<n;i++)
		{
			if((b+orange[i])>=s&&(b+orange[i])<=t)
				countero++;
		}
		System.out.println(countera);
		System.out.println(countero);
	}
}
