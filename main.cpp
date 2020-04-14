//Dr_T helping students get started on Unit 4 scoreboard
//Using object oriented coding for a scoreboard:  Basketball
//classes Team, Scoreboard //PRIVATE TEAM class members
// Name: Gerardo Duron  Class: Pro. Fundimentals II
// Date: 4/13/2020  Teacher: Dr. T
#include <iostream>
#include <unistd.h> //for sleep command
#include <string>
#include <iomanip>
using namespace std; 

class Team
{
  private: 
    int score; 
    int fouls; 
    string name; 
    bool bonusFirstHalf;
    bool bonusSecondHalf;
  public: 
    Team()//default constructor  
    {
      score = 0;
      fouls = 0; 
      name = "default name";
      bonusFirstHalf = 0;
      bonusSecondHalf = 0;
    }  
    void setScore(int s) { score = s; }
    void setFouls(int f) { fouls = f; }
    void setName(string n) { name = n; }
    void setbonusFirstHalf(bool bns1) { bonusFirstHalf = bns1; }
    void setbonusSecondHalf(bool bns2) { bonusSecondHalf = bns2; }
    double getScore() const { return score; }
    double getFouls() const { return fouls; }
    double getbonusFirsthalf() const { return bonusFirstHalf; }
    double getbonusSecondHalf() const { return bonusSecondHalf; }
    string getName() const { return name; }
};

class Scoreboard
{
  private: 
    int period;
    bool poss; //true = home, false = visitor 
    Team team1; //double dot notation to get its data
    Team team2; //double dot notation to get its data
    int playerNumber;
    int playerFouls;
    int minutes;
    int seconds;
  public:
    Scoreboard() //defualt constructor 
    {
      period = 1;
      poss = true; //home team has the ball intially 
      playerNumber = 0;
      playerFouls = 0;
      minutes = 14;
      seconds = 0; 

    }  
    void setPeriod(int p) { period = p; }
    void setPoss(bool po) { poss = po; }
    void setTeam1(Team t1) {team1 = t1; } //remember when the object changes
    void setTeam2(Team t2) {team2 = t2; } //remember when the object changes
    void setplayerNumber(int pnum) { playerNumber = pnum; }
    void setplayerFouls(int pfls) { playerFouls = pfls; }
    void setminutes(int m) { minutes = m; }
    void setseconds(int s) { seconds = s; }
    int getPeriod() const { return period; }
    bool getPoss() const { return poss; }
    Team getTeam1() const { return team1; }
    Team getTeam2()  const { return team2; }
    int getplayerNumber() const { return playerNumber; }
    int getplayerFouls() const { return playerFouls; }
    int getminutes() const { return minutes; }
    int getseconds() const { return seconds; }
    void showScoreboard()
    {


        system("clear"); //clear the screen 
        
        //Show Scoreboard
        cout << "\t\t\t\t\t\tScoreboard Internal\n";
        for(int i = 0; i<25; i++) { cout << "---"; }
        cout << "\t\t\t\t\t" << endl;
         cout << "\tTeam 1 Name: \n" << "\t" << team1.getName() << endl;
        cout << "\tTeam 1 Score: \n" << "\t\t" << team1.getScore() << endl;
        cout << "\t\t\t\t\t\t\tPeriod: " << period << endl; 

        //dealing with Boolean data
        if(poss == true)
        {
          cout << "\t\t\t\t\t\tHome team has the ball" << endl; 
          for(int i = 0; i<25; i++) { cout << "---"; }
          cout << "\n" << endl; 
        }
        else
        {
          cout << "Visiting team has the ball" << endl; 
        }

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

  s.setTeam1(tOneMain); // placed update Team1 object in s
  s.setTeam1(tTwoMain); // placed update Team2 object in s

  cout << "\n Period here " << s.getPeriod() << endl; 
  cout << "\n Team 1 intial name: " << s.getTeam1().getName() << endl; 
  

  //work with the scoreboard and menu 
  do
  {
       // system("clear"); //clear the screen 
        //show the scoreboard and clear the screen each time 
        s.showScoreboard();
       
       //Menu options for the user 
        cout << "Menu: " << endl; 
        cout << "A. Update Team 1 Score" << endl; 
         cout << "B. Update Team 2 Name" << endl; 
        cout << "X. To Exit" << endl; 
        cin >> decision; 

        if(decision == 'a' || decision == 'A')
        {
          cout << "Team 1 score update. \n";
          cout << "What is the new score? > ";
          cin >> newScore; 
          tOneMain.setScore(newScore);
          cout << "\nUpdating new score for Team1 to..." << tOneMain.getScore() << endl;   
          sleep(3); //pause 3 seconds. 
          
        }
        else if(decision == 'b' || decision == 'B')
        {
          cout << "Team 1 NAME update. \n";
          cout << "What is the new Name? > ";
          cin >> newName; 
          tOneMain.setName(newName);
          cout << "\nUpdating new name for Team1 to..." << tOneMain.getName() << endl;
          sleep(3); //pause 3 seconds. 
          
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