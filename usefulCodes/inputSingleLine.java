import java.io.*;
class inputSingleLine
	public static void main(String [] args)throws IOException
	{
		

		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter a number");
		int n=Integer.parseInt(br.readLine());
		System.out.println("Enter n numbers spaced by space");
		String lines=br.readLine();
		String[] strs=lines.trim().split("\\s+");
		int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=Integer.parseInt(strs[i]);
		}
		System.out.println();
		for(int i=0;i<n;i++)
		{
			System.out.print(a[i]+" ");
		}
		System.out.println();

		
		
	}
}
