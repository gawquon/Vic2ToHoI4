#ifndef VIC2_ARMY_H_
#define VIC2_ARMY_H_



#include <vector>
#include <string>
#include "Parser.h"



namespace Vic2
{

class Regiment: commonItems::parser // also Ship
{
	public:
		explicit Regiment(std::istream& theStream);

		std::string getName() const { return name; }
		std::string getType() const { return type; }
		double getStrength() const { return strength; }
		double getOrganization() const { return organization; }
		double getExperience() const { return experience; }

	private:
		Regiment(const Regiment&) = delete;
		Regiment& operator=(const Regiment&) = delete;

		std::string name = "";
		std::string type = "";
		double strength = 0.0;
		double organization = 0.0;
		double experience = 0.0;
                int pop_id = 0;
};


class Army: commonItems::parser // also Navy
{
	public:
		explicit Army(const std::string& type, std::istream& theStream);

		std::string getName() const { return name; }
		bool isNavy() const { return navy; }
		double getSupplies() const { return supplies; }
		int isAtSea() const { return atSea; }
		int getLocation() const { return location; }
		std::vector<Regiment*> getRegiments() const { return regiments; }
		std::vector<Army> getTransportedArmies() const { return transportedArmies; }

	private:
		std::string name = "";
		int location = -1;
		std::vector<Regiment*> regiments;
		double supplies = 0.0;
		int atSea = 0;
		bool navy = false;
		std::vector<Army> transportedArmies;
};

}



#endif // VIC2_ARMY_H_
