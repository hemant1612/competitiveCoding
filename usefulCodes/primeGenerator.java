import java.io.*;
import java.util.Arrays;
class primeGenerator
{
	public static void main(String [] args)throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the number till which you want to generate primes?");
		int n=Integer.parseInt(br.readLine());
		Boolean[] array=new Boolean[n];
		Arrays.fill(array,Boolean.TRUE);
		for(int i=2;i<Math.sqrt(n);i++)
		{
			if(array[i]==true)
			{
				int counter=0;
				for(int j=i*i;j<n;j=i*i+counter*i)
				{
					array[j]=false;
					counter++;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			if(array[i]==true)
			{
				System.out.print(i+" ");
			}
		}
		System.out.println();
	}
}
