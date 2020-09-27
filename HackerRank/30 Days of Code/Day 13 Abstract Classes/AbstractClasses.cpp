class MyBook:protected Book
{
    public:
    double price;

    MyBook(string a,string b,double c):Book(a,b)
    {
        price=c;
    }

    void display()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;    
    }    
};