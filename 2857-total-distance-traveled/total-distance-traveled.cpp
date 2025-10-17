class Solution 
{
public:
    int distanceTraveled(int mainTank, int additionalTank) 
    {
        int petrol=0;
        while(mainTank>0)
        {
            if(mainTank/5)
            {
                if(additionalTank>0)
                {
                    mainTank++;
                    additionalTank--;
                }   
                petrol += 5;
                mainTank -= 5;
            }
            else
            {
                petrol += mainTank;
                break;
            }
        }
        return 10*petrol;
        
    }
};