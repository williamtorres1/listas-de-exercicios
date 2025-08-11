#include <iostream>

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
      if (day > 31 || day < 1 || (day > 28 && month == 2)){
        this->day = 1;
        std::cout << "Atributo dia Inválido";
      }else this->day = day;
    }
    int getDay(){
      return this->day;
    }
    std::string getDayString(){
      if (this->day >= 1 && this->day < 10){
        return "0" + std::to_string(this->day);
      } else return std::to_string(this->day);

    }
    void setMonth(int month){
      if (month > 12 || month < 1){
        this->month = 1;
        std::cout << "Atributo mês Inválido\n";
      } else this->month = month;
      if (this->month == 2 && this->day > 28) {
        std::cout << "Atributo dia Inválido\n";
        this->day = 1;
      }
    }
    int getMonth(){
      return this->month;
    }
    std::string getMonthString(){
      if (this->month >= 1 && this->month < 10){
        return "0" + std::to_string(this->month);
      } else return std::to_string(this->month);
    }
    void setYear(int year){
      this->year = year;
    }
    int getYear(){
      return this->year;
    }
    void incrementDay(int daysToIncrement){
      if (daysToIncrement){
        switch(this->month){
          case 2:{
            if (this->day < 28) {
              this->day++;
            } else if ((this->day + daysToIncrement) > 28){
                this->day = 1;
                this->month++;
            }
            break;
          }
          case 4:
          case 6:
          case 9:
          case 11:{
            if (this->day < 30) this->day++;
            else if ((this->day + daysToIncrement) > 30){
              this->day = 1;
              this->month++;
            }
            break;
          }
          case 1: 
          case 3:
          case 5:
          case 7:
          case 8:
          case 10:{
            if (this->day < 31) this->day++;
            else if ((this->day + daysToIncrement) > 31){
              this->day = 1;
              this->month++;
            }
            break;
          }
          case 12:{
            if (this->day < 31) {
              this->day++;
            } else if ((this->day + daysToIncrement) > 31){
              this->day = 1;
              this->month = 1;
              this->year++;
            }
            break;
          }
        }
      incrementDay(daysToIncrement - 1);
      }
      
    }
};
