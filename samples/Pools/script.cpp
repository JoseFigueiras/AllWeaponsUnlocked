/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#include "script.h"
#include <string>
#include <vector>
#include <math.h>

#define PLAYER_ID 0		// value for type Player that represents the player

void update()
{

}

void main()
{
	// Unlock
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xA2719263), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xF9FBAEBE), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xB5C5D8F1), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xD872AB0A), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x1EC181D9), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x30E5211A), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x8BD282A4), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x8D4BE52), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x453467D1), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xF4C67A9E), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x33B2D208), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x2D880572), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x356951B), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xD8EFBC17), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x238A339), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x88394C06), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xC80FDF53), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x169F59F7), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xDB21AC8C), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x6DFA071B), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xF62FB3A3), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xF5175BA1), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x6DFE44AB), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xD853C801), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xCE3C31A4), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xBE8D2666), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x791BBD2C), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xB4774D3D), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xA5E972D7), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xFA4B2D47), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xD44A5A04), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x2C8DBB17), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xA6FE9435), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x1EAA7376), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xFD9B510B), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xCACE760E), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x514B39A1), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x39B815A2), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xFA66468E), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xC9622757), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xBE76397C), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x1D7D0737), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x8FAE73BB), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x2F3ECD37), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xC9095426), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x21556EC2), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x9DD839AE), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x2300C65), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xD427AD), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xE9245D38), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x49F6BE32), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x8384D5FE), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x7BD9C820), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xD2718D48), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xAF5EEF08), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x3EECE288), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x64514239), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x99496406), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x8BA6AF0A), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x46E97B10), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x797FBF5), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x772C8DD6), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x7BBD1FF6), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x63F46DE6), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xA84762EC), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xDDF7BC1E), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x20D13FF), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x1765A8F8), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x657065D6), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x8580C63E), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x95B24592), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x31B7B9FE), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x88A8505C), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x7067E7A7), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x1C02870C), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x28950C71), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x23C706CD), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xE195D259), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xA64DAA5E), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x4A59E501), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x7A8A724A), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xF6687C5A), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xC3662B7D), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xABA87754), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xE1D2B317), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x6D9BB970), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x63CA782A), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x53944780), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xF79190B4), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x2BC12CDA), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xDA54DD53), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x1086D041), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xC45B2DE), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x14D3F94D), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x67DC3FDE), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x3155643F), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x9E12A01), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x21CCCA44), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xEF32A25D), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xBCC63763), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x8F0FDE0E), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x2A5CF9D6), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xE470B7AD), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x74DC40ED), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x16D655F7), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xF5E4207F), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x247E783), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x4AAE5FFA), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x2250E150), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x4E328256), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x7F23B6C7), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0xCC4588BD), true);
	UNLOCK::UNLOCK_SET_UNLOCKED(WEAPON::_GET_WEAPON_UNLOCK(0x76D4FAB), true);

	

	// Unlock visibility
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xA2719263), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xF9FBAEBE), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xB5C5D8F1), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xD872AB0A), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x1EC181D9), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x30E5211A), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x8BD282A4), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x8D4BE52), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x453467D1), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xF4C67A9E), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x33B2D208), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x2D880572), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x356951B), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xD8EFBC17), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x238A339), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x88394C06), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xC80FDF53), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x169F59F7), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xDB21AC8C), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x6DFA071B), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xF62FB3A3), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xF5175BA1), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x6DFE44AB), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xD853C801), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xCE3C31A4), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xBE8D2666), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x791BBD2C), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xB4774D3D), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xA5E972D7), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xFA4B2D47), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xD44A5A04), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x2C8DBB17), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xA6FE9435), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x1EAA7376), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xFD9B510B), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xCACE760E), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x514B39A1), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x39B815A2), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xFA66468E), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xC9622757), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xBE76397C), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x1D7D0737), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x8FAE73BB), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x2F3ECD37), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xC9095426), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x21556EC2), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x9DD839AE), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x2300C65), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xD427AD), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xE9245D38), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x49F6BE32), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x8384D5FE), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x7BD9C820), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xD2718D48), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xAF5EEF08), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x3EECE288), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x64514239), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x99496406), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x8BA6AF0A), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x46E97B10), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x797FBF5), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x772C8DD6), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x7BBD1FF6), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x63F46DE6), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xA84762EC), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xDDF7BC1E), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x20D13FF), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x1765A8F8), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x657065D6), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x8580C63E), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x95B24592), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x31B7B9FE), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x88A8505C), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x7067E7A7), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x1C02870C), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x28950C71), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x23C706CD), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xE195D259), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xA64DAA5E), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x4A59E501), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x7A8A724A), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xF6687C5A), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xC3662B7D), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xABA87754), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xE1D2B317), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x6D9BB970), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x63CA782A), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x53944780), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xF79190B4), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x2BC12CDA), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xDA54DD53), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x1086D041), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xC45B2DE), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x14D3F94D), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x67DC3FDE), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x3155643F), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x9E12A01), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x21CCCA44), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xEF32A25D), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xBCC63763), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x8F0FDE0E), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x2A5CF9D6), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xE470B7AD), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x74DC40ED), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x16D655F7), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xF5E4207F), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x247E783), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x4AAE5FFA), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x2250E150), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x4E328256), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x7F23B6C7), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0xCC4588BD), true);
	UNLOCK::UNLOCK_SET_VISIBLE(WEAPON::_GET_WEAPON_UNLOCK(0x76D4FAB), true);


	while (true)
	{
		update();
		WAIT(0);
	}
}

void ScriptMain()
{	
	srand(GetTickCount());
	main();
}
