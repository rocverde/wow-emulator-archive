using System;
using Server.Items;
using System.Collections;
using Server;


///////////////////////////////////////////
namespace Server
{
	public class PeonDrops
	{
		public static Loot[] HammerfallPeon = new Loot[] {new Loot( typeof( AcrobaticStaff), 0.0264918f ) 
,new Loot( typeof( ArchersCloak), 0.0264918f ) 
,new Loot( typeof( BKPSparrowSmallbore), 0.0331148f ) 
,new Loot( typeof( Citrine), 0.0662296f ) 
,new Loot( typeof( ConjurersCinch), 0.0264918f ) 
,new Loot( typeof( EldersBoots), 0.0231803f ) 
,new Loot( typeof( HackingCleaver), 0.0264918f ) 
,new Loot( typeof( HillborneAxe), 0.0231803f ) 
,new Loot( typeof( InfiltratorCap), 0.0331148f ) 
,new Loot( typeof( InsigniaBelt), 0.0264918f ) 
,new Loot( typeof( IronLockbox), 0.076164f ) 
,new Loot( typeof( Jade), 0.264918f ) 
,new Loot( typeof( LesserMoonstone), 0.0662296f ) 
,new Loot( typeof( MailCombatGauntlets), 0.0231803f ) 
,new Loot( typeof( NightskySash), 0.0430492f ) 
,new Loot( typeof( NightskyWristbands), 0.0331148f ) 
,new Loot( typeof( PendantOfMyzrael), 0.0298033f ) 
,new Loot( typeof( PhalanxGauntlets), 0.0364263f ) 
,new Loot( typeof( PhalanxSpaulders), 0.0298033f ) 
,new Loot( typeof( ScaledLeatherTunic), 0.0231803f ) 
,new Loot( typeof( SequoiaHammer), 0.0562951f ) 
,new Loot( typeof( WhipwoodRecurveBow), 0.0331148f ) 
,new Loot( typeof( GreaterHealingPotion), 1.36433f ) 
,new Loot( typeof( LargeKnapsack), 0.0397377f ) 
,new Loot( typeof( LesserManaPotion), 0.619246f ) 
,new Loot( typeof( MageweaveCloth), 0.930525f ) 
,new Loot( typeof( ScrollOfAgilityII), 0.149016f ) 
,new Loot( typeof( ScrollOfIntellectII), 0.245049f ) 
,new Loot( typeof( ScrollOfStaminaII), 0.245049f ) 
,new Loot( typeof( ScrollOfStrengthII), 0.129148f ) 
,new Loot( typeof( SilkCloth), 28.6377f ) 
,new Loot( typeof( SweetNectar), 2.2783f ) 
,new Loot( typeof( WildHogShank), 4.39433f ) 
,new Loot( typeof( WoolCloth), 3.95722f ) 
,new Loot( typeof( BroadClaymore), 0.125836f ) 
,new Loot( typeof( DoubleMailBelt), 0.0662296f ) 
,new Loot( typeof( DoubleMailBoots), 0.0662296f ) 
,new Loot( typeof( DoubleMailBracers), 0.0529836f ) 
,new Loot( typeof( DoubleMailCoif), 0.0463607f ) 
,new Loot( typeof( DoubleMailGloves), 0.0860984f ) 
,new Loot( typeof( DoubleMailPants), 0.0562951f ) 
,new Loot( typeof( DoubleMailShoulderpads), 0.0596066f ) 
,new Loot( typeof( DoubleMailVest), 0.0562951f ) 
,new Loot( typeof( DoubleStitchedCloak), 0.0364263f ) 
,new Loot( typeof( HardenedCloak), 0.0728525f ) 
,new Loot( typeof( HardenedLeatherBelt), 0.0894099f ) 
,new Loot( typeof( HardenedLeatherBoots), 0.0827869f ) 
,new Loot( typeof( HardenedLeatherBracers), 0.0794755f ) 
,new Loot( typeof( HardenedLeatherGloves), 0.0860984f ) 
,new Loot( typeof( HardenedLeatherHelm), 0.0562951f ) 
,new Loot( typeof( HardenedLeatherPants), 0.0894099f ) 
,new Loot( typeof( HardenedLeatherShoulderpads), 0.0993443f ) 
,new Loot( typeof( HardenedLeatherTunic), 0.069541f ) 
,new Loot( typeof( HeftyWarAxe), 0.162262f ) 
,new Loot( typeof( InterlacedBelt), 0.0894099f ) 
,new Loot( typeof( InterlacedBoots), 0.0993443f ) 
,new Loot( typeof( InterlacedBracers), 0.076164f ) 
,new Loot( typeof( InterlacedCloak), 0.105967f ) 
,new Loot( typeof( InterlacedCowl), 0.0529836f ) 
,new Loot( typeof( InterlacedGloves), 0.105967f ) 
,new Loot( typeof( InterlacedPants), 0.132459f ) 
,new Loot( typeof( InterlacedShoulderpads), 0.105967f ) 
,new Loot( typeof( InterlacedVest), 0.0794755f ) 
,new Loot( typeof( KeenAxe), 0.165574f ) 
,new Loot( typeof( LargeWarClub), 0.102656f ) 
,new Loot( typeof( LightScimitar), 0.119213f ) 
,new Loot( typeof( LongBarreledMusket), 0.149016f ) 
,new Loot( typeof( MetalStave), 0.155639f ) 
,new Loot( typeof( ReflectiveHeater), 0.11259f ) 
,new Loot( typeof( ReinforcedBuckler), 0.102656f ) 
,new Loot( typeof( ShinyDirk), 0.102656f ) 
,new Loot( typeof( StoneClub), 0.155639f ) 
,new Loot( typeof( TautCompoundBow), 0.185443f ) 
};
		
