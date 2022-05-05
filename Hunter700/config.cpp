class CfgPatches
{
	class Hunter_700
	{
		units[]=
		{
			
		};
		weapons[]={"Hunter_700"};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		
		
		};
	};
};


class CfgMods
{
	class Hunter_700
	{
		dir="Hunter700";
		type="mod";
		
	};
};




class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	
	class SVD;
	
	class Hunter_700: SVD
	{
		scope=2;
		displayName="Hunter700";
		descriptionShort=" 50 cal semi auto converted rifle, Probably Russian.";
		model="Hunter700\Hunter_700.p3d";
		attachments[] = {"weaponOpticsHunting"};
		chamberableFrom[]=
		{
			"Ammo_50cal"
		};
		
		
		
		
		magazines[]={"Mag_Hunter700_10Rnd"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Hunter700\data\Hunter_700_co.paa" };
		hiddenSelectionsMaterials[] = {"Hunter700\data\Hunter_700.rvmat"};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Hunter700\data\Hunter_700.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Hunter700\data\Hunter_700.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Hunter700\data\Hunter_700_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Hunter700\data\Hunter_700_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Hunter700\data\Hunter_700_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		
		
		
	};
	
	
	
	
};

class CfgMagazines
{
	
	
	class Ammo_308Win;
	class Ammo_50cal: Ammo_308Win
	{
		scope = 2;
		displayName = "50cal Round";
		descriptionShort = ".50 cal Round for the Hunter 700";
		model = "DZ\weapons\ammunition\308win_looserounds.p3d";
		weight = 10;
		count = 20;
		ammo = "Bullet_50Cal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"dz\weapons\attachments\data\mosinclip.rvmat"}},{0.7,{"dz\weapons\attachments\data\mosinclip.rvmat"}},{0.5,{"dz\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.3,{"dz\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.0,{"dz\weapons\attachments\data\mosinclip_destruct.rvmat"}}};
				};
			};
		};
	};
	
	
	
	class Mag_SVD_10Rnd;
	class Mag_Hunter700_10Rnd: Mag_SVD_10Rnd
	{
		scope=2;
		displayName="10Rnd Hunter700 Magazine";
		descriptionShort="10 rounds Magazine for the Hunter 700, loaded with 50cal rounds.";
		model="Hunter700\Mag_Hunter700_10Rnd.p3d";
		weight=40;
		itemSize[]={2,2};
		count=10;
		ammo="Bullet_50Cal";
        ammoItems[]={"Ammo_50cal"};
		
		
		
		
		
		
	};
};

