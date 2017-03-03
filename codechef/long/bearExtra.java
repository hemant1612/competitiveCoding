import java.io.*;
class bearExtra
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		bearExtra obj=new bearExtra();
		int t=Integer.parseInt(br.readLine());
		while(t--!=0)
		{
			int n=Integer.parseInt(br.readLine());
			String lines=br.readLine();
			String[] strs=lines.trim().split("\\s+");
			int a[]=new int[n];
			for(int i=0;i<n;i++)
			{
				a[i]=Integer.parseInt(strs[i]);
			}
			a=obj.mergeSort(a);
			/*for(int i=0;i<a.length;i++)
			{
				System.out.print(a[i]+ " ");
			}
			System.out.println();*/
			for(int i=1;i<a.length-1;i++)
			{
				if(a[i]-a[i-1]==1&&a[i+1]-a[i]!=1)
				{
					System.out.println(a[i+1]);
					break;
				}
				if(a[i]-a[i-1]!=1&&a[i+1]-a[i]==1)
				{
					System.out.println(a[i-1]);
					break;
				}

			}
			
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