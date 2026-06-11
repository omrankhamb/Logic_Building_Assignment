// Write A programme to Check number is plindorme or not

class Logic
{
    public void CheckPalindrome(int iNum)
    {
        int iNum2 = iNum;
        int iPalin = 0;

        while (iNum2 > 0)
        {
            int itemp = iNum2 % 10;
            iPalin = (iPalin * 10) + itemp;
            iNum2 = iNum2 / 10;

        }

        if(iNum == iPalin) {
            System.out.println("Number is plaindrome");
        }
        else
        {
            System.out.println("Number is not palindrome");
        }
    }
}
class Assignment82
{
    public static void main(String A[])
    {
        Logic obj =  new Logic();
        obj.CheckPalindrome(12201);
    }
}