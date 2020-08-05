// Created with ReClass.NET 1.2 by KN4CK3R

#include <iostream>
class CPlayerInfo
{
public:
	void* m_CachedPtr; //0x0000
	void* cashed_rootComponent; //0x0004
	char pad_0008[84]; //0x0008
	class SlotInfo* playerData; //0x005C
	class HealthController* playerHealthController; //0x0060
	char pad_0064[12]; //0x0064
	void* onChangePlayerInfo; //0x0070
	char pad_0074[972]; //0x0074
}; //Size: 0x0440

class HealthController
{
public:
	char pad_0000[92]; //0x0000
	void* playerData; //0x005C
	void* cachedEffectCoroutine; //0x0060
	void* continuousHealthEffects; //0x0064
	int32_t currentHealth; //0x0068
	char pad_006C[20]; //0x006C
	bool initialized; //0x0080
	bool pausedEffects; //0x0081
	char pad_0082[2]; //0x0082
	float actualAutoHeal; //0x0084
	char pad_0088[968]; //0x0088
}; //Size: 0x0450

class SlotInfo
{
public:
	char pad_0000[8]; //0x0000
	class CItemData* WeaponData; //0x0008
	class CWeaponItemData* WeaponItemData; //0x000C
	class CConfigWeaponItem* WeaponItemConfig; //0x0010
	class CItemData* AmmoData; //0x0014
	class CConfigAmmoItem* AmmoConfig; //0x0018
	int32_t LoadedAmmoCount; //0x001C
	int32_t RemainingAmmoCount; //0x0020
	int32_t DynamicMagazineSize; //0x0024
	char pad_0028[288]; //0x0028
}; //Size: 0x0148

class CItemData
{
public:
	char pad_0000[8]; //0x0000
	int64_t UId; //0x0008
	int32_t Id; //0x0010
	int32_t Count; //0x0014
}; //Size: 0x0018

class CWeaponItemData
{
public:
	char pad_0000[8]; //0x0000
	void* Skins; //0x0008
	void* Sights; //0x000C
	int32_t Skin; //0x0010
	int32_t Sight; //0x0014
	float DamageCoef; //0x0018
	float AttackRateCoef; //0x001C
	float ReloatTimeCoef; //0x0020
	float MagazineSizeBonus; //0x0024
	float SpreadCoefBonus; //0x0028
	float CriticalDamageCoefBonus; //0x002C
	int32_t DamadeUpgradeLevel; //0x0030
	int32_t AttackRateUpgradeLevel; //0x0034
	int32_t ReloadUpgradeLevel; //0x0038
	int32_t MagazineUpgradeLevel; //0x003C
	int32_t SpreadUpgradeLevel; //0x0040
	int32_t CriticalDamageUpgradeLevel; //0x0044
	char pad_0048[956]; //0x0048
}; //Size: 0x0404

class CConfigWeaponItem
{
public:
	char pad_0000[12]; //0x0000
	void* smallImage; //0x000C
	void* count; //0x0010
	int32_t id; //0x0014
	int32_t inventorySize; //0x0018
	int32_t stackable; //0x001C
	int32_t city; //0x0020
	int32_t cityMax; //0x0024
	int32_t questItem; //0x0028
	int32_t price; //0x002C
	float priceMultiplicator; //0x0030
	float liveCheckpoint; //0x0034
	int32_t chanceToTrader; //0x0038
	float linearPowerCoeff; //0x003C
	float absolutePowerCoeff; //0x0040
	char pad_0044[16]; //0x0044
	int32_t bundleId; //0x0054
	int32_t weaponSkinId; //0x0058
	int32_t weaponItemType; //0x005C
	float dualWeapon; //0x0060
	int32_t damage; //0x0064
	float weaponRange; //0x0068
	float attackRate; //0x006C
	float hitForce; //0x0070
	float hitForceItems; //0x0074
	int32_t crosshair; //0x0078
	float minimumSpread; //0x007C
	float maximumSpread; //0x0080
	float increasePulseSpeed; //0x0084
	float decreasePulseSpeed; //0x0088
	float idleSpreadModificator; //0x008C
	float walkSpreadModificator; //0x0090
	float sprintSpreadModificator; //0x0094
	float aimSpreadModificator; //0x0098
	float airSpreadModificator; //0x009C
	float crouchSpreadModificator; //0x00A0
	float shakeSpeed; //0x00A4
	float shakeDuration; //0x00A8
	float shakeMagnitude; //0x00AC
	char pad_00B0[852]; //0x00B0
}; //Size: 0x0404

