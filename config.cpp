#include "Defines.hpp"

class cfgPatches 
{
    class NLD_Drones
    {
        name=NAME;
        author=AUTHOR;
        url="https://github.com/BrainlessBen/NLD_Drones";
        requiredVersion=REQVER;
        requiredAddons[]=
        {
			"A3_Drones_F",
			"ArmaFPV_Data"
        };
        units[]={};
		weapons[]={};
    };
};

class CfgFunctions
{
	class BEN
	{
		class Drone
		{
			file="\NLD_Drones\functions\Drones";
			class dissassemble{};
			class pickup{};
			class deploy{};
			class droneInit
			{
				postInit=1;
			};
		};
		class FPV
		{
			file="\NLD_Drones\functions\FPV";
			class createDialog{};
			class getSignal{};
			class handleBattery{};
			class handleSignal{};
			class handleSettings{};
			class handleTime{};
			class onDestroy{};
			class onSignalLost{};
			class destroyUI{};
			class droneInit{};
			class handleConnect
			{
				postInit=1;
			};
		};
		class MissionParams
		{
			file="\NLD_Drones\functions\Mission";
			class setWeather {};
			class setTime {};
			class setFog {};
		};
	};
};

class CfgEditorCategories
{
	class BEN_Drones
	{
		displayName="Drones";
	};
};
class CfgEditorSubcategories
{
	class BEN_D_Parrot
	{
		displayName="Parrot";
	};
	class BEN_D_Crocus
	{
		displayName="Crocus";
	};
	class BEN_D_Raven
	{
		displayName="Raven";
	};
};

//Custom user actions
class cfgUserActions
{
	class quadcopterCyclicForward
	{
		displayName="";
		tooltip="";
		onActivate="";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
	class quadcopterCyclicBack
	{
		displayName="";
		tooltip="";
		onActivate="";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
	class quadcopterCyclicLeft
	{
		displayName="";
		tooltip="";
		onActivate="";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
	class quadcopterCyclicRight
	{
		displayName="";
		tooltip="";
		onActivate="";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
	class quadcopterLeft
	{
		displayName="";
		tooltip="";
		onActivate="";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
	class quadcopterRight
	{
		displayName="";
		tooltip="";
		onActivate="";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
	class quadcopterRudderLeft
	{
		displayName="";
		tooltip="";
		onActivate="";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
	class quadcopterRudderRight
	{
		displayName="";
		tooltip="";
		onActivate="";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
	class quadcopterCollectiveRaise
	{
		displayName="";
		tooltip="";
		onActivate="";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
	class quadcopterCollectiveLower
	{
		displayName="";
		tooltip="";
		onActivate="";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
	class quadcopterCollectiveRaiseCont
	{
		displayName="";
		tooltip="";
		onActivate="";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
	class quadcopterCollectiveLowerCont
	{
		displayName="";
		tooltip="";
		onActivate="";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
	class quadCopterCamUp
	{
		displayName="Tilt camera up";
		tooltip="Tilt camera up";
		onActivate="[nil,true] execVM '\NLD_Drones\Scripts\droneCamRot.sqf'";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
	class quadCopterCamDown
	{
		displayName="Tilt camera down";
		tooltip="Tilt camera down";
		onActivate="[nil,false] execVM '\NLD_Drones\Scripts\droneCamRot.sqf'";
		onDeactivate="";
		onAnalog="";
		analogChangeThreshold=0.1;
	};
};
/*
class CfgDefaultKeysPresets
{
	class Arma2
	{
		class Mappings
		{
			quadcopterCyclicForward[]=
			{
				17,
				200,
				"(0x00100000  + 3)"
			};
			quadcopterCyclicBack[]=
			{
				31,
				208,
				"(0x00100000  + 2)"
			};
			quadcopterCyclicLeft[]={30,203};
			quadcopterCyclicRight[]={32,205};
			quadcopterLeft[]=
			{
				"(0x00100000  + 0)"
			};
			quadcopterRight[]=
			{
				"(0x00100000  + 1)"
			};
			quadcopterRudderLeft[]={45,211};
			quadcopterRudderRight[]={46,207};
			quadcopterCollectiveRaise[]={16};
			quadcopterCollectiveLower[]={44};
			quadcopterCollectiveRaiseCont[]={};
			quadcopterCollectiveLowerCont[]={};
			autoHover[]=
			{
				"256+0x2B"
			};
			autoHoverCancel[]={43};
			cameraZoomIn[]={78};
			cameraZoomOut[]={74};
		};
	};
};

class DefaultAnalogCurveDefs
{
	class QuadcopterCyclicLeft
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1
		};
	};
	class QuadcopterCyclicRight
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1
		};
	};
	class QuadcopterRudderLeft
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1
		};
	};
	class QuadcopterRudderRight
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1
		};
	};
};
*/
class UserActionGroups
{
	class MovementQuadcopter
	{
		name="Quadcopter Movement";
		isAddon=1;
		group[]=
		{
			"HeliCyclicForward",
			"HeliCyclicBack",
			"HeliCyclicLeft",
			"HeliCyclicRight",
			"HeliLeft",
			"HeliRight",
			"HeliRudderLeft",
			"HeliRudderRight",
			"HeliCollectiveRaiseCont",
			"HeliCollectiveLowerCont",
			"HeliCollectiveRaise",
			"HeliCollectiveLower",
			"AutoHover",
			"AutoHoverCancel",
			"quadCopterCamUp",
			"quadCopterCamDown"
		};
	};
};
class UserActionsConflictGroups
{
	class ActionGroups
	{
		Quadcopter[]=
		{
			"HeliCyclicForward",
			"HeliCyclicBack",
			"HeliCyclicLeft",
			"HeliCyclicRight",
			"HeliCollectiveRaise",
			"HeliCollectiveLower",
			"HeliCollectiveRaiseCont",
			"HeliCollectiveLowerCont",
			"HeliRudderLeft",
			"HeliRudderRight",
			"HeliLeft",
			"HeliRight",
			"AutoHover",
			"AutoHoverCancel",
			"LandGear",
			"LandGearUp",
			"HeliWheelsBrake",
			"HelicopterTrimOn",
			"HelicopterTrimOff",
			"HeliTrimLeft",
			"HeliTrimRight",
			"HeliTrimForward",
			"HeliTrimBackward",
			"HeliTrimRudderLeft",
			"HeliTrimRudderRight",
			"HeliRopeAction",
			"HeliSlingLoadManager",
			"PilotCamera",
			"CyclicForward",
			"CyclicBack",
			"quadCopterCamUp",
			"quadCopterCamDown"
		};
	};
	class CollisionGroups
	{
		heli[] += {"Quadcopter"};
		Quadcopter[]=
		{
			"quadcopter",
			"heli",
			"vehBasic",
			"basic",
			"HeadMove"
		};
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class cfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHRotor;
			class HitHull;
		};
		class AnimationSources;
		class EventHandlers;
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class ViewPilot;
		class Components;
	};
	class BEN_Quadcopter_base_F: Helicopter_Base_F
	{
		features="Randomization: No						<br />Camo selections: 1 - the whole body						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author="$STR_A3_Bohemia_Interactive";
		mapSize=4;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_air_UAV_s"
				};
				speechPlural[]=
				{
					"veh_air_UAV_p"
				};
			};
		};
		hiddenSelections[]=
		{
			"camo"
		};
		textSingular="$STR_A3_nameSound_veh_air_UAV_s";
		textPlural="$STR_A3_nameSound_veh_air_UAV_p";
		nameSound="veh_air_UAV_s";
		_generalMacro="UAV_01_base_F";
		editorSubcategory="EdSubcat_Drones";
		scope=0;
		displayName="$STR_A3_CfgVehicles_UAV_01_base0";
		isUav=1;
		uavCameraDriverPos="pip_pilot_pos";
		uavCameraDriverDir="pip_pilot_dir";
		uavCameraGunnerPos="PiP0_pos";
		uavCameraGunnerDir="PiP0_dir";
		extCameraPosition[]={0,-0.25,-2.3499999};
		extCameraParams[]={0.93000001,10,30,0.25,1,10,30,0,1};
		formationX=10;
		formationZ=10;
		memoryPointTaskMarker="TaskMarker_1_pos";
		memoryPointDriverOptics="pip_pilot_pos";
		driverOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		driverForceOptics=1;
		disableInventory=1;
		unitInfoType="RscOptics_AV_pilot";
		unitInfoTypeRTD="RscOptics_AV_pilot";
		getInRadius=0;
		damageEffect="UAVDestructionEffects";
		damageTexDelay=0.5;
		dustEffect="UAVDust";
		waterEffect="UAVWater";
		washDownDiameter="10.0f";
		washDownStrength="0.25f";
		killFriendlyExpCoef=0.1;
		accuracy=1.5;
		camouflage=0.5;
		audible=0.1;
		armor=0.5;
		cost=20000;
		altFullForce=1000;
		altNoForce=2000;
		LODTurnedIn=-1;
		LODTurnedOut=-1;
		epeImpulseDamageCoef=5;
		fuelExplosionPower=0;
		vehicleClass="Autonomous";
		model="\A3\Drones_F\Air_F_Gamma\UAV_01\UAV_01_F.p3d";
		icon="\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\Map_UAV_01_CA.paa";
		picture="\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\UAV_01_CA.paa";
		class RotorLibHelicopterProperties;
		airBrakeFrictionCoef=0.0;
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0,0,0};
		airFrictionCoefs2[]={0,0,0};
		envelope[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
		minSmokeDamage=0.20000001;
		maxSmokeDamage=0.77000001;
		class Reflectors
		{
		};
		startDuration=0;
		maxSpeed=250;
		precision=15;
		steerAheadSimul=0.5;
		steerAheadPlan=0.69999999;
		predictTurnPlan=2;
		predictTurnSimul=1.5;
		liftForceCoef=1;
		cyclicAsideForceCoef=2;
		cyclicForwardForceCoef=1.2;
		bodyFrictionCoef=0.30000001;
		backRotorForceCoef=5;
		fuelCapacity=8.5;
		maxFordingDepth=0.30000001;
		threat[]={0.1,0.1,0.1};
		maxMainRotorDive=0;
		minMainRotorDive=0;
		neutralMainRotorDive=0;
		gearRetracting=0;
		mainRotorSpeed=-7;
		backRotorSpeed=7;
		tailBladeVertical=0;
		radarTargetSize=0.1;
		visualTargetSize=0.1;
		irTarget=0;
		lockDetectionSystem=0;
		incomingMissileDetectionSystem=0;
		weapons[]={};
		magazines[]={};
		irScanRangeMin=0;
		irScanRangeMax=0;
		irScanToEyeFactor=1;
		class TransportItems
		{
		};
		destrType="DestructDefault";
		driverCompartments="Compartment3";
		cargoCompartments[]=
		{
			"Compartment2"
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.1;
			};
			class HitHRotor: HitHRotor
			{
				armor=0.30000001;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01.rvmat",
				"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_damage.rvmat",
				"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_destruct.rvmat"
			};
		};
		class ViewPilot: ViewPilot
		{
			minFov=0.1;
			maxFov=1.4;
			initFov=1;
			initAngleX=0;
			minAngleX=-90;
			maxAngleX=90;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class Viewoptics: ViewOptics
		{
			initAngleX=0;
			minAngleX=-65;
			maxAngleX=65;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			minFov=0.1;
			maxFov=1.4;
			initFov=0.75;
			visionMode[]=
			{
				"Normal",
				"NVG",
				"Ti"
			};
			thermalMode[]={0,1};
		};
		class MFD
		{
		};
		enableManualFire=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ManSensorComponent: SensorTemplateMan
					{
						maxTrackableSpeed=15;
						angleRangeHorizontal=51;
						angleRangeVertical=37;
						animDirection="mainGun";
						aimDown=-0.5;
					};
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=1500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=1000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=35;
						angleRangeHorizontal=51;
						angleRangeVertical=37;
						animDirection="mainGun";
						aimDown=-0.5;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={800,400,200,1600};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={800,400,200,1600};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot=0;
				minElev=-90;
				maxElev=3;
				initElev=-3;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				maxHorizontalRotSpeed=10;
				maxVerticalRotSpeed=10;
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.5;
						minFov=0.5;
						maxFov=0.5;
						directionStabilized=1;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.1;
						minFov=0.1;
						maxFov=0.1;
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						initFov=0.0286;
						minFov=0.0286;
						maxFov=0.0286;
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={800,400,200,1600};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={800,400,200,1600};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				inGunnerMayFire=1;
				outGunnerMayFire=1;
				commanding=-1;
				primaryGunner=1;
				memoryPointGun="PIP0_dir";
				memoryPointGunnerOptics="PIP0_pos";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				gunnerForceOptics=1;
				turretInfoType="RscOptics_UAV_gunner";
				stabilizedInAxes=3;
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",
					0.031622775,
					0.5,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",
					0.031622775,
					0.5,
					10
				};
				GunnerCompartments="Compartment1";
				LODTurnedIn=-1;
				LODTurnedOut=-1;
			};
		};
		attenuationEffectType="OpenHeliAttenuation";
		soundGetIn[]=
		{
			"",
			1,
			1
		};
		soundGetOut[]=
		{
			"",
			1,
			1,
			50
		};
		soundEnviron[]=
		{
			"",
			0.031622775,
			1
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\air\Uav_01\quad_start_full_int",
			0.56234133,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\air\Uav_01\quad_start_full_01",
			0.56234133,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\air\Uav_01\quad_stop_full_int",
			0.56234133,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\air\Uav_01\quad_stop_full_01",
			0.56234133,
			1,
			200
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			900
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\quad_engine_full_01",
					0.44668359,
					1,
					200
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\blade",
					0.31622776,
					1,
					200
				};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorHighOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\blade_high",
					0.31622776,
					1,
					250
				};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.9))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class EngineIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\quad_engine_full_int",
					0.56234133,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\blade_int",
					0.56234133,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))";
			};
			class RotorHighIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\blade_high_int",
					0.56234133,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position="Exhaust_1_pos";
				direction="Exhaust_1_dir";
				effect="ExhaustsEffectDrone";
			};
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_UAV_01_base_Library0";
		};
		class TextureSources
		{
			class Indep
			{
				displayName="$STR_A3_TEXTURESOURCES_INDEP0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_INDP_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class Opfor
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_OPFOR_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Blufor
			{
				displayName="$STR_A3_TEXTURESOURCES_BLU0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
	};
};

class Extended_PreInit_EventHandlers
{
	class BEN_preInit
	{
		init="call compile preProcessFileLineNumbers '\NLD_Drones\XEH_preInit.sqf'";
	};
};
