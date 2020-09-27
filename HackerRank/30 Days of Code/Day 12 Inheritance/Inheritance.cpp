class Student :  public Person
{
    private:
        vector<int> testScores;
        int sum=0, subs=0;
        double avg=0.0;
    public:
       Student(string firstN, string lastN, int idS, vector<int> scores): Person(firstN,lastN,idS)
       {
         this->testScores=scores;
         subs=testScores.size();
       }
      char calculate()
        {
           char g;
           for(unsigned int i=0; i<subs; ++i)
            {
               sum+=testScores[i];
            }
           avg=sum/subs;
           if     (avg>=90 && avg<=100)
                  g='O';
           else if(avg>=80 && avg<=90)
                  g='E';
           else if(avg>=70 && avg<=80)
                  g='A';
           else if(avg>=55 && avg<=75)
                  g='P';
           else if(avg>=40 && avg<=55)
                  g='D';
           else if(avg<40)
                  g= 'T';
            return g;
        }

};