		public static Loot[] VentureCoPeon = new Loot[] {new Loot( typeof( AboriginalFootwraps), 0.0498344f ) 
,new Loot( typeof( AboriginalSash), 0.0482269f ) 
,new Loot( typeof( AncestralRobe), 0.0578722f ) 
,new Loot( typeof( AncestralTunic), 0.0337588f ) 
,new Loot( typeof( AncestralWoollies), 0.091631f ) 
,new Loot( typeof( BarbaricClothBoots), 0.0353664f ) 
,new Loot( typeof( BarbaricClothGloves), 0.0417966f ) 
,new Loot( typeof( BarbaricLoincloth), 0.0273286f ) 
,new Loot( typeof( BattleChainPants), 0.0369739f ) 
,new Loot( typeof( BattleChainTunic), 0.0691252f ) 
,new Loot( typeof( BirchwoodMaul), 0.0691252f ) 
,new Loot( typeof( BlazingWand), 0.0289361f ) 
,new Loot( typeof( BloodspatteredGloves), 0.0289361f ) 
,new Loot( typeof( BloodspatteredSabatons), 0.0289361f ) 
,new Loot( typeof( BloodspatteredSash), 0.0498344f ) 
,new Loot( typeof( BloodspatteredWristbands), 0.0305437f ) 
,new Loot( typeof( BrackwaterBoots), 0.0353664f ) 
,new Loot( typeof( BrackwaterShield), 0.0562647f ) 
,new Loot( typeof( CeremonialBuckler), 0.0530495f ) 
,new Loot( typeof( CeremonialLeatherGloves), 0.051442f ) 
,new Loot( typeof( CompactShotgun), 0.101276f ) 
,new Loot( typeof( CurvedDagger), 0.104492f ) 
,new Loot( typeof( DwarvenHatchet), 0.0594798f ) 
,new Loot( typeof( FeralBindings), 0.0241134f ) 
,new Loot( typeof( FeralCloak), 0.0450117f ) 
,new Loot( typeof( FireWand), 0.0417966f ) 
,new Loot( typeof( GrizzlyBuckler), 0.0610874f ) 
,new Loot( typeof( GrizzlyJerkin), 0.0337588f ) 
,new Loot( typeof( GrizzlyPants), 0.0787705f ) 
,new Loot( typeof( HeavyShortbow), 0.0530495f ) 
,new Loot( typeof( LupineCord), 0.0353664f ) 
,new Loot( typeof( LupineSlippers), 0.0225059f ) 
,new Loot( typeof( Malachite), 0.0755554f ) 
,new Loot( typeof( MercSword), 0.0289361f ) 
,new Loot( typeof( MysticsCape), 0.0498344f ) 
,new Loot( typeof( NativeBranch), 0.0739479f ) 
,new Loot( typeof( NativePants), 0.0884159f ) 
,new Loot( typeof( PatternRedLinenRobe), 0.0225059f ) 
,new Loot( typeof( PriestsMace), 0.0546571f ) 
,new Loot( typeof( RaiderShortsword), 0.0385815f ) 
,new Loot( typeof( RecipeElixirOfGiantGrowth), 0.0305437f ) 
,new Loot( typeof( RecipeSavoryDeviateDelight), 0.0482269f ) 
,new Loot( typeof( SchematicMechanicalSquirrel), 0.0241134f ) 
,new Loot( typeof( SergeantsWarhammer), 0.0225059f ) 
,new Loot( typeof( ShadowWand), 0.0900235f ) 
,new Loot( typeof( Shadowgem), 0.0675176f ) 
,new Loot( typeof( ShortBastardSword), 0.0369739f ) 
,new Loot( typeof( SpikedClub), 0.0932386f ) 
,new Loot( typeof( StaunchHammer), 0.13182f ) 
,new Loot( typeof( SturdyQuarterstaff), 0.130213f ) 
,new Loot( typeof( Tigerseye), 0.266855f ) 
,new Loot( typeof( TribalPants), 0.0337588f ) 
,new Loot( typeof( TribalVest), 0.0835932f ) 
,new Loot( typeof( TwinBladedAxe), 0.051442f ) 
,new Loot( typeof( WarPaintCloak), 0.0417966f ) 
,new Loot( typeof( WarTornPants), 0.0530495f ) 
,new Loot( typeof( WarTornTunic), 0.0208983f ) 
,new Loot( typeof( AboriginalBands), 0.0996688f ) 
,new Loot( typeof( AboriginalCape), 0.0996688f ) 
,new Loot( typeof( BarbaricClothBelt), 0.0691252f ) 
,new Loot( typeof( BarbaricClothBracers), 0.0385815f ) 
,new Loot( typeof( BarbaricClothCloak), 0.040189f ) 
,new Loot( typeof( BattleChainBoots), 0.0208983f ) 
,new Loot( typeof( BloodspatteredCloak), 0.0803781f ) 
,new Loot( typeof( BrackwaterBracers), 0.0337588f ) 
,new Loot( typeof( BrackwaterCloak), 0.0787705f ) 
,new Loot( typeof( BrackwaterGauntlets), 0.091631f ) 
,new Loot( typeof( BrackwaterGirdle), 0.0819857f ) 
,new Loot( typeof( CeremonialCloak), 0.0289361f ) 
,new Loot( typeof( CeremonialLeatherAnkleguards), 0.0289361f ) 
,new Loot( typeof( CeremonialLeatherBelt), 0.0691252f ) 
,new Loot( typeof( CeremonialLeatherBracers), 0.0996688f ) 
,new Loot( typeof( GrizzlyGloves), 0.0884159f ) 
,new Loot( typeof( GrizzlySlippers), 0.0691252f ) 
,new Loot( typeof( HaunchOfMeat), 4.64907f ) 
,new Loot( typeof( IceColdMilk), 2.31328f ) 
,new Loot( typeof( LesserHealingPotion), 1.41626f ) 
,new Loot( typeof( LinenCloth), 37.7038f ) 
,new Loot( typeof( LupineCloak), 0.0948462f ) 
,new Loot( typeof( LupineCuffs), 0.0691252f ) 
,new Loot( typeof( MinorManaPotion), 0.660708f ) 
,new Loot( typeof( NativeHandwraps), 0.0884159f ) 
,new Loot( typeof( NativeSandals), 0.0900235f ) 
,new Loot( typeof( NativeSash), 0.0482269f ) 
,new Loot( typeof( RedLeatherBag), 0.0225059f ) 
,new Loot( typeof( ScrollOfIntellect), 0.178439f ) 
,new Loot( typeof( ScrollOfProtection), 0.297399f ) 
,new Loot( typeof( ScrollOfSpirit), 0.276501f ) 
,new Loot( typeof( ScrollOfStamina), 0.186477f ) 
,new Loot( typeof( TribalBoots), 0.025721f ) 
,new Loot( typeof( TribalGloves), 0.0369739f ) 
,new Loot( typeof( WarTornGirdle), 0.0707327f ) 
,new Loot( typeof( WarTornGreaves), 0.0755554f ) 
,new Loot( typeof( WarTornHandgrips), 0.0241134f ) 
,new Loot( typeof( CalicoBelt), 0.279716f ) 
,new Loot( typeof( CalicoBracers), 0.25721f ) 
,new Loot( typeof( CalicoCloak), 0.279716f ) 
,new Loot( typeof( CalicoGloves), 0.315082f ) 
,new Loot( typeof( CalicoPants), 0.311867f ) 
,new Loot( typeof( CalicoShoes), 0.242742f ) 
,new Loot( typeof( CalicoTunic), 0.310259f ) 
,new Loot( typeof( CheapBlunderbuss), 0.352056f ) 
,new Loot( typeof( CommonersSword), 0.411536f ) 
,new Loot( typeof( CrudeBattleAxe), 0.356879f ) 
,new Loot( typeof( FeebleShortbow), 0.37617f ) 
,new Loot( typeof( FishermanKnife), 0.307044f ) 
,new Loot( typeof( HeavyHammer), 0.390638f ) 
,new Loot( typeof( OldGreatsword), 0.348841f ) 
,new Loot( typeof( RoughWoodenStaff), 0.364917f ) 
,new Loot( typeof( RustyWarhammer), 0.366524f ) 
,new Loot( typeof( WarpedCloak), 0.281323f ) 
,new Loot( typeof( WarpedLeatherBelt), 0.231489f ) 
,new Loot( typeof( WarpedLeatherBoots), 0.266855f ) 
,new Loot( typeof( WarpedLeatherBracers), 0.300614f ) 
,new Loot( typeof( WarpedLeatherGloves), 0.290969f ) 
,new Loot( typeof( WarpedLeatherPants), 0.284538f ) 
,new Loot( typeof( WarpedLeatherVest), 0.20416f ) 
,new Loot( typeof( WoodenBuckler), 0.242742f ) 
,new Loot( typeof( WoodenShield), 0.255602f ) 
,new Loot( typeof( WornCloak), 0.239527f ) 
,new Loot( typeof( WornHatchet), 0.369739f ) 
,new Loot( typeof( WornMailBelt), 0.178439f ) 
,new Loot( typeof( WornMailBoots), 0.196123f ) 
,new Loot( typeof( WornMailBracers), 0.207375f ) 
,new Loot( typeof( WornMailGloves), 0.253995f ) 
,new Loot( typeof( WornMailPants), 0.183262f ) 
,new Loot( typeof( WornMailVest), 0.20416f ) 
};
		
