#ifndef MINEFLAYERCORE_GLOBAL_H
#define MINEFLAYERCORE_GLOBAL_H

#if defined(WIN32)
#if defined(MINEFLAYERCORE_LIBRARY)
#define MINEFLAYER_EXPORT __declspec(dllexport)
#else
#define MINEFLAYER_EXPORT __declspec(dllimport)
#endif
#else
#define MINEFLAYER_EXPORT
#endif

#if defined(__cplusplus)
#define mineflayer_bool bool
#else
#define mineflayer_bool char
#endif

#if defined(__cplusplus)
extern "C" {
#endif

typedef enum {
    mineflayer_ForwardControl,
    mineflayer_BackControl,
    mineflayer_LeftControl,
    mineflayer_RightControl,
    mineflayer_JumpControl,
    mineflayer_CrouchControl, // TODO: not yet supported
    mineflayer_DiscardItemControl, // TODO: not yet supported

    mineflayer_ControlCount
} mineflayer_Control;

typedef enum {
    mineflayer_BlockBrokenReason=0,
    mineflayer_AbortedReason=1,
} mineflayer_StoppedDiggingReason;

typedef enum {
    mineflayer_NamedPlayerEntity = 1,
    // TODO: ObjectOrVehicle,
    mineflayer_MobEntity = 3,
    mineflayer_PickupEntity = 4,
} mineflayer_EntityType;


typedef enum {
    mineflayer_NoAnimation=0,
    mineflayer_SwingArmAnimation=1,
    mineflayer_DamageAnimation=2,
    mineflayer_CrouchAnimation=104,
    mineflayer_UncrouchAnimation=105,
    mineflayer_DeathAnimation=55061, // random out-of-the-way number
} mineflayer_AnimationType;


typedef enum {
    mineflayer_DisconnectedStatus,
    mineflayer_ConnectingStatus,
    mineflayer_WaitingForHandshakeResponseStatus,
    mineflayer_WaitingForSessionIdStatus,
    mineflayer_WaitingForNameVerificationStatus,
    mineflayer_WaitingForLoginResponseStatus,
    mineflayer_SuccessStatus,
    mineflayer_SocketErrorStatus,
} mineflayer_LoginStatus;

typedef enum {
    // ours
    mineflayer_InventoryWindow=-1,

    // notch's
    mineflayer_ChestWindow=0,
    mineflayer_CraftingTableWindow=1,
    mineflayer_FurnaceWindow=2,
    mineflayer_DispenserWindow=3,
} mineflayer_WindowType;

typedef enum {
    mineflayer_NoDirection=-1,
    mineflayer_NegativeY=0,
    mineflayer_PositiveY=1,
    mineflayer_NegativeZ=2,
    mineflayer_PositiveZ=3,
    mineflayer_NegativeX=4,
    mineflayer_PositiveX=5,
} mineflayer_BlockFaceDirection;

// auto-generated by bin/gen_item_type_enum from resources/items.txt
typedef enum 
{
    mineflayer_NoItem=-1,
    mineflayer_AirItem=0x00,
    mineflayer_StoneItem=0x01,
    mineflayer_GrassItem=0x02,
    mineflayer_DirtItem=0x03,
    mineflayer_CobblestoneItem=0x04,
    mineflayer_WoodenPlankItem=0x05,
    mineflayer_SaplingItem=0x06,
    mineflayer_BedrockItem=0x07,
    mineflayer_WaterItem=0x08,
    mineflayer_StationaryWaterItem=0x09,
    mineflayer_LavaItem=0x0A,
    mineflayer_StationaryLavaItem=0x0B,
    mineflayer_SandItem=0x0C,
    mineflayer_GravelItem=0x0D,
    mineflayer_GoldOreItem=0x0E,
    mineflayer_IronOreItem=0x0F,
    mineflayer_CoalOreItem=0x10,
    mineflayer_WoodItem=0x11,
    mineflayer_LeavesItem=0x12,
    mineflayer_SpongeItem=0x13,
    mineflayer_GlassItem=0x14,
    mineflayer_LapisLazuliOreItem=0x15,
    mineflayer_LapisLazuliBlockItem=0x16,
    mineflayer_DispenserItem=0x17,
    mineflayer_SandstoneItem=0x18,
    mineflayer_NoteBlockItem=0x19,
    mineflayer_Bed_placedItem=0x1A,
    mineflayer_WoolItem=0x23,
    mineflayer_YellowFlowerItem=0x25,
    mineflayer_RedRoseItem=0x26,
    mineflayer_BrownMushroomItem=0x27,
    mineflayer_RedMushroomItem=0x28,
    mineflayer_GoldBlockItem=0x29,
    mineflayer_IronBlockItem=0x2A,
    mineflayer_DoubleSlabItem=0x2B,
    mineflayer_SlabItem=0x2C,
    mineflayer_BrickItem=0x2D,
    mineflayer_TntItem=0x2E,
    mineflayer_BookshelfItem=0x2F,
    mineflayer_MossStoneItem=0x30,
    mineflayer_ObsidianItem=0x31,
    mineflayer_TorchItem=0x32,
    mineflayer_FireItem=0x33,
    mineflayer_MonsterSpawnerItem=0x34,
    mineflayer_WoodenStairsItem=0x35,
    mineflayer_ChestItem=0x36,
    mineflayer_RedstoneWire_placedItem=0x37,
    mineflayer_DiamondOreItem=0x38,
    mineflayer_DiamondBlockItem=0x39,
    mineflayer_CraftingTableItem=0x3A,
    mineflayer_CropsItem=0x3B,
    mineflayer_FarmlandItem=0x3C,
    mineflayer_FurnaceItem=0x3D,
    mineflayer_BurningFurnaceItem=0x3E,
    mineflayer_SignPost_placedItem=0x3F,
    mineflayer_WoodenDoor_placedItem=0x40,
    mineflayer_LadderItem=0x41,
    mineflayer_MinecartTracksItem=0x42,
    mineflayer_CobblestoneStairsItem=0x43,
    mineflayer_WallSign_placedItem=0x44,
    mineflayer_LeverItem=0x45,
    mineflayer_StonePressurePlateItem=0x46,
    mineflayer_IronDoor_placedItem=0x47,
    mineflayer_WoodenPressurePlateItem=0x48,
    mineflayer_RedstoneOreItem=0x49,
    mineflayer_GlowingRedstoneOreItem=0x4A,
    mineflayer_RedstoneTorchOff_placedItem=0x4B,
    mineflayer_RedstoneTorchOnItem=0x4C,
    mineflayer_StoneButtonItem=0x4D,
    mineflayer_SnowItem=0x4E,
    mineflayer_IceItem=0x4F,
    mineflayer_SnowBlockItem=0x50,
    mineflayer_CactusItem=0x51,
    mineflayer_ClayItem=0x52,
    mineflayer_SugarCane_placedItem=0x53,
    mineflayer_JukeboxItem=0x54,
    mineflayer_FenceItem=0x55,
    mineflayer_PumpkinItem=0x56,
    mineflayer_NetherrackItem=0x57,
    mineflayer_SoulSandItem=0x58,
    mineflayer_GlowstoneItem=0x59,
    mineflayer_PortalItem=0x5A,
    mineflayer_JackOLanternItem=0x5B,
    mineflayer_Cake_placedItem=0x5C,
    mineflayer_RedstoneRepeaterOff_placedItem=0x5D,
    mineflayer_RedstoneRepeaterOn_placedItem=0x5E,
    mineflayer_IronShovelItem=0x100,
    mineflayer_IronPickaxeItem=0x101,
    mineflayer_IronAxeItem=0x102,
    mineflayer_FlintAndSteelItem=0x103,
    mineflayer_AppleItem=0x104,
    mineflayer_BowItem=0x105,
    mineflayer_ArrowItem=0x106,
    mineflayer_CoalItem=0x107,
    mineflayer_DiamondItem=0x108,
    mineflayer_IronIngotItem=0x109,
    mineflayer_GoldIngotItem=0x10A,
    mineflayer_IronSwordItem=0x10B,
    mineflayer_WoodenSwordItem=0x10C,
    mineflayer_WoodenShovelItem=0x10D,
    mineflayer_WoodenPickaxeItem=0x10E,
    mineflayer_WoodenAxeItem=0x10F,
    mineflayer_StoneSwordItem=0x110,
    mineflayer_StoneShovelItem=0x111,
    mineflayer_StonePickaxeItem=0x112,
    mineflayer_StoneAxeItem=0x113,
    mineflayer_DiamondSwordItem=0x114,
    mineflayer_DiamondShovelItem=0x115,
    mineflayer_DiamondPickaxeItem=0x116,
    mineflayer_DiamondAxeItem=0x117,
    mineflayer_StickItem=0x118,
    mineflayer_BowlItem=0x119,
    mineflayer_MushroomStewItem=0x11A,
    mineflayer_GoldSwordItem=0x11B,
    mineflayer_GoldShovelItem=0x11C,
    mineflayer_GoldPickaxeItem=0x11D,
    mineflayer_GoldAxeItem=0x11E,
    mineflayer_StringItem=0x11F,
    mineflayer_FeatherItem=0x120,
    mineflayer_GunpowderItem=0x121,
    mineflayer_WoodenHoeItem=0x122,
    mineflayer_StoneHoeItem=0x123,
    mineflayer_IronHoeItem=0x124,
    mineflayer_DiamondHoeItem=0x125,
    mineflayer_GoldHoeItem=0x126,
    mineflayer_SeedsItem=0x127,
    mineflayer_WheatItem=0x128,
    mineflayer_BreadItem=0x129,
    mineflayer_LeatherHelmetItem=0x12A,
    mineflayer_LeatherChestplateItem=0x12B,
    mineflayer_LeatherLeggingsItem=0x12C,
    mineflayer_LeatherBootsItem=0x12D,
    mineflayer_ChainmailHelmetItem=0x12E,
    mineflayer_ChainmailChestplateItem=0x12F,
    mineflayer_ChainmailLeggingsItem=0x130,
    mineflayer_ChainmailBootsItem=0x131,
    mineflayer_IronHelmetItem=0x132,
    mineflayer_IronChestplateItem=0x133,
    mineflayer_IronLeggingsItem=0x134,
    mineflayer_IronBootsItem=0x135,
    mineflayer_DiamondHelmetItem=0x136,
    mineflayer_DiamondChestplateItem=0x137,
    mineflayer_DiamondLeggingsItem=0x138,
    mineflayer_DiamondBootsItem=0x139,
    mineflayer_GoldHelmetItem=0x13A,
    mineflayer_GoldChestplateItem=0x13B,
    mineflayer_GoldLeggingsItem=0x13C,
    mineflayer_GoldBootsItem=0x13D,
    mineflayer_FlintItem=0x13E,
    mineflayer_RawPorkchopItem=0x13F,
    mineflayer_CookedPorkchopItem=0x140,
    mineflayer_PaintingItem=0x141,
    mineflayer_GoldenAppleItem=0x142,
    mineflayer_SignItem=0x143,
    mineflayer_WoodenDoorItem=0x144,
    mineflayer_BucketItem=0x145,
    mineflayer_WaterBucketItem=0x146,
    mineflayer_LavaBucketItem=0x147,
    mineflayer_MinecartItem=0x148,
    mineflayer_SaddleItem=0x149,
    mineflayer_IronDoorItem=0x14A,
    mineflayer_RedstoneItem=0x14B,
    mineflayer_SnowballItem=0x14C,
    mineflayer_BoatItem=0x14D,
    mineflayer_LeatherItem=0x14E,
    mineflayer_MilkBucketItem=0x14F,
    mineflayer_ClayBrickItem=0x150,
    mineflayer_ClayBallItem=0x151,
    mineflayer_SugarCaneItem=0x152,
    mineflayer_PaperItem=0x153,
    mineflayer_BookItem=0x154,
    mineflayer_SlimeballItem=0x155,
    mineflayer_StorageMinecartItem=0x156,
    mineflayer_PoweredMinecartItem=0x157,
    mineflayer_EggItem=0x158,
    mineflayer_CompassItem=0x159,
    mineflayer_FishingRodItem=0x15A,
    mineflayer_ClockItem=0x15B,
    mineflayer_GlowstoneDustItem=0x15C,
    mineflayer_RawFishItem=0x15D,
    mineflayer_CookedFishItem=0x15E,
    mineflayer_InkSacItem=0x15F,
    mineflayer_BoneItem=0x160,
    mineflayer_SugarItem=0x161,
    mineflayer_CakeItem=0x162,
    mineflayer_BedItem=0x163,
    mineflayer_RedstoneRepeaterItem=0x164,
    mineflayer_GoldMusicDiscItem=0x8D0,
    mineflayer_GreenMusicDiscItem=0x8D1,
} mineflayer_ItemType;

typedef enum {
    mineflayer_CreeperMob=50,
    mineflayer_SkeletonMob=51,
    mineflayer_SpiderMob=52,
    mineflayer_GiantZombieMob=53,
    mineflayer_ZombieMob=54,
    mineflayer_SlimeMob=55,
    mineflayer_GhastMob=56,
    mineflayer_ZombiePigmanMob=57,
    mineflayer_PigMob=90,
    mineflayer_SheepMob=91,
    mineflayer_CowMob=92,
    mineflayer_ChickenMob=93,
} mineflayer_MobType;

typedef struct {
    int byte_count;
    unsigned char * utf8_bytes;
} mineflayer_Utf8;

typedef struct {
    double x,y,z;
} mineflayer_Double3D;

typedef struct {
    int x,y,z;
} mineflayer_Int3D;

typedef struct
{
    mineflayer_Double3D pos; // east, north, up
    mineflayer_Double3D vel; // m/s
    double height; // [0.1, 1.65] how tall you are.
    float yaw; // [0, 2pi] rotation around z axis. 0 is +x. pi/2 is +y. pi is -x. 3pi/2 is -y.
    float pitch; // [-pi/2, pi/2] 0 is parallel to the ground. pi/2 is up. -pi/2 is down.
    mineflayer_bool on_ground;
} mineflayer_EntityPosition;


typedef struct {
    unsigned type : 8;
    unsigned metadata : 4;
    unsigned light : 4;
    unsigned sky_light : 4;
} mineflayer_Block;

typedef struct {
    mineflayer_ItemType type;
    unsigned count : 8;
    unsigned metadata : 16;
} mineflayer_Item;


// auto-generated by bin/gen_material_enum from resources/materials.txt
typedef enum 
{
    mineflayer_NoMaterial = 0,
    mineflayer_StoneMaterial = 1,
    mineflayer_DirtMaterial = 2,
    mineflayer_WoodMaterial = 3,
    mineflayer_CropsMaterial = 4,
    mineflayer_WaterMaterial = 5,
    mineflayer_LavaMaterial = 6,
    mineflayer_SandMaterial = 7,
    mineflayer_LeavesMaterial = 8,
    mineflayer_SpongeMaterial = 9,
    mineflayer_GlassMaterial = 10,
    mineflayer_WoolMaterial = 11,
    mineflayer_IronMaterial = 12,
    mineflayer_TntMaterial = 13,
    mineflayer_RedstoneMaterial = 14,
    mineflayer_FireMaterial = 15,
    mineflayer_SnowMaterial = 16,
    mineflayer_IceMaterial = 17,
    mineflayer_SnowBlockMaterial = 18,
    mineflayer_CactusMaterial = 19,
    mineflayer_ClayMaterial = 20,
    mineflayer_PumpkinMaterial = 21,
    mineflayer_PortalMaterial = 22,
    mineflayer_CakeMaterial = 23,
    mineflayer_DiamondMaterial = 24,
    mineflayer_GoldMaterial = 25,
} mineflayer_Material;

typedef struct {
    mineflayer_ItemType id;
    mineflayer_Utf8 name;
    int stack_height;
    mineflayer_bool placeable; // true if right clicking with it equipped on a block face puts it in the world or uses the item on that face
    mineflayer_bool item_activatable; // true if right clicking anywhere with it equipped activates the item
    mineflayer_bool physical; // true if it physically obstructs you
    mineflayer_bool diggable; // false if placing a block against one of its faces would be cheating
    mineflayer_bool block_activatable; // true if right clicking on the block in the world activates the block
    mineflayer_bool safe; // false if your presence in this block causes you harm
    float hardness; // used for computing digging time
    mineflayer_Material material; // what the block is made out of
} mineflayer_ItemData;

// must be valid array indexes
typedef struct {
    mineflayer_EntityType type;
    int entity_id;
    mineflayer_EntityPosition position;
    union {
        // named player
        struct {
            mineflayer_Utf8 username;
            mineflayer_ItemType held_item;
        };
        // mob
        mineflayer_MobType mob_type;
        // item
        mineflayer_Item item;
    };
} mineflayer_Entity;

typedef struct {
    mineflayer_Utf8 username;
    mineflayer_Utf8 password; // defaults to blank
    mineflayer_Utf8 hostname; // defaults to 'localhost'
    int port; // defaults to 25565
} mineflayer_Url;

typedef void * mineflayer_GamePtr;


// in callbacks, any pointers or mineflayer_Utf8 strings are valid until the callback returns,
// so if you want to save it, you need to copy the data out of it.
typedef struct {
    void (*chatReceived) (void * context, mineflayer_Utf8 username, mineflayer_Utf8 message);
    void (*timeUpdated) (void * context, double seconds);
    void (*nonSpokenChatReceived) (void * context, mineflayer_Utf8 message);

    void (*entitySpawned) (void * context, mineflayer_Entity * mineflayer_entity);
    void (*entityDespawned) (void * context, mineflayer_Entity * mineflayer_entity);
    void (*entityMoved) (void * context, mineflayer_Entity * mineflayer_entity);
    void (*animation) (void * context, mineflayer_Entity * mineflayer_entity, mineflayer_AnimationType animation_type);

    void (*chunkUpdated) (void * context, mineflayer_Int3D start, mineflayer_Int3D size);
    void (*unloadChunk) (void * context, mineflayer_Int3D coord);
    void (*signUpdated) (void * context, mineflayer_Int3D location, mineflayer_Utf8 text);
    void (*playerPositionUpdated) (void * context);
    void (*playerHealthUpdated) (void * context);
    void (*playerDied) (void * context);
    void (*playerSpawned) (void * context);
    void (*stoppedDigging) (void * context, mineflayer_StoppedDiggingReason reason);
    void (*loginStatusUpdated) (void * context, mineflayer_LoginStatus status);

    void (*windowOpened) (void * context, mineflayer_WindowType window_type);

    void (*inventoryUpdated) (void * context);
    void (*equippedItemChanged) (void * context);
} mineflayer_Callbacks;

// methods
MINEFLAYER_EXPORT mineflayer_GamePtr mineflayer_createGame(mineflayer_Url url);
MINEFLAYER_EXPORT void mineflayer_setCallbacks(mineflayer_GamePtr game, mineflayer_Callbacks callbacks, void * context);

MINEFLAYER_EXPORT void mineflayer_destroyGame(mineflayer_GamePtr game);
MINEFLAYER_EXPORT void mineflayer_destroyEntity(mineflayer_Entity * mineflayer_entity);
MINEFLAYER_EXPORT void mineflayer_destroyUtf8(mineflayer_Utf8 utf8);
MINEFLAYER_EXPORT void mineflayer_destroyItemIdList(int * item_id_list);

MINEFLAYER_EXPORT void mineflayer_start(mineflayer_GamePtr game);

// call every frame passing it the amount of time since the last frame
MINEFLAYER_EXPORT void mineflayer_doPhysics(mineflayer_GamePtr game, float delta_seconds);

// equivalent to pressing a button.
MINEFLAYER_EXPORT void mineflayer_setControlActivated(mineflayer_GamePtr game, mineflayer_Control control, mineflayer_bool activated);

// immediately emits a position update
MINEFLAYER_EXPORT void mineflayer_updatePlayerLook(mineflayer_GamePtr game, float delta_yaw, float delta_pitch);
MINEFLAYER_EXPORT void mineflayer_setPlayerLook(mineflayer_GamePtr game, float yaw, float pitch, mineflayer_bool force);

// left-clicks an entity. no support for right-clicking entities yet.
MINEFLAYER_EXPORT void mineflayer_attackEntity(mineflayer_GamePtr game, int entity_id);

// only valid to call this after you die
MINEFLAYER_EXPORT void mineflayer_respawn(mineflayer_GamePtr game);

MINEFLAYER_EXPORT int mineflayer_playerEntityId(mineflayer_GamePtr game);
MINEFLAYER_EXPORT mineflayer_EntityPosition mineflayer_playerPosition(mineflayer_GamePtr game);

// call mineflayer_destroyEntity when you are done with the return value.
MINEFLAYER_EXPORT mineflayer_Entity * mineflayer_entity(mineflayer_GamePtr game, int entity_id);

MINEFLAYER_EXPORT mineflayer_Block mineflayer_blockAt(mineflayer_GamePtr game, mineflayer_Int3D absolute_location);
MINEFLAYER_EXPORT mineflayer_bool mineflayer_isBlockLoaded(mineflayer_GamePtr game, mineflayer_Int3D absolute_location);

// call mineflayer_destroyUtf8 when you are done with the return value.
MINEFLAYER_EXPORT mineflayer_Utf8 mineflayer_signTextAt(mineflayer_GamePtr game, mineflayer_Int3D absolute_location);
MINEFLAYER_EXPORT int mineflayer_playerHealth(mineflayer_GamePtr game);

MINEFLAYER_EXPORT void mineflayer_startDigging(mineflayer_GamePtr game, mineflayer_Int3D block);
MINEFLAYER_EXPORT void mineflayer_stopDigging(mineflayer_GamePtr game);

// returns whether you were allowed to place a block there
MINEFLAYER_EXPORT mineflayer_bool mineflayer_placeBlock(mineflayer_GamePtr game, mineflayer_Int3D block, mineflayer_BlockFaceDirection face);
// returns whether the item was activatable
MINEFLAYER_EXPORT mineflayer_bool mineflayer_activateItem(mineflayer_GamePtr game);
MINEFLAYER_EXPORT mineflayer_bool mineflayer_canPlaceBlock(mineflayer_GamePtr game, mineflayer_Int3D block, mineflayer_BlockFaceDirection face);
MINEFLAYER_EXPORT void mineflayer_activateBlock(mineflayer_GamePtr game, mineflayer_Int3D block);

// you are responsible for allocating and deallocating message
MINEFLAYER_EXPORT void mineflayer_sendChat(mineflayer_GamePtr game, mineflayer_Utf8 message);
MINEFLAYER_EXPORT double mineflayer_timeOfDay(mineflayer_GamePtr game);

MINEFLAYER_EXPORT int mineflayer_selectedEquipSlot(mineflayer_GamePtr game);
MINEFLAYER_EXPORT void mineflayer_selectEquipSlot(mineflayer_GamePtr game, int slot_id); // [27, 35]

// blocks and returns success
MINEFLAYER_EXPORT mineflayer_bool mineflayer_clickInventorySlot(mineflayer_GamePtr game, int slot_id, mineflayer_bool right_click); // slot_id [0, 35]
MINEFLAYER_EXPORT mineflayer_bool mineflayer_clickUniqueSlot(mineflayer_GamePtr game, int slot_id, mineflayer_bool right_click); // slot_id range depends on window
MINEFLAYER_EXPORT mineflayer_bool mineflayer_clickOutsideWindow(mineflayer_GamePtr game, mineflayer_bool right_click);

MINEFLAYER_EXPORT void mineflayer_openInventoryWindow(mineflayer_GamePtr game);
MINEFLAYER_EXPORT void mineflayer_closeWindow(mineflayer_GamePtr game);

MINEFLAYER_EXPORT mineflayer_Item mineflayer_inventoryItem(mineflayer_GamePtr game, int slot_id); // [0, 35]
MINEFLAYER_EXPORT mineflayer_Item mineflayer_uniqueWindowItem(mineflayer_GamePtr game, int slot_id);

// if you want you can cheat and override the default physics settings:
MINEFLAYER_EXPORT void mineflayer_setInputAcceleration(mineflayer_GamePtr game, float value);
MINEFLAYER_EXPORT void mineflayer_setGravity(mineflayer_GamePtr game, float value);
MINEFLAYER_EXPORT float mineflayer_getStandardGravity();
MINEFLAYER_EXPORT void mineflayer_setMaxGroundSpeed(mineflayer_GamePtr game, float value);

// this one is cheating
MINEFLAYER_EXPORT void mineflayer_setPlayerPosition(mineflayer_GamePtr game, mineflayer_Double3D pt);

MINEFLAYER_EXPORT void mineflayer_setJesusModeEnabled(mineflayer_bool value);

// exception to memory management: don't delete this pointer
MINEFLAYER_EXPORT mineflayer_ItemData * mineflayer_itemData(mineflayer_ItemType item_id);
// returns an int array of all item ids. the first one is the number of item ids in the list. call mineflayer_destroyItemIdList when done.
MINEFLAYER_EXPORT int * mineflayer_itemIdList();

#if defined(__cplusplus)
}
#endif

#endif // MINEFLAYERCORE_GLOBAL_H
