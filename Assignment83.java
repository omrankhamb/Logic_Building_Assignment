// Write A programme to Find minimum of three numbers

class Logic
{
    public void Findmin(int a,int b,int c)
    {
        if(a <  b)
        {
            if(a <c)
            {
                System.out.println("Number is Minimum : "+a);
            }
            else
            {
                System.out.println("number is Minimum is : "+ c);
            }
        }
        else
        {
            if(b < c)
            {
                System.out.println("number is Minimum is : "+b);
            }
            else
            {
                System.out.println("number is Minimum is : "+c);
            }
        }


        
    }
}
class Assignment83
{
    public static void main(String A[])
    {
        Logic obj =  new Logic();
        obj.Findmin(3,7,1);
    }
}