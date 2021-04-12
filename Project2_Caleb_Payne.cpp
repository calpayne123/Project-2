#include <iostream>
#include <iomanip>
// A program designed to determine how good your computer specs are.
using namespace std;
int main()
{
	double graphicsCardSpeed, processorSpeed, processorCores;
	int selection, computerAmt;
	// Identifiers
	
		string title = "Computer Hardware Graphics Quality Recommendation Tool"; 
	cout << title << endl;
	
	cout << "How many computers do you wish to enter information for? "; //Displays question
	cin >> computerAmt;
	if (computerAmt <= 0)
	{
		cout << "Invalid number of computers. The program will terminate.";
		return 0;
	}
	
	cout << "How many megahertz does your graphics card have? "; // Displays question
	cin >> graphicsCardSpeed; // Takes input
	if (graphicsCardSpeed < 800 || graphicsCardSpeed > 2000)
	{
		cout << "Invalid input.";
		return 0;
	}
	
	cout << "How many megahertz does your processor have? "; // Displays question
	cin >> processorSpeed; // Takes input
	if (processorSpeed < 1000 || processorSpeed > 5500)
	{
		cout << "Invalid input.";
		return 0;
	}
	
	cout << "How many cores does your processor have? "; // Displays question
	cin >> processorCores; // Takes input
	if (processorCores < 1 || processorCores > 16)
	{
		cout << "Invalid input.";
		return 0;
	}
	
	
	cout << "Enter 1 for 1280x720 resolution." << endl;
	cout << "Enter 2 for 1920x1080 resolution." << endl;
	cout << "Enter 3 for 2560x1440 resolution." << endl;
	cout << "Enter 4 for 3840x2160 resolution." << endl;
	cout << "Enter -1 to quit.";
	cin >> selection;
	switch (selection) // Creates a menu to choose resolution
	{
		case 1: {1;
			break;
		}
		case 2: {.75;
			break;
		}
		case 3: {.55;
			break;
		}
		case 4: {.35;
			break;
		case -1: {return 0;
			break;
		}	
			
		}
	}
	
	long performanceScore = ((5*graphicsCardSpeed)+(processorCores*processorSpeed)) * selection; // Determines the performance score based of of the users selection in the previous menu
	
	if (performanceScore>17000);
	string recommenededGraphics = "Ultra";
	
	if (17000>performanceScore>15000);
	recommenededGraphics = "High";
	
	if (15000>performanceScore>13000);
	recommenededGraphics = "Medium";
	
	if (13000>performanceScore>11000);
	recommenededGraphics = "Low";
	
	if (performanceScore<11000);
	recommenededGraphics = "Unable To Play";
	
	
	cout << "Graphics card clockspeed in megahertz: " << graphicsCardSpeed << endl; //Displays calculations
	
	cout << "Processor clockspeed in megahertz: " << processorSpeed << endl;
	
	cout << "Number of cores in processor: " << processorCores << endl;
	
	if (selection = 1) cout << "1280x720\n";
	if (selection = 2) cout << "1920x1080\n";
	if (selection = 3) cout << "2560x1440\n";
	if (selection = 4) cout << "3840x2160\n";
	
	cout << setw(6) << "Performance score: " << performanceScore << endl;
	
	return 0;
}
