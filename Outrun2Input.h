/*This file is part of FFB Arcade Plugin GUI.
FFB Arcade Plugin GUI is free software : you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
FFB Arcade Plugin GUI is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with FFB Arcade Plugin GUI.If not, see < https://www.gnu.org/licenses/>.
*/

#pragma once
#include <Windows.h>
#include "Helper.h"

namespace FFBPluginGUI {

	public ref class Outrun2Input : Helper
	{
	public:
		Outrun2Input(MetroForm ^obj1)
		{
			this->obj = obj1;
			this->InitializeComponent();
		}

	private:
		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoAddShortCheckBox("ChangeGearsViaPlugin", L"Enable Gear Change", L"Enable to change gears");

			this->AutoAddLongTextBox(L"Set or remove button configuration below", L"Click then press any button");
			this->AutoAddShortTextBox(L"Device Select Input", L"Button names for device, click below to set input for device");
			this->AutoAddShortTextBox(L"Button Number", L"Button number set in FFBPlugin.ini for device");

			this->AutoAddLongInputSelect("Button", "Gear1", L"Gear 1");
			this->AutoAddLongInputSelect("Button", "Gear2", L"Gear 2");
			this->AutoAddLongInputSelect("Button", "Gear3", L"Gear 3");
			this->AutoAddLongInputSelect("Button", "Gear4", L"Gear 4");
			this->AutoAddLongInputSelect("Button", "Gear5", L"Gear 5");
			this->AutoAddLongInputSelect("Button", "Gear6", L"Gear 6");

			this->Init();
		}
	};
}
