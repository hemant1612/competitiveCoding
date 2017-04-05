import java.io.*;
import java.math.*;
class karatsubaMultiplication
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String n=br.readLine();
		String m=br.readLine();
		karatsubaMultiplication obj=new karatsubaMultiplication();
		String ans=obj.multiply(n,m);
		System.out.println(ans);
	}
	String multiply(String n, String m)
	{
		if(n.length()<=1||m.length()<=1)
		{
			return Integer.toString(Integer.parseInt(n)*Integer.parseInt(m));
		}
		int max=Math.max(n.length(),m.length());
		System.out.println(max);
		int half=max/2;
		System.out.println(half);
		String high1=n.substring(0,half);
		String low1=n.substring(half,n.length());
		String high2=m.substring(0,half);
		String low2=m.substring(half,m.length());
		/*System.out.println(high1);
		System.out.println(low1);
		System.out.println(high2);
		System.out.println(low2);*/
		String z0=multiply(low1,low2);
		String z1=multiply((low1+high1),(low2+high2));
		String z2=multiply(high1,high2);
		return Integer.toString(Integer.parseInt(z2)*(int)Math.pow(10,2*half)+(Integer.parseInt(z1)-Integer.parseInt(z2)-Integer.parseInt(z0))*(int)Math.pow(10,half)+Integer.parseInt(z0));
	}
}