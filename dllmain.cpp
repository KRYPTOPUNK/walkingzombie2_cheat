// dllmain.cpp: определяет точку входа для приложения DLL.
#include <Windows.h>
#include "SDK.h"
#include "WalkingZombie2_Hack.h"

std::vector<unsigned> offsets_silver_coin = { 0x44,0x80,0x0,0x20,0x84,0x4,0x154,0x8,0x6C,0x194,0x280 };
std::vector<unsigned> offsets_of_player_data = { 0x44,0x80,0x0,0x20,0x84,0x4,0x154,0x8,0x6C,0x194,0x0};
std::vector<unsigned> offset_to_main_ptr{ 0xE68,0x60,0x20,0x1C,0x1C,0x1C,0x0 };
int weapon_skin_id_1 = 0;
int weapon_sight_1 = 1;
int weapon_skin_id_2 = 0;
int weapon_sight_2 = 1;
DWORD WINAPI MainThread(LPVOID param)
{	
	unsigned base_address = reinterpret_cast<unsigned>(GetModuleHandle(TEXT("UnityPlayer.dll"))) + 0x0125BA70; // базовый адресс для плеер даты
	unsigned base_address_for_main_ptr = reinterpret_cast<unsigned>(GetModuleHandle(TEXT("mono-2.0-bdwgc.dll"))) + 0x00074DAC; // базовый адрес для мейн_птр
	
	CPlayerDataSerializable* PlayerData = reinterpret_cast<CPlayerDataSerializable*>(FindAddressByOffsets(base_address, offsets_of_player_data));
	MainPTR* PlayerMainPTR = reinterpret_cast<MainPTR*>(FindAddressByOffsets(base_address_for_main_ptr, offset_to_main_ptr));
	while (true)
	{
		if (GetAsyncKeyState(VK_INSERT) & 1) // деньги 
		{
			int money_value = 1000000 ^ 444444;
			PlayerData->CoinsGold_real = money_value;
			PlayerData->CoinsSilver_reat = money_value;
		}
		if (GetAsyncKeyState(VK_DELETE) & 1) // перки
		{
			PlayerData->FreeSkillsPoints_real = 10000 ^ 444444;
			PlayerData->FreePerksPoints_real = 10000 ^ 444444;
		}
		if (GetAsyncKeyState(VK_END) & 1) // патроны
		{
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->LoadedAmmoCount = 10000;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->LoadedAmmoCount = 10000;
		}
		if (GetAsyncKeyState(VK_F1) & 1) // характеристики первого оружия 
		{
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->WeaponItemConfig->damage = 100000;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->WeaponItemConfig->attackRate = 0.1f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->WeaponItemConfig->hitForce = 10000.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->WeaponItemConfig->idleSpreadModificator = 0.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->WeaponItemConfig->walkSpreadModificator = 0.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->WeaponItemConfig->sprintSpreadModificator = 0.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->WeaponItemConfig->airSpreadModificator = 0.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->WeaponItemConfig->crouchSpreadModificator = 0.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->WeaponItemData->DamageCoef = 1000.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->WeaponItemData->ReloatTimeCoef = 0.f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->AmmoData->Count = INT_MAX;
			
		}
		if (GetAsyncKeyState(VK_F2) & 1) // характеристики второго оружия 
		{
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->WeaponItemConfig->damage = 100000;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->WeaponItemConfig->attackRate = 0.1f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->WeaponItemConfig->hitForce = 10000.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->WeaponItemConfig->idleSpreadModificator = 0.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->WeaponItemConfig->walkSpreadModificator = 0.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->WeaponItemConfig->sprintSpreadModificator = 0.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->WeaponItemConfig->airSpreadModificator = 0.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->WeaponItemConfig->crouchSpreadModificator = 0.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->WeaponItemData->DamageCoef = 1000.0f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->WeaponItemData->ReloatTimeCoef = 0.f;
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->AmmoData->Count = INT_MAX;

		}
		if (GetAsyncKeyState(VK_F3) & 1) // скин первого оружия 
		{
			if (weapon_skin_id_1 < 30)
			{
				weapon_skin_id_1 += 1;
			}
			else
			{
				weapon_skin_id_1 = 0;
			}
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->WeaponItemData->Skin = weapon_skin_id_1;
		}
		if (GetAsyncKeyState(VK_F4) & 1) // прицел первого оружия
		{
			if (weapon_sight_1 > 10)
			{
				weapon_sight_1 += 1;
			}
			else
			{
				weapon_sight_1 = 1;
			}
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->FirstSlot->WeaponItemData->Sight = weapon_sight_1;
		}
		if (GetAsyncKeyState(VK_F5) & 1) // скин второго оружия 
		{
			if (weapon_skin_id_2 < 30)
			{
				weapon_skin_id_2 += 1;
			}
			else
			{
				weapon_skin_id_2 = 0;
			}
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->WeaponItemData->Skin = weapon_skin_id_2;
		}
		if (GetAsyncKeyState(VK_F6) & 1) // прицел второго оружия
		{
			if (weapon_sight_1 > 10)
			{
				weapon_sight_1 += 1;
			}
			else
			{
				weapon_sight_1 = 1;
			}
			PlayerMainPTR->ptrtoptrtoptr->ptrtoptr->PtrToPtrToCArmory->ptr->slots->SlotInfosPointers->SecondSlot->WeaponItemData->Sight = weapon_sight_2;
		}
	}
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
	case DLL_PROCESS_ATTACH: CreateThread(nullptr, 0, (PTHREAD_START_ROUTINE)MainThread, hModule, 0,nullptr);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

