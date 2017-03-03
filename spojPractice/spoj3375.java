import java.io.*;
class spoj3375
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		spoj3375 obj=new spoj3375();
		int sc=1;
		int t=Integer.parseInt(br.readLine());
		for(int q=1;q<=t;q++)
		{
			
			//int b=Integer.parseInt(br.readLine());
			//int fr=Integer.parseInt(br.readLine());
			String lines=br.readLine();
			String[] strs=lines.trim().split("\\s+");
			int w[]=new int[2];
			for(int i=0;i<2;i++)
			{
				w[i]=Integer.parseInt(strs[i]);
			}
			int b=w[0];
			int fr=w[1];
			String lines1=br.readLine();
			String[] strs1=lines1.trim().split("\\s+");
			int a[]=new int[fr];
			for(int i=0;i<fr;i++)
			{
				a[i]=Integer.parseInt(strs1[i]);
			}
			a=obj.mergeSort(a);
			int f=0;
			int sum=0;
			int ans=0;
			for(int i=fr-1;i>=0;i--)
			{
				sum+=a[i];
				if(sum>=b)
				{
					ans=fr-i;
					f=1;
					break;
				}
			}
			System.out.println("Scenario #"+sc+":");
			if(f==1)
				System.out.println(ans);
			else
				System.out.println("impossible");
			sc++;
			System.out.println();
		}
	}
	public int[] mergeSort(int [] a)
    {
        if(a.length<=1)
        {
            return a;
        }
        int firstLength=a.length/2;
        int secondLength=a.length-firstLength;
        int first[]=new int[firstLength];
        int second[]=new int[secondLength];
        System.arraycopy(a,0,first,0,firstLength);
        System.arraycopy(a,firstLength,second,0,secondLength);
        first=mergeSort(first);
        second=mergeSort(second);
        merge(first,second,a);
        return a;
    } 

    public void merge(int [] first,int [] second,int [] a)
    {
        int iFirst=0;
        int iSecond=0;
        int j=0;
        while(iFirst<first.length&&iSecond<second.length)
        {
            if(first[iFirst]<second[iSecond])
            {
                a[j]=first[iFirst];
                iFirst++;
            }
            else
            {
                a[j]=second[iSecond];
                iSecond++;
            }
            j++;
        }
        System.arraycopy(first,iFirst,a,j,first.length-iFirst);
        System.arraycopy(second,iSecond,a,j,second.length-iSecond);
    }
}