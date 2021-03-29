class WoodStorage extends ItemBase
{
    override bool CanPutIntoHands(EntityAI parent) 
    {
       return false;
    }
    
    override bool IsHeavyBehaviour() 
    {
        return true;
    }
};

class WoodStorage_Holo extends WoodStorage{};

class WoodStorage_Kit extends ItemBase
{
    protected Object StorageKit;
    
    override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
    {
        super.OnPlacementComplete( player, position, orientation );
            
        PlayerBase pb = PlayerBase.Cast( player );
        if ( GetGame().IsServer() )
        {
            PlayerBase player_base = PlayerBase.Cast( player );
			StorageKit = GetGame().CreateObject("WoodStorage", pb.GetLocalProjectionPosition(), false );
			StorageKit.SetPosition( position );
			StorageKit.SetOrientation( orientation );
            this.Delete();
        }
    }

    override bool IsTwoHandedBehaviour() 
    {
        return true;
    }
    
    override bool IsDeployable() 
    {
        return true;
    }    

    override void SetActions()
    {
        super.SetActions();
        
        AddAction(ActionTogglePlaceObject);
        AddAction(ActionPlaceObject);
    } 
};