		public static Loot[] LazyPeon = new Loot[] {};
		
		public static Loot[] HordePeon = new Loot[] {new Loot( typeof( BarbarianWarAxe), 0.0434028f ) 
,new Loot( typeof( Battlesmasher), 0.0434028f ) 
,new Loot( typeof( BristlebarkAmice), 0.0434028f ) 
,new Loot( typeof( DireWand), 0.0434028f ) 
,new Loot( typeof( DokebiBracers), 0.173611f ) 
,new Loot( typeof( FighterBroadsword), 0.0434028f ) 
,new Loot( typeof( FormulaEnchantCloakLesserShadowResistance), 0.0434028f ) 
,new Loot( typeof( GreenweaveLeggings), 0.0434028f ) 
,new Loot( typeof( GruntsChestpiece), 0.0434028f ) 
,new Loot( typeof( HeartRing), 0.0434028f ) 
,new Loot( typeof( HeavyBronzeLockbox), 0.0434028f ) 
,new Loot( typeof( HeftyBattlehammer), 0.0434028f ) 
,new Loot( typeof( HulkingChestguard), 0.0868056f ) 
,new Loot( typeof( HulkingShield), 0.0434028f ) 
,new Loot( typeof( HulkingSpaulders), 0.0434028f ) 
,new Loot( typeof( Jade), 0.173611f ) 
,new Loot( typeof( LesserMoonstone), 0.434028f ) 
,new Loot( typeof( ManualStrongAntiVenom), 0.0434028f ) 
,new Loot( typeof( MossAgate), 0.130208f ) 
,new Loot( typeof( PathfinderBracers), 0.0434028f ) 
,new Loot( typeof( PatternGrayWoolenRobe), 0.0434028f ) 
,new Loot( typeof( PlansSilveredBronzeLeggings), 0.0434028f ) 
,new Loot( typeof( PrecisionBow), 0.0868056f ) 
,new Loot( typeof( ResilientCape), 0.0868056f ) 
,new Loot( typeof( RigidShoulders), 0.0434028f ) 
,new Loot( typeof( RigidTunic), 0.0434028f ) 
,new Loot( typeof( SentrysSash), 0.0434028f ) 
,new Loot( typeof( SentrysSlippers), 0.130208f ) 
,new Loot( typeof( SlayersGloves), 0.130208f ) 
,new Loot( typeof( SpikedChainGauntlets), 0.0868056f ) 
,new Loot( typeof( SpikedChainShoulderPads), 0.130208f ) 
,new Loot( typeof( SpikedChainWristbands), 0.0434028f ) 
,new Loot( typeof( WatchersBoots), 0.0434028f ) 
,new Loot( typeof( WatchersCinch), 0.130208f ) 
,new Loot( typeof( WatchersHandwraps), 0.0434028f ) 
,new Loot( typeof( WatchersJerkin), 0.0434028f ) 
,new Loot( typeof( WranglersMantle), 0.0434028f ) 
,new Loot( typeof( WranglersWraps), 0.0434028f ) 
,new Loot( typeof( HealingPotion), 1.5625f ) 
,new Loot( typeof( LesserManaPotion), 0.651042f ) 
,new Loot( typeof( MelonJuice), 2.30035f ) 
,new Loot( typeof( MuttonChop), 4.77431f ) 
,new Loot( typeof( ScrollOfIntellectII), 0.0868056f ) 
,new Loot( typeof( ScrollOfProtectionII), 0.347222f ) 
,new Loot( typeof( ScrollOfSpiritII), 0.434028f ) 
,new Loot( typeof( ScrollOfStaminaII), 0.217014f ) 
,new Loot( typeof( ShredderOperatingManualPage1), 0.694444f ) 
,new Loot( typeof( ShredderOperatingManualPage10), 1.17188f ) 
,new Loot( typeof( ShredderOperatingManualPage11), 0.911458f ) 
,new Loot( typeof( ShredderOperatingManualPage12), 1.12847f ) 
,new Loot( typeof( ShredderOperatingManualPage2), 0.824653f ) 
,new Loot( typeof( ShredderOperatingManualPage3), 0.998264f ) 
,new Loot( typeof( ShredderOperatingManualPage4), 1.17188f ) 
,new Loot( typeof( ShredderOperatingManualPage5), 0.520833f ) 
,new Loot( typeof( ShredderOperatingManualPage6), 1.12847f ) 
,new Loot( typeof( ShredderOperatingManualPage7), 1.08507f ) 
,new Loot( typeof( ShredderOperatingManualPage8), 0.737847f ) 
,new Loot( typeof( ShredderOperatingManualPage9), 1.17188f ) 
,new Loot( typeof( SilkCloth), 24.2188f ) 
,new Loot( typeof( WoolCloth), 8.81076f ) 
,new Loot( typeof( BulkyBludgeon), 0.0434028f ) 
,new Loot( typeof( CrossStitchedBelt), 0.130208f ) 
,new Loot( typeof( CrossStitchedGloves), 0.130208f ) 
,new Loot( typeof( CrossStitchedPants), 0.0868056f ) 
,new Loot( typeof( CrossStitchedSandals), 0.217014f ) 
,new Loot( typeof( CrossStitchedShoulderpads), 0.130208f ) 
,new Loot( typeof( CrossStitchedVest), 0.130208f ) 
,new Loot( typeof( DeftStiletto), 0.173611f ) 
,new Loot( typeof( LongBastardSword), 0.173611f ) 
,new Loot( typeof( MeatCleaver), 0.0868056f ) 
,new Loot( typeof( OakenWarStaff), 0.260417f ) 
,new Loot( typeof( OiledBlunderbuss), 0.217014f ) 
,new Loot( typeof( ReinforcedChainBelt), 0.173611f ) 
,new Loot( typeof( ReinforcedChainBracers), 0.0868056f ) 
,new Loot( typeof( ReinforcedChainGloves), 0.130208f ) 
,new Loot( typeof( ReinforcedChainPants), 0.0434028f ) 
,new Loot( typeof( RockMaul), 0.130208f ) 
,new Loot( typeof( StiffRecurveBow), 0.173611f ) 
,new Loot( typeof( StoneWarAxe), 0.130208f ) 
,new Loot( typeof( TargeShield), 0.130208f ) 
,new Loot( typeof( ToughCloak), 0.130208f ) 
,new Loot( typeof( ToughLeatherArmor), 0.0434028f ) 
,new Loot( typeof( ToughLeatherBelt), 0.173611f ) 
,new Loot( typeof( ToughLeatherBoots), 0.0434028f ) 
,new Loot( typeof( ToughLeatherBracers), 0.0868056f ) 
,new Loot( typeof( ToughLeatherGloves), 0.0868056f ) 
,new Loot( typeof( ToughLeatherPants), 0.217014f ) 
,new Loot( typeof( ToughLeatherShoulderpads), 0.130208f ) 
,new Loot( typeof( TowerShield), 0.0868056f ) 
};
		
	}
}