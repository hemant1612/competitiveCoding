import java.io.*;
class spoj1025
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		for(int q=1;q<=t;q++)
		{
			int n=Integer.parseInt(br.readLine());
			int m[]=new int[n];
			int w[]=new int[n];
			String lines=br.readLine();
			String[] strs=lines.trim().split("\\s+");
			for(int i=0;i<n;i++)
			{
				m[i]=Integer.parseInt(strs[i]);
			}
			String lines1=br.readLine();
			String[] strs1=lines1.trim().split("\\s+");
			for(int i=0;i<n;i++)
			{
				w[i]=Integer.parseInt(strs1[i]);
			}
			spoj1025 obj=new spoj1025();
			m=obj.mergeSort(m);
			w=obj.mergeSort(w);
			int sum=0;
			for(int i=0;i<n;i++)
			{
				sum+=m[i]*w[i];
			}
			System.out.println(sum);
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