class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(int d=1, int m=1, int y=2003);
        int getDay();
        int getMonth();
        int getYear();
        void setDay(int d);
        void setMonth(int m);
        void setYear(int y);
        bool isLeapYear(int y);
        int monthDays();
        void nextDay();
        void print();
};
