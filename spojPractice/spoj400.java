import java.io.*;
class spoj400
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int f=1;
		while(f==1)
		{
			int col=Integer.parseInt(br.readLine());
			
			if(col==0)
				f=0;
			else
			{
				String s=br.readLine();
				int row=s.length()/col;
				char m[][]=new char[row][col];
				int count=0;
				for(int i=0;i<row;i++)
				{
					int j;
					if(count==0)
					{
						for(j=0;j<col;j++)
						{
							m[i][j]=s.charAt(j);
						}
						s=s.substring(j,s.length());
						//System.out.println(s);
						count++;
					}
					else
					{
						int k=0;
						for(j=col-1;j>=0;j--)
						{
							m[i][j]=s.charAt(k);
							k++;
						}
						s=s.substring(col,s.length());
						//System.out.println(s);
						count=0;
					}
				}
				for(int i=0;i<col;i++)
				{
					for(int j=0;j<row;j++)
					{
						System.out.print(m[j][i]);
					}
					
				}
				System.out.println();
			}
		}
		/*int row=Integer.parseInt(br.readLine());
		int col=Integer.parseInt(br.readLine());
		int q=65;
		char m[][]=new char[row][col];
		for(int i=0;i<row;i++)
		{
			int j;
			for(j=0;j<col;j++)
			{
				m[i][j]=(char)q;
				q++;
			}
		}
		for(int i=0;i<row;i++)
		{
			int j;
			for(j=0;j<col;j++)
			{
				System.out.print(m[i][j]+" ");
			}
			System.out.println();
		}*/
	}
}
		