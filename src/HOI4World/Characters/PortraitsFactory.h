#ifndef HOI4_CHARACTERS_PORTRAITS_FACTORY_H
#define HOI4_CHARACTERS_PORTRAITS_FACTORY_H



#include "external/common_items/ConvenientParser.h"
#include "src/HOI4World/Characters/Portrait.h"
#include "src/HOI4World/Characters/PortraitTypeFactory.h"
#include <vector>



namespace HoI4
{


class PortraitsFactory: commonItems::parser
{
  public:
	PortraitsFactory();

	std::vector<Portrait> importPortraits(std::istream& input);

  private:
	PortraitTypeFactory portraitTypeFactory;

	std::vector<Portrait> portraits_;
};

} // namespace HoI4



#endif // HOI4_CHARACTERS_PORTRAITS_FACTORY_H