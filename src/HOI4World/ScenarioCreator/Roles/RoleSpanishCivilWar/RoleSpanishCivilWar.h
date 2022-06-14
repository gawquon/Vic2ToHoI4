#ifndef ROLE_SPANISH_CIVIL_WAR_H
#define ROLE_SPANISH_CIVIL_WAR_H

#include "src/HOI4World/ScenarioCreator/Roles/Role.h"

class RoleSpanishCivilWar: public Role
{
  public:
	RoleSpanishCivilWar();

	bool isValid(const HoI4::Country& country) const;
	void calculateFit(const HoI4::Country& country);
	std::shared_ptr<ScenarioMod> apply(std::shared_ptr<HoI4::Country> country);

  private:
};
#endif // ROLE_SPANISH_CIVIL_WAR_H