class CConfigAmmoItem
{
public:
	char pad_0000[12]; //0x0000
	void* smallImage; //0x000C
	void* count; //0x0010
	int32_t id; //0x0014
	int32_t inventorySize; //0x0018
	int32_t stackable; //0x001C
	int32_t city; //0x0020
	int32_t cityMax; //0x0024
	int32_t questItem; //0x0028
	int32_t price; //0x002C
	float priceMultiplicator; //0x0030
	int32_t liveCheckpoint; //0x0034
	int32_t chanceToTrader; //0x0038
	float linearPowerCoeff; //0x003C
	float absolutePowerCoeff; //0x0040
	int32_t ammoType; //0x0044
	int32_t ammoItemType; //0x0048
	float damageCoeff; //0x004C
}; //Size: 0x0050

class CPlayerDataSerializable
{
public:
	char pad_0000[8]; //0x0000
	void* ActualQuestState; //0x0008
	void* LastActualQuestState; //0x000C
	void* UserName; //0x0010
	void* ClaimedPlayerJourneyMilestoneIds; //0x0014
	void* SeenPlayerJourneyWhatsNextItemIds; //0x0018
	void* PlayerEquipment; //0x001C
	void* PlayerInventoryData; //0x0020
	void* TrunkInventoryData; //0x0024
	void* FoundItems; //0x0028
	void* WeaponDatas; //0x002C
	void* VehicleDatas; //0x0030
	void* RealEstateDatas; //0x0034
	void* TableDatas; //0x0038
	void* BuildingDatas; //0x003C
	void* ActiveCities; //0x0040
	void* VisitedCities; //0x0044
	void* Skills; //0x0048
	void* Perks; //0x004C
	void* TalkingCharacterData; //0x0050
	void* ActiveQuests; //0x0054
	void* doneUniqueEncounters; //0x0058
	void* lastEncounters; //0x005C
	void* RewardedVideoGroupVideoCount; //0x0060
	void* RewardedVideoGroupLastVideoTimeSeconds; //0x0064
	void* BoughtSurvivalPackCityIds; //0x0068
	void* ActualWeaponSpecialOffers; //0x006C
	void* ActualOldWeaponSpecialOffers; //0x0070
	void* ActualArmorSpecialOffer; //0x0074
	void* ActualTwoItemsSpecialOffer; //0x0078
	void* ActualOneItemSpecialOffer; //0x007C
	void* ActualOneItemSpecialOffer2; //0x0080
	void* ActualVehicleSpecialOffer; //0x0084
	void* JustBoughtSpecialOffer; //0x0088
	void* RecievedSpecialOffers; //0x008C
	void* BoughtSpecialOfferIds; //0x0090
	void* RealMoneySpent; //0x0094
	void* WeaponSpecialOffer; //0x0098
	void* ArmorSpecialOffer; //0x009C
	void* TwoItemsSpecialOffer; //0x00A0
	void* OneItemSpecialOffer; //0x00A4
	void* OneItemSpecialOffer2; //0x00A8
	void* BoughtWeaponSpecialOfferConfigs; //0x00AC
	void* BoughtArmorSpecialOfferConfigs; //0x00B0
	void* JustBoughtWeaponSpecialOffer; //0x00B4
	void* JustBoughtArmorSpecialOffer; //0x00B8
	void* JustBoughtTwoItemsSpecialOffer; //0x00BC
	void* JustBoughtOneItemSpecialOffer; //0x00C0
	void* JustBoughtOneItemSpecialOffer2; //0x00C4
	void* ActualWeaponSpecialOffer; //0x00C8
	void* PickedUniqueItems; //0x00CC
	void* Boosts; //0x00D0
	void* SourceBoosts; //0x00D4
	void* DoneTutorialTasks; //0x00D8
	void* CouponeCodes; //0x00DC
	void* GameProgressSave; //0x00E0
	void* BoolValues; //0x00E4
	int32_t Version; //0x00E8
	char pad_00EC[16]; //0x00EC
	int32_t Platform; //0x00FC
	int32_t FirstPlayStartTicks; //0x0100
	char pad_0104[36]; //0x0104
	int32_t Health; //0x0128
	char pad_012C[20]; //0x012C
	int32_t Level; //0x0140
	char pad_0144[16]; //0x0144
	int32_t LastPerkLevel; //0x0154
	char pad_0158[16]; //0x0158
	int32_t Xp; //0x0168
	char pad_016C[16]; //0x016C
	int32_t Karma; //0x017C
	char pad_0180[16]; //0x0180
	int32_t KillCount; //0x0190
	char pad_0194[16]; //0x0194
	int32_t SpentSilverCoins; //0x01A4
	char pad_01A8[16]; //0x01A8
	int32_t HeadshotCount; //0x01B8
	char pad_01BC[16]; //0x01BC
	int8_t Firstblood; //0x01CC
	char pad_01CD[3]; //0x01CD
	int32_t KilometersTraveled; //0x01D0
	char pad_01D4[20]; //0x01D4
	int32_t TreasuresDugCount; //0x01E8
	char pad_01EC[16]; //0x01EC
	int32_t SafesOpenedCount; //0x01FC
	char pad_0200[16]; //0x0200
	int32_t ActualCityId; //0x0210
	int32_t ActualLocationId; //0x0214
	int32_t ActualQuestId; //0x0218
	int32_t LastActualQuestId; //0x021C
	bool NewPlayer; //0x0220
	char pad_0221[3]; //0x0221
	int32_t PlayerJourneyStartingLevel; //0x0224
	char pad_0228[16]; //0x0228
	int32_t PlayerJourneySeenLevel; //0x0238
	char pad_023C[16]; //0x023C
	int32_t PlayerJourneySeenXp; //0x024C
	char pad_0250[16]; //0x0250
	bool CanEscapeQuest; //0x0260
	char pad_0261[3]; //0x0261
	int32_t LastPlayerWeaponSlot; //0x0264
	int32_t CoinsGold; //0x0268
	int32_t CoinsGold_real; //0x026C
	char pad_0270[12]; //0x0270
	int32_t CoinsSilver; //0x027C
	int32_t CoinsSilver_reat; //0x0280
	char pad_0284[12]; //0x0284
	int32_t Gas; //0x0290
	float GasReal; //0x0294
	char pad_0298[16]; //0x0298
	int32_t FreeGasEndTime; //0x02A8
	char pad_02AC[36]; //0x02AC
	int32_t RecievedGoldCoins; //0x02D0
	char pad_02D4[16]; //0x02D4
	int32_t RecievedPerkPoints; //0x02E4
	char pad_02E8[16]; //0x02E8
	int32_t NextItemUId; //0x02F8
	char pad_02FC[76]; //0x02FC
	int32_t VehicleId; //0x0348
	int32_t TablesUseServerTime; //0x034C
	char pad_0350[68]; //0x0350
	int32_t FreeSkillsPoints; //0x0394
	int32_t FreeSkillsPoints_real; //0x0398
	char pad_039C[12]; //0x039C
	int32_t FreePerksPoints; //0x03A8
	int32_t FreePerksPoints_real; //0x03AC
	char pad_03B0[12]; //0x03B0
	int8_t SkillCostRecounted; //0x03BC
	int8_t SeenNewSkills; //0x03BD
	int8_t KarmaFixed; //0x03BE
	int8_t GenerateDoubleCoinsRandomQuest; //0x03BF
	int32_t SelectedQuestTab; //0x03C0
	int32_t SelectedActiveQuestId; //0x03C4
	int32_t SelectedDoneQuestId; //0x03C8
	int8_t AddQuestG1AnalyticsSent; //0x03CC
	int8_t AddQuestWod1AnalyticsSent; //0x03CD
	char pad_03CE[2]; //0x03CE
	int32_t NextGrindLocationVideoTimeTicks; //0x03D0
	char pad_03D4[36]; //0x03D4
	int32_t ShopFreeGasCountdownEndSeconds; //0x03F8
	char pad_03FC[36]; //0x03FC
	int32_t ShopFreeCoinsCountdownEndSeconds; //0x0420
	char pad_0424[36]; //0x0424
	int32_t NextLuckyWheelTimeSeconds; //0x0448
	char pad_044C[36]; //0x044C
	bool LuckyWheelWatchedVideo; //0x0470
	char pad_0471[3]; //0x0471
	int32_t CurrentSurvivalPackCityId; //0x0474
	bool FirstSpecialOffer; //0x0478
	bool GeneratedFirstActualSpecialOffer; //0x0479
	bool CheckedForSteamInapp; //0x047A
	char pad_047B[1]; //0x047B
	int32_t ActualSpecialOfferCity; //0x047C
	bool ShowBestValuePackOffer; //0x0480
	bool SendShopTabsAnalytics; //0x0481
	char pad_0482[2]; //0x0482
	int32_t LastSeenLevel; //0x0484
	int32_t PickedWeaponId; //0x0488
	int32_t PickedMeleeWeaponId; //0x048C
	bool UsedMedical; //0x0490
	bool GotPlayersJourneyReward; //0x0491
	bool PlayedCircuitMiniGame; //0x0492
	bool AdsEnabled; //0x0493
	int32_t BiggerBackpackCount; //0x0494
	int32_t BiggerTrunkCount; //0x0498
	bool HasChuckNorrisPack; //0x049C
	bool HasSchwarzeneggerPack; //0x049D
	bool HasRamboPack; //0x049E
	bool HasBruceLeePack; //0x049F
	bool HasSupermanPack; //0x04A0
	bool HasSteamDlc; //0x04A1
	char pad_04A2[2]; //0x04A2
	int32_t BiggerGasTankCount; //0x04A4
	bool HasReloaded; //0x04A8
	bool HasClickedOnQuest; //0x04A9
	bool OutOfBoundaries; //0x04AA
	char pad_04AB[1]; //0x04AB
	int32_t BoundariesGoldValue; //0x04AC
	char pad_04B0[16]; //0x04B0
	bool PlayerPassedIntroQuest; //0x04C0
	bool WoodlandsIntro; //0x04C1
}; //Size: 0x04C2

class SlotInfoPointers
{
public:
	char pad_0000[28]; //0x0000
	class SlotInfo* FirstSlot; //0x001C
	char pad_0020[12]; //0x0020
	class SlotInfo* SecondSlot; //0x002C
	char pad_0030[16]; //0x0030
}; //Size: 0x0040

class SlotInfoPointers2
{
public:
	char pad_0000[12]; //0x0000
	class SlotInfoPointers* SlotInfosPointers; //0x000C
	char pad_0010[48]; //0x0010
}; //Size: 0x0040

class CArmory
{
public:
	char pad_0000[92]; //0x0000
	class SlotInfoPointers2* slots; //0x005C
	char pad_0060[32]; //0x0060
}; //Size: 0x0080

class PtrToCArmory
{
public:
	char pad_0000[144]; //0x0000
	class CArmory* ptr; //0x0090
	char pad_0094[44]; //0x0094
}; //Size: 0x00C0

class N000007FC
{
public:
	char pad_0000[24]; //0x0000
	class PtrToCArmory* PtrToPtrToCArmory; //0x0018
	char pad_001C[36]; //0x001C
}; //Size: 0x0040

class N00000833
{
public:
	char pad_0000[12]; //0x0000
	class N000007FC* ptrtoptr; //0x000C
	char pad_0010[48]; //0x0010
}; //Size: 0x0040

class MainPTR
{
public:
	char pad_0000[28]; //0x0000
	class N00000833* ptrtoptrtoptr; //0x001C
	char pad_0020[32]; //0x0020
}; //Size: 0x0040