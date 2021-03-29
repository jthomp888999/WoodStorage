class CfgPatches
{
	class WoodStorage
	{
        units[]={"WoodStorage"};
		requiredAddons[]={"DZ_Data"};
	};
};

class CfgMods
{
	class TestMod
	{
		type = "mod";
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]={"WoodStorage/scripts/4_world"};
			};

		};
	};
};
class CfgVehicles
{
    class Inventory_Base;
    class ContainerBase;
    class WoodStorage: ContainerBase
    {
        scope=2;
        displayName="WoodStorage";
        model="\DZ\gear\camping\wooden_case.p3d"; // PLACEHOLDER
        SingleUseActions[]={527};
        InteractActions[]={1025,1026};
        ContinuousActions[]={155};
        destroyOnEmpty=0;
        varQuantityDestroyOnMin=0;
        quantityBar=0;
        varQuantityMax=0;
        carveNavmesh=1;
        canBeDigged=0;
        heavyItem=1;
        weight=10000;
        itemSize[]={10,15};
        itemBehaviour=0;
        physLayer="item_large";
        allowOwnedCargoManipulation=1;
        storageCategory=1;
        attachments[]=
        {
            "Material_WoodenLogs",
            "Material_L1_WoodenLogs",
            "Material_L2_WoodenLogs",
            "Material_L3_WoodenLogs",
            "Material_WoodenPlanks",
            "Material_L1_WoodenPlanks",
            "Material_L1W1_WoodenPlanks",
            "Material_L1W2_WoodenPlanks",
            "Material_L1W3_WoodenPlanks",
            "Material_L2_WoodenPlanks",
            "Firewood",
            "WoodenStick",
            "Rags"
        };

        class GUIInventoryAttachmentsProps
        {
            class Log_Storage
            {
                name="Logs";
                description="";
                attachmentSlots[]=
                {
                    "Material_WoodenLogs",
                    "Material_L1_WoodenLogs",
                    "Material_L2_WoodenLogs",
                    "Material_L3_WoodenLogs"
                };
                icon="missing";
            };
            class Plank_Storage
            {
                name="Planks";
                description="";
                attachmentSlots[]=
                {
                    "Material_WoodenPlanks",
                    "Material_L1_WoodenPlanks",
                    "Material_L1W1_WoodenPlanks",
                    "Material_L1W2_WoodenPlanks",
                    "Material_L1W3_WoodenPlanks",
                    "Material_L2_WoodenPlanks"
                };
                icon="missing";
            };
            class FireWood
            {
                name="FireWood";
                description="";
                attachmentSlots[]=
                {
                    "Firewood",
                    "WoodenStick",
                    "Rags"
                };
                icon="missing";
            };
        };

    };
    class WoodStorage_Holo: WoodStorage
    {
        scope=2;
        model="\DZ\gear\camping\wooden_case.p3d"; // PLACEHOLDER
        physLayer="item_small";
    };

    class WoodStorage_Kit: Inventory_Base
    {
        scope=2;
        model="\DZ\gear\camping\wooden_case.p3d"; // PLACEHOLDER
        displayName="Player Storage Kit";
        descriptionShort="Contains a new player storage kit.";
        itemSize[]={4,10};
        carveNavmesh=1;
        canBeDigged=0;
        physLayer="item_small";
        weight=6000;
        itemBehaviour=2;
    };
};