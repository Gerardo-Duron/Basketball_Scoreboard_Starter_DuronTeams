//Dr_T helping students get started on Unit 4 scoreboard
//Using object oriented coding for a scoreboard:  Basketball
//classes Team, Scoreboard //PRIVATE TEAM class members
// Name: Gerardo Duron  Class: Pro. Fundimentals II
// Date: 4/13/2020  Teacher: Dr. T
#include <iostream>
#include <unistd.h> //for sleep command
#include <string>
#include <iomanip>
#include "Timer.h"
using namespace std; 

class Team
{
  private: 
    int score; 
    int fouls; 
    string name, name1, City, City1; 
    bool bonusFirstHalf;
    bool bonusSecondHalf;
    
  public: 
    Team()//default constructor  
    {
      score = 0;
      fouls = 0; 
      name = "default name";
      name1 = "default name";
      bonusFirstHalf = 0;
      bonusSecondHalf = 0;
      City = "default";
      City1 = "default";
    }  
    void setScore(int s) { score = s; }
    void setFouls(int f) { fouls = f; }
    void setName(string n) { name = n; }
    void setName1(string n1) { name1 = n1; }
    void setbonusFirstHalf(bool bns1) { bonusFirstHalf = bns1; }
    void setbonusSecondHalf(bool bns2) { bonusSecondHalf = bns2; }
    void setCity(string C) { City = C; }
    void setCity1(string C1) { City1 = C1; }
    double getScore() const { return score; }
    double getFouls() const { return fouls; }
    double getbonusFirsthalf() const { return bonusFirstHalf; }
    double getbonusSecondHalf() const { return bonusSecondHalf; }
    string getName() const { return name; }
    string getName1() const { return name1; }
    string getCity() const { return City; }
    string getCity1() const { return City1; }
};

class Scoreboard
{
  private: 
    int Down;
    bool poss; //true = home, false = visitor 
    Team team1; //double dot notation to get its data
    Team team2; //double dot notation to get its data
    int playerNumber;
    int YrdsToGo;
    int playerFouls;
    int minutes;
    int homeBall;
    int visitorBall;
    int seconds;
    char decision = '\0';
    int Timer;
    string City;
  public:
    Scoreboard() //defualt constructor 
    {
      Down = 1;
      poss = true; //home team has the ball intially 
      playerNumber = 0;
      playerFouls = 0;
      YrdsToGo = 0;
      minutes = 14;
      seconds = 0; 
      homeBall = 0;
      visitorBall = 0;
      City = " ";
     
      

    }  
    void setDown(int d) { Down = d; }
    void setPoss(bool po) { poss = po; }
    void setTeam1(Team t1) {team1 = t1; } //remember when the object changes
    void setTeam2(Team t2) {team2 = t2; } //remember when the object changes
    void setplayerNumber(int pnum) { playerNumber = pnum; }
    void setplayerFouls(int pfls) { playerFouls = pfls; }
    void setminutes(int m) { minutes = m; }
    void setseconds(int s) { seconds = s; }
    void setCity(int c) { City = c; }
    void setYrdsToGo(int Y) { YrdsToGo = Y; }
    int getDown() const { return Down; }
    void sethomeBall(int hB) { homeBall = hB; }
    void getCity(int C) {City = C; }
    void setvisitorBall(int vB) { visitorBall = vB; }
    bool getPoss() const { return poss; }
    Team getTeam1() const { return team1; }
    Team getTeam2()  const { return team2; }
    int getplayerNumber() const { return playerNumber; }
    int getplayerFouls() const { return playerFouls; }
    int getYrdsToGo() const { return YrdsToGo; }
    int getminutes() const { return minutes; }
    int getseconds() const { return seconds; }
    int gethomeBall() const { return homeBall; }
    int getvisitorBall() const { return visitorBall; }
    void showScoreboard()
    

    {
        system("clear"); //clear the screen 
        
        //Show Scoreboard
         
      
        
        cout << setw(39) << "Scoreboard \n";
        for(int i = 0; i<23; i++) { cout << "---"; }
      
      
    
        cout << setw(12) << "(H)" << setw(46) << "(V) " << endl; 
        cout << setw(17) << team1.getName() << setw(45) << team2.getName1() << endl;
        cout << setw(17) << team1.getCity() << setw(45) << team2.getCity1() << endl;
        cout << setw(14) << "Score:" << setw(45) << "Score:" << endl; 
        cout << setw(11) << team1.getScore() << setw(45) << team2.getScore() << endl;
        cout << setw(20) << "Down: " << Down << setw(30) << "To Go: " << getYrdsToGo() << "\n" << endl;
        cout << setw(41) << "Team has the ball" << endl;
        for(int i = 0; i<23; i++) { cout << "---"; }
        cout << "\n";
        
       
    }
};

 //A void function to instantiate and control scoreboard data 
 

void scoreboardControls()
{
  Scoreboard s; //instantiate the the scoreboard object s
  Team tOneMain; //team Object that will become a member of scoreboard S
  Team tTwoMain; //team Object that will become a member of scoreboard S
  char decision = '\0';
  int newScore = 0; 
  string newName = ""; 
  string newName1 = "";
  string City = "";
  string City1 = "";
  


  s.setTeam1(tOneMain); // placed update Team1 object in s
  s.setTeam1(tTwoMain); // placed update Team2 object in s

  //cout << "\n Period here " << s.getPeriod() << endl; 
  //cout << "\n Team 1 intial name: " << s.getTeam1().getName() << endl; 
  

  //work with the scoreboard and menu 
  do
  {
        //system("clear"); //clear the screen 
        //show the scoreboard and clear the screen each time 
        s.showScoreboard();
       
       //Menu options for the user 
        cout << "Menu: " << endl; 
        cout << "A. Update Home Team Name: " << endl; 
        cout << "B. Update Home Team City: " << endl;
        cout << "c. Update Home Team Score: " << endl; 
        cout << "D. Update Visiting Team Name: " << endl;
        cout << "E. Update Visitng Team City: " << endl;
        cout << "F. Update Visiting Team Score: " << endl; 
        cout << "G. Update Ball Posession: " << endl;
        cout << "X. To Exit" << endl; 
        cin >> decision; 

        if(decision == 'a' || decision == 'A')
        {
          cout << "Home Team Name. \n";
          cout << "What is the new Name? > ";
          cin >> newName; 
          tOneMain.setName(newName);
          cout << "\nUpdating new Name for Home Team to..." << tOneMain.getName() << endl;   
          sleep(3); //pause 3 seconds. 
          
        }
        else if(decision == 'b' || decision == 'B')
        {
          cout << "Set Home Team City: ";
          cin >> City;
          tOneMain.setCity(City);
          cout << "Upadating new City to..." << tOneMain.getCity() << endl;
          sleep(3); // paused for 3 seconds 
        }
        else if(decision == 'c' || decision == 'C')
        {
          cout << "Set Home Team Score: ";
          cin >> newScore;
          tOneMain.setScore(newScore);
          cout << "Upadating new Score to..." << tOneMain.getScore() << endl;
          sleep(3); // paused for 3 seconds 
        }
        else if(decision == 'd' || decision == 'D')
        {
          cout << "Visiting Team Name update. \n";
          cout << "What is the new Name? > ";
          cin >> newName1; 
          tTwoMain.setName1(newName1);
          cout << "\nUpdating new name for Visiting Team to..." << tTwoMain.getName1() << endl;
          sleep(3); //pause 3 seconds. 
        }
        else if(decision == 'e' || decision == 'E')
        {
          cout << "Visiting Team City. \n";
          cin >> City1; 
          tTwoMain.setCity1(City1);
          cout << "\nUpdating new City to..." << tTwoMain.getCity1() << endl;
          sleep(3); //pause 3 seconds. 
        }
        else if(decision == 'f' || decision == 'F')
        {
          cout << "Set Visiting Team Score: ";
          cin >> newScore;
          tTwoMain.setScore(newScore);
          cout << "Upadating new Score to..." << tTwoMain.getScore() << endl;
          sleep(3); // paused for 3 seconds 
        }
        else if(decision == 'x' || decision == 'X')
        {
          cout << "\nEXIT. Go Mavs!!!" << endl; 
        }

        s.setTeam1(tOneMain); //setTeam1 to the latest data 
        s.setTeam2(tTwoMain); //setTeam2 to the latest data 
      
        }while(decision != 'x' && decision != 'X');  

    
}



int main() 
{
   
   scoreboardControls(); //run the scoreboard processes and menus
   
  return 0; 
}