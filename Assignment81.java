// Write A programme to find the sum of digits of number

class Logic
{
    public void sum(int inum)
    {
        int iSum = 0;
        while (inum > 0)
        {
            iSum = iSum + (inum %10);
            inum = inum / 10;
        }

        System.out.println("Sum is : "+iSum);
    }
}
class Assignment81
{
    public static void main(String A[])
    {
        Logic obj =  new Logic();
        obj.sum(1234);
    }
}