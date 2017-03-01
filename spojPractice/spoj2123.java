import java.io.*;
class spoj400
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int f=1;
		while(f!=0)
		{
			col=Integer.parseInt(br.readLine());
			String s=br.readLine();
			if(col!=0)
			{
				int row=s.length()/col;
				char m[][]=new char[row][col];
				for(int i=0;i<row;i++)
				{
					int j;
					for(j=0;j<col;j++)
					{
						m[i][j]=s.charAt(j);
					}
					s=s.substring(j,s.length());
				}
				for(int i=0;i<col;i++)
				{
					for(int j=0;j<row;j++)
					{
						System.out.print(m[i][j]);
					}
				}
				System.out.println();
			}
			else
				f=0;
		}
		
	}
}