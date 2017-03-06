import java.io.*;
class spoj4580
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int a[],b[],c[],d[],e[],f[];
		int n=Integer.parseInt(br.readLine());
		int m[]=new int[n];
		 a=new int[n];
		 b=new int[n];
		 c=new int[n];
		 d=new int[n];
		 e=new int[n];
		 f=new int[n];
		for(int i=0;i<n;i++)
		{
			m[i]=Integer.parseInt(br.readLine());
			a[i]=m[i];
			b[i]=m[i];
			c[i]=m[i];
			d[i]=m[i];
			e[i]=m[i];
			f[i]=m[i];
		}
		long values1[]=new long[(int)Math.pow(n,3)];
		long values2[]=new long[(int)Math.pow(n,3)];
		int count1=0,count2=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<n;k++)
				{
					values1[count1]=a[i]*b[j]+c[k];
					values2[count2]=d[i]*(e[j]+f[k]);
					if(i!=)
					count1++;
					count2++;
				}
			}
		}
		System.out.println("count1 "+count1);
		System.out.println("count2 "+count2);
		for(int i=0;i<values1.length;i++)
		{
			System.out.print(values1[i]+" ");
		}
		System.out.println();
		for(int i=0;i<values2.length;i++)
		{
			System.out.print(values2[i]+" ");
		}
		System.out.println();
		spoj4580 obj=new spoj4580();
		values1=obj.removeD(values1);
		values2=obj.removeD(values2);
		for(int i=0;i<values1.length;i++)
		{
			System.out.print(values1[i]+" ");
		}
		System.out.println();
		for(int i=0;i<values2.length;i++)
		{
			System.out.print(values2[i]+" ");
		}
		System.out.println();
	}
	public long[] removeD(long a[])
	{
		int n=a.length;
		for(int i=0;i<a.length;i++)
		{
			for(int j=i+1;j<a.length;)
			{
				if(a[i]==a[j])
				{
					for(int k=j;k<a.length;k++)
					{
						a[k]=a[k+1];
						n--;
					}
				}
				else
					j++;
			}
		}
		long ans[]=new long[n];
		for(int i=0;i<n;i++)
		{
			ans[i]=a[i];
		}
		return ans;
	}
}