class Date{
  private:
    int day, month, year;

  public:
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
    int getDay(){
      return this->day;
    }
    void setMonth(int month){
      this->month = month;
    }
    int getMonth(){
      return this->month;
    }
    std::string getMonthString(){
      switch(this->month){
        case 1: return "Janeiro";
        case 2: return "Fevereiro";
        case 3: return "Março";
        case 4: return "Abril";
        case 5: return "Maio";
        case 6: return "Junho";
        case 7: return "Julho";
        case 8: return "Agosto";
        case 9: return "Setembro";
        case 10: return "Outubro";
        case 11: return "Novembor";
        case 12: return "Dezembro";
        default: return "Indefinido";
      }
    }
    void setYear(int year){
      this->year = year;
    }
    int getYear(){
      return this->year;
    }
};
