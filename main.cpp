#include <iostream>
#include <string>

using namespace std;


int main() {

    int hour, mins;
    string day;
    string weekDay, weekend;
    double cost;
    char temp; 

    double callLength;


   cout << "please enter the time in the 24 hour format" << endl;
   cin >> hour >>temp >> mins;

   cout << "please enter the date in the format (Mo Tu We Th Fr Sa Su) " << endl;
   cin >> day;

   cout << "please enter how many minutes the call was " << endl;
   cin >> callLength;

   if ( day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr") {
       weekDay = day ;
   }
   else  {
      weekend = day;
   }


   if (day == weekDay) {
       if (hour >= 8 && hour <=18){
           cost = callLength * 0.4;
       }
       else {
           cost = callLength * 0.25;
       }
   }

   else {
       cost = callLength * 0.15;

   }

    cout << "your call costs $" << cost << endl;






    return 0;
}
