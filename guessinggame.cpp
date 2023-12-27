#include <iostream>
#include <random>
using namespace std;
int main(){
    cout<<"What is the upper limit for the random number?"<<endl;
    int upperLimit,attempts;
    cin>>upperLimit;
    // take current calender time as a seed to the srand function.
    srand(time(0));
    int generatedNumber = rand()%upperLimit+1;
    cout<<"Number has been generated...."<<endl;
    int guessNumber;
    while(true){
        cout<<"Guess the number: ";
        cin>>guessNumber;
        if(guessNumber==generatedNumber){
            cout<<"Huraay, You have guessed the correct number"<<endl;
            attempts++;
            break;
        }
        else if(guessNumber<generatedNumber){
            cout<<"Your should guess higher number."<<endl;
            attempts++;
        }
        else{
            cout<<"You should guess lower number."<<endl;
            attempts++;
        }
    }
    cout<<"Number of Attempts: "<<attempts<<endl;
    
    return 0;
}