    #include <iostream>
    using namespace std;

    class Box{
    private:
        int lenght;
        int breath;
    public:
        void setdata(int a,int b){
            lenght = a;
            breath = b;
        }
        friend int area(Box b);
    };

    int area(Box b){
        return b.lenght*b.breath;
    }

    int main(){
        Box b1;
        b1.setdata(10,20);
        cout << area(b1);
        return 0;
    }