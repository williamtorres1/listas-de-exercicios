class Date{
  public:
    int day, month, year;
  Date(){
    this->day = 1;
    this->month = 1;
    this->year = 1;
  }
  Date(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
  }

  void setDay(int day){
    this->day = day;
  }
  void setMonth(int month){
    this->month = month;
  }
  void setYear(int year){
    this->year = year;
  }

};
