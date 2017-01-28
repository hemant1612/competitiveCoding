import java.io.*;
class GCD_integerArray
{
	public static void main(String [] args)throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the number of elements");
		int n=Integer.parseInt(br.readLine());
		int a[]=new int[n];
		System.out.println("Enter the elements");
		for(int i=0;i<n;i++)
		{
			a[i]=Integer.parseInt(br.readLine());
		}
		int smallest=a[0];
		for(int i=0;i<n;i++)
		{
			if(a[i]<smallest)
			{
				smallest=a[i];
			}
		}
		while(smallest>1)
		{
			int value=0;
			for(int i=0;i<n;i++)
			{
				value+=a[i]%smallest;
			}
			System.out.println(value);
			if(value==0)
			{
				System.out.println(smallest);
				break;
			}
			smallest--;
		}
	}
}
