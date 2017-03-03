import java.io.*;
class six
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        String s=br.readLine();
        int counter=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<s.length()-i;j++)
            {
                String s1=s.substring(j,j+i+1);
                //System.out.println(s1);
                
                if(s1.equals("0"))
                    {
                        //System.out.println("000:");
                        counter++;
                    }
                else if(s1.charAt(0)!='0')
                {
                    int n=Integer.parseInt(s1);
                    if(n%6==0)
                        {
                            //System.out.println(n);
                            counter++;
                        }
                }
               // System.out.println();
            }
        }
        System.out.println(counter);
    }

}
a