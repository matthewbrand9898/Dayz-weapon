

class CfgPatches
{
	class Hunter700_Projectiles
	{
		units[] = {"Bullet_50Cal"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Projectiles"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_50Cal
	{
		name = "Bullet_50Cal";
	};
};
class CfgAmmo
{
	class Bullet_308Win;
	class Bullet_50Cal: Bullet_308Win
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_762";
		spawnPileType = "Ammo_50cal";
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 1800;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.00025;
		caliber = 1.92;
		deflecting = 10;
		damageBarrel = 6;
		damageBarrelDestroyed = 50;
		initSpeed = 1800;
		weight = 0.0199;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 2520;
			};
			class Blood
			{
				damage = 160;
			};
			class Shock
			{
				damage = 180;
			};
		};
		class NoiseHit
		{
			strength = 69;
			type = "shot";
		};
	};
};
