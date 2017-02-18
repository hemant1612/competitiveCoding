import java.math.*;
import java.io.*;
class taumBday
{
	public static void main(String args[])throws IOException
	{
		//System.out.private ("boo");
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		for(int q=1;q<=t;q++)
		{
			String lines=br.readLine();
			String[] strs=lines.trim().split("\\s+");
			long c[]=new long[2];
			for(int i=0;i<2;i++)
			{
				c[i]=Long.parseLong(strs[i]);
			}
			long b=c[0];
			long w=c[1];
			String lines1=br.readLine();
			String[] strs1=lines1.trim().split("\\s+");
			long a[]=new long[3];
			for(int i=0;i<3;i++)
			{
				a[i]=Long.parseLong(strs1[i]);
			}
			long x=a[0];
			long y=a[1];
			long z=a[2];
			long cost=0;
			if(x==Math.min(x,y))
			{
				if(y>x+z)
				{
					cost=x*b+(x+z)*w;
				}
				else
				{
					cost=x*b+y*w;
				}
			}
			else
			{
				if(x>y+z)
				{
					cost=(y+z)*b+y*w;
				}
				else
				{
					cost=x*b+y*w;
				}
			}
			System.out.println(cost);
		}
	}
}

/*10
81121308 2772464
720682 615826 14843
6550863 99744789
678609 64920 289297
32797220 23367318
902640 429570 404819
36392904 80519738
872118 344893 400189
49666210 86374039
59438 359841 438491
59255837 92618771
24658 947186 683792
42009279 38068493
456255 246313 200670
58987449 22313527
461810 182410 378447
32267458 63495981
745764 170098 441902
83666934 10563001
961640 539051 424245
*/