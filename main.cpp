// David Duong
#include <iostream>

using namespace std;

int main() {
	// prompts user for the temperature of the ehtyl alcohol 
	int ethyl_temp;
	cout << "Enter the temperature of the Ethyl Alcohol: ";
	cin >> ethyl_temp;

	cout << "At that temperature Ethyl Alcohol is a ";

	// Declare constants for the freezing and boiling points of ethyl alcohol
	const int ETHYL_FREEZE = -173, ETHYL_BOIL = 172;

	// Checks the user input against the freezing and boiling points and prints the state of matter
	if (ethyl_temp > ETHYL_FREEZE && ethyl_temp < ETHYL_BOIL)
		cout << "liquid" << endl;
	else if (ethyl_temp < ETHYL_FREEZE)
		cout << "solid" << endl;
	else
		cout << "gas" << endl;

	// prompts user for the temperature of the mercury
	int mercury_temp;
	cout << "Enter the temperature of the Mercury: ";
	cin >> mercury_temp;

	cout << "At that temperature Mercury is a ";

	// Declare constants for the freezing and boiling points of mercury
	const int MERCURY_FREEZE = -38, MERCURY_BOIL = 676;

	// Checks the user input against the freezing and boiling points and prints the state of matter
	if (mercury_temp > MERCURY_FREEZE && mercury_temp < MERCURY_BOIL)
		cout << "liquid" << endl;
	else if (mercury_temp < MERCURY_FREEZE)
		cout << "solid" << endl;
	else
		cout << "gas" << endl;

	// prompts user for the temperature of the oxygen
	int oxygen_temp;
	cout << "Enter the temperature of the Oxygen: ";
	cin >> oxygen_temp;

	cout << "At that temperature Oxygen is a ";

	// Declare constants for the freezing and boiling points of oxygen
	const int OXYGEN_FREEZE = -362, OXYGEN_BOIL = -306;

	// Checks the user input against the freezing and boiling points and prints the state of matter
	if (oxygen_temp > OXYGEN_FREEZE && oxygen_temp < OXYGEN_BOIL)
		cout << "liquid" << endl;
	else if (oxygen_temp < OXYGEN_FREEZE)
		cout << "solid" << endl;
	else
		cout << "gas" << endl;

	// prompts user for the temperature of the water
	int water_temp;
	cout << "Enter the temperature of the Water: ";
	cin >> water_temp;

	cout << "At that temperature Water is a ";

	// Declare constants for the freezing and boiling points of water
	const int WATER_FREEZE = 32, WATER_BOIL = 212;

	// Checks the user input against the freezing and boiling points and prints the state of matter
	if (water_temp > WATER_FREEZE && water_temp < WATER_BOIL)
		cout << "liquid" << endl;
	else if (water_temp < WATER_FREEZE)
		cout << "solid" << endl;
	else
		cout << "gas" << endl;

	cout << endl;
	system("pause");
	return 0;
}
