class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        //cout<<"I implemented: AdvancedArithmetic"<<endl;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
        //cout<<sum<<endl;
        return sum;
    }
};

