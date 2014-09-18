/* SpaceportPanel.h
Copyright (c) 2014 by Michael Zahniser

Endless Sky is free software: you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later version.

Endless Sky is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.
*/

#ifndef SPACEPORT_PANEL_H_
#define SPACEPORT_PANEL_H_

#include "Panel.h"

#include "WrappedText.h"

#include <string>

class PlayerInfo;



// GUI panel to be shown when you are in a spaceport.
class SpaceportPanel : public Panel {
public:
	SpaceportPanel(PlayerInfo &player);
	
	virtual void Step();
	virtual void Draw() const;
	
	
private:
	PlayerInfo &player;
	WrappedText text;
};



#endif
