// Write A programme to print mltiplcation of table

class Logic
{
    public void printTable(int num)
    {
        int iCnt = 0;
        for(iCnt = 1 ; iCnt <= 10 ; iCnt++)
        {
            System.out.println(num* iCnt);
        }
    }
}
class Assignment85
{
    public static void main(String A[])
    {
        Logic obj =  new Logic();
        obj.printTable(5);
    }
}