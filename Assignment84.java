// Write A programme to Find maximum pf two numbers

class Logic
{
    public void FindMax(int a,int b)
    {
        if(a > b)        
        {
            System.out.println("Number os greter : "+a);
            
        }
        else{
            System.out.println("Number is greater : "+b);
        }
    }
}
class Assignment84
{
    public static void main(String A[])
    {
        Logic obj =  new Logic();
        obj.FindMax(3,7);
    }
}