import java.io.*;
class codeforces1a
{
	public static void main(String argsp[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String lines=br.readLine();
		String[] strs=lines.trim().split("\\s+");
		double c[]=new double[3];
		for(int i=0;i<3;i++)
		{
			c[i]=Double.parseDouble(strs[i]);
		}
		double n=c[1];
		double m=c[0];
		double a=c[2];
		long ans=(long)(Math.ceil(n/a)*Math.ceil(m/a));
		System.out.println(ans);
	}	
}