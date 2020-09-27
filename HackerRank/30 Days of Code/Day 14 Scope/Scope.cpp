    Difference(vector<int> a)
    {
        for(int i=0;i<a.size();i++)
        {
            int b=a[i];
            elements.push_back(b);
        }
    }

    void computeDifference()
    {
        int var;
        for(int i=0;i<elements.size();i++)
        {
            for(int j=0;j<elements.size();j++)
            {
                int v=abs(elements[i]-elements[j]);
                if(v>var)
                {
                    var=v;
                }

            }
        }
        maximumDifference=var;
    }