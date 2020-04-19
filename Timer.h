#include <iomanip> 
#include <iostream> 
#include <stdlib.h> 
#include <unistd.h> 
using namespace std; 
  
// hours, minutes, seconds of timer 
int miliseconds = 0; 
int minutes = 0; 
int seconds = 0;
  
// function to display the timer 
void displayClock() 
{ 
    // system call to clear the screen 
    system("clear"); 
  
    //cout << setfill(' ') << setw(10) << "         TIMER         \n"; 
    cout << setfill(' ') << setw(20) << " --------------------------\n"; 
    //cout << setfill(' ') << setw(10); 
    cout << "| "  << minutes;
    cout  << " : " << seconds; 
    cout  << " : "  << miliseconds << " |"; 
    cout << setfill(' ') << setw(12) << " \n --------------------------\n"; 
}
  
void timer() 
{ 
  
    // infinte loop because timer will keep  
    // counting. To kill the process press 
    // Ctrl+D. If it does not work ask 
    // ubuntu for other ways. 
    while (true) { 
          
        // display the timer 
        displayClock(); 
  
        // sleep system call to sleep  
        // for 1 second 
      
  
        // increment seconds 
        miliseconds ++;
        sleep(1);
        // if seconds reaches 60 
        if (miliseconds == 60)
         { 
            // increment minutes 
            seconds ++;
            sleep(1);
  
            // if minutes reaches 60 
            if (seconds == 60) { 
          
                // increment hours 
                minutes ++; 
                minutes = 0; 
            } 

        } 
        
    } 

  return ;
};
  
