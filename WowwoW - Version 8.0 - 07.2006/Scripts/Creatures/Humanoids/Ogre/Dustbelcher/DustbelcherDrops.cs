using System;
using System.Collections;
using Server;
using Server.Items;

namespace Server
{
	public class DustbelcherDrops
	{
		public static Loot[] DustbelcherWarrior = new Loot[] {new Loot( typeof( Aquamarine), 0.0640461f ) 
,new Loot( typeof( ArchersBelt), 0.0320231f ) 
,new Loot( typeof( ArchersShoulderpads), 0.0240173f ) 
,new Loot( typeof( AuroraBoots), 0.0400288f ) 
,new Loot( typeof( BallastMaul), 0.0320231f ) 
,new Loot( typeof( CeruleanRing), 0.0240173f ) 
,new Loot( typeof( ChiefBrigadierGauntlets), 0.0240173f ) 
,new Loot( typeof( Citrine), 0.168121f ) 
,new Loot( typeof( CombatShield), 0.0240173f ) 
,new Loot( typeof( ConjurersGloves), 0.0240173f ) 
,new Loot( typeof( ConjurersMantle), 0.0240173f ) 
,new Loot( typeof( DeadlyKris), 0.0480346f ) 
,new Loot( typeof( GiantClub), 0.0400288f ) 
,new Loot( typeof( GloomReaper), 0.0320231f ) 
,new Loot( typeof( GlyphedBracers), 0.0240173f ) 
,new Loot( typeof( InsigniaChestguard), 0.0240173f ) 
,new Loot( typeof( InsigniaLeggings), 0.0320231f ) 
,new Loot( typeof( IronLockbox), 0.0240173f ) 
,new Loot( typeof( Jade), 0.0960692f ) 
,new Loot( typeof( KnightsBracers), 0.0240173f ) 
,new Loot( typeof( LongRedwoodBow), 0.0480346f ) 
,new Loot( typeof( MailCombatBoots), 0.0480346f ) 
,new Loot( typeof( MailCombatHeadguard), 0.0240173f ) 
,new Loot( typeof( MailCombatLeggings), 0.0400288f ) 
,new Loot( typeof( MercenaryBlade), 0.0400288f ) 
,new Loot( typeof( NightskyCowl), 0.0240173f ) 
,new Loot( typeof( PendantOfMyzrael), 0.0320231f ) 
,new Loot( typeof( SentinelBracers), 0.0240173f ) 
,new Loot( typeof( SentinelGirdle), 0.0320231f ) 
,new Loot( typeof( StrongIronLockbox), 0.128092f ) 
,new Loot( typeof( TwilightBelt), 0.0320231f ) 
,new Loot( typeof( TwilightCuffs), 0.0240173f ) 
,new Loot( typeof( TwilightGloves), 0.0320231f ) 
,new Loot( typeof( TwilightMantle), 0.0240173f ) 
,new Loot( typeof( GreaterHealingPotion), 1.60115f ) 
,new Loot( typeof( Kingsblood), 0.0240173f ) 
,new Loot( typeof( LargeKnapsack), 0.0240173f ) 
,new Loot( typeof( LesserManaPotion), 0.784565f ) 
,new Loot( typeof( MageweaveCloth), 4.91554f ) 
,new Loot( typeof( ScrapMetal), 10.7277f ) 
,new Loot( typeof( ScrollOfAgilityII), 0.288208f ) 
,new Loot( typeof( ScrollOfProtectionIII), 0.168121f ) 
,new Loot( typeof( ScrollOfSpiritIII), 0.272196f ) 
,new Loot( typeof( ScrollOfStrengthII), 0.288208f ) 
,new Loot( typeof( SilkCloth), 29.125f ) 
,new Loot( typeof( SupplyCrate), 0.136098f ) 
,new Loot( typeof( SweetNectar), 2.31367f ) 
,new Loot( typeof( WildHogShank), 4.55528f ) 
,new Loot( typeof( BroadClaymore), 0.120086f ) 
,new Loot( typeof( DoubleMailBelt), 0.0320231f ) 
,new Loot( typeof( DoubleMailBoots), 0.0800576f ) 
,new Loot( typeof( DoubleMailBracers), 0.0320231f ) 
,new Loot( typeof( DoubleMailGloves), 0.0640461f ) 
,new Loot( typeof( DoubleMailPants), 0.0240173f ) 
,new Loot( typeof( DoubleMailShoulderpads), 0.0880634f ) 
,new Loot( typeof( DoubleMailVest), 0.0560403f ) 
,new Loot( typeof( DoubleStitchedCloak), 0.0480346f ) 
,new Loot( typeof( HardenedCloak), 0.0560403f ) 
,new Loot( typeof( HardenedLeatherBelt), 0.0480346f ) 
,new Loot( typeof( HardenedLeatherBoots), 0.0640461f ) 
,new Loot( typeof( HardenedLeatherBracers), 0.0960692f ) 
,new Loot( typeof( HardenedLeatherGloves), 0.0560403f ) 
,new Loot( typeof( HardenedLeatherHelm), 0.0560403f ) 
,new Loot( typeof( HardenedLeatherPants), 0.0720519f ) 
,new Loot( typeof( HardenedLeatherShoulderpads), 0.0640461f ) 
,new Loot( typeof( HardenedLeatherTunic), 0.0400288f ) 
,new Loot( typeof( HeftyWarAxe), 0.120086f ) 
,new Loot( typeof( InterlacedBelt), 0.0880634f ) 
,new Loot( typeof( InterlacedBoots), 0.0400288f ) 
,new Loot( typeof( InterlacedBracers), 0.0720519f ) 
,new Loot( typeof( InterlacedCloak), 0.0480346f ) 
,new Loot( typeof( InterlacedCowl), 0.0400288f ) 
,new Loot( typeof( InterlacedGloves), 0.0800576f ) 
,new Loot( typeof( InterlacedPants), 0.0800576f ) 
,new Loot( typeof( InterlacedVest), 0.0640461f ) 
,new Loot( typeof( KeenAxe), 0.120086f ) 
,new Loot( typeof( LargeWarClub), 0.112081f ) 
,new Loot( typeof( LightScimitar), 0.0880634f ) 
,new Loot( typeof( LongBarreledMusket), 0.160115f ) 
,new Loot( typeof( MetalStave), 0.184133f ) 
,new Loot( typeof( ReflectiveHeater), 0.0480346f ) 
,new Loot( typeof( ReinforcedBuckler), 0.0560403f ) 
,new Loot( typeof( ShinyDirk), 0.168121f ) 
,new Loot( typeof( StoneClub), 0.136098f ) 
,new Loot( typeof( TautCompoundBow), 0.168121f ) 
};
		
		public static Loot[] DustbelcherMystic = new Loot[] {new Loot( typeof( Aquamarine), 0.059654f ) 
,new Loot( typeof( AuroraCloak), 0.0497117f ) 
,new Loot( typeof( AuroraSash), 0.0397693f ) 
,new Loot( typeof( BallastMaul), 0.0397693f ) 
,new Loot( typeof( Citrine), 0.29827f ) 
,new Loot( typeof( ConjurersBreeches), 0.029827f ) 
,new Loot( typeof( ConjurersSphere), 0.029827f ) 
,new Loot( typeof( ExplosiveShotgun), 0.029827f ) 
,new Loot( typeof( GiantClub), 0.059654f ) 
,new Loot( typeof( GlyphedCloak), 0.0497117f ) 
,new Loot( typeof( Jade), 0.029827f ) 
,new Loot( typeof( JazeraintBracers), 0.0397693f ) 
,new Loot( typeof( MercenaryBlade), 0.0497117f ) 
,new Loot( typeof( NightskyArmor), 0.029827f ) 
,new Loot( typeof( NightskyTrousers), 0.029827f ) 
,new Loot( typeof( OgremindRing), 0.417578f ) 
,new Loot( typeof( SmoothboreGun), 0.029827f ) 
,new Loot( typeof( StrongIronLockbox), 0.059654f ) 
,new Loot( typeof( GreaterHealingPotion), 1.20302f ) 
,new Loot( typeof( HeavyStone), 0.029827f ) 
,new Loot( typeof( IronOre), 0.0397693f ) 
,new Loot( typeof( LesserManaPotion), 0.686021f ) 
,new Loot( typeof( MageweaveCloth), 4.97117f ) 
,new Loot( typeof( ScrapMetal), 9.36568f ) 
,new Loot( typeof( ScrollOfAgilityII), 0.218731f ) 
,new Loot( typeof( ScrollOfProtectionIII), 0.16902f ) 
,new Loot( typeof( ScrollOfSpiritIII), 0.178962f ) 
,new Loot( typeof( ScrollOfStrengthII), 0.218731f ) 
,new Loot( typeof( SilkCloth), 28.7532f ) 
,new Loot( typeof( SupplyCrate), 0.149135f ) 
,new Loot( typeof( SweetNectar), 2.38616f ) 
,new Loot( typeof( WildHogShank), 4.46411f ) 
,new Loot( typeof( BroadClaymore), 0.12925f ) 
,new Loot( typeof( DoubleMailBelt), 0.059654f ) 
,new Loot( typeof( DoubleMailBoots), 0.0397693f ) 
,new Loot( typeof( DoubleMailBracers), 0.0994233f ) 
,new Loot( typeof( DoubleMailCoif), 0.0497117f ) 
,new Loot( typeof( DoubleMailGloves), 0.089481f ) 
,new Loot( typeof( DoubleMailPants), 0.0795387f ) 
,new Loot( typeof( DoubleMailShoulderpads), 0.029827f ) 
,new Loot( typeof( DoubleMailVest), 0.0695963f ) 
,new Loot( typeof( DoubleStitchedCloak), 0.059654f ) 
,new Loot( typeof( HardenedCloak), 0.0994233f ) 
,new Loot( typeof( HardenedLeatherBelt), 0.109366f ) 
,new Loot( typeof( HardenedLeatherBoots), 0.0695963f ) 
,new Loot( typeof( HardenedLeatherBracers), 0.0994233f ) 
,new Loot( typeof( HardenedLeatherGloves), 0.0695963f ) 
,new Loot( typeof( HardenedLeatherHelm), 0.0397693f ) 
,new Loot( typeof( HardenedLeatherTunic), 0.0695963f ) 
,new Loot( typeof( HeftyWarAxe), 0.089481f ) 
,new Loot( typeof( InterlacedBelt), 0.109366f ) 
,new Loot( typeof( InterlacedBoots), 0.029827f ) 
,new Loot( typeof( InterlacedBracers), 0.0994233f ) 
,new Loot( typeof( InterlacedCloak), 0.0497117f ) 
,new Loot( typeof( InterlacedCowl), 0.0397693f ) 
,new Loot( typeof( InterlacedGloves), 0.109366f ) 
,new Loot( typeof( InterlacedShoulderpads), 0.059654f ) 
,new Loot( typeof( InterlacedVest), 0.0695963f ) 
,new Loot( typeof( KeenAxe), 0.16902f ) 
,new Loot( typeof( LargeWarClub), 0.109366f ) 
,new Loot( typeof( LightScimitar), 0.0994233f ) 
,new Loot( typeof( LongBarreledMusket), 0.109366f ) 
,new Loot( typeof( MetalStave), 0.0994233f ) 
,new Loot( typeof( ReflectiveHeater), 0.0397693f ) 
,new Loot( typeof( ShinyDirk), 0.0695963f ) 
,new Loot( typeof( StoneClub), 0.139193f ) 
,new Loot( typeof( TautCompoundBow), 0.139193f ) 
};
		
		public static Loot[] DustbelcherBrute = new Loot[] {new Loot( typeof( MidnightMace), 0.0215889f ) 
,new Loot( typeof( Aquamarine), 0.0863558f ) 
,new Loot( typeof( AuroraPants), 0.0431779f ) 
,new Loot( typeof( BlackPearl), 0.0215889f ) 
,new Loot( typeof( CaptainsBoots), 0.0215889f ) 
,new Loot( typeof( CaptainsBracers), 0.0215889f ) 
,new Loot( typeof( CaptainsGauntlets), 0.0215889f ) 
,new Loot( typeof( ChiefBrigadierBoots), 0.0215889f ) 
,new Loot( typeof( ChiefBrigadierGauntlets), 0.0215889f ) 
,new Loot( typeof( ChiefBrigadierGirdle), 0.0215889f ) 
,new Loot( typeof( ChiefBrigadierShield), 0.0215889f ) 
,new Loot( typeof( Citrine), 0.194301f ) 
,new Loot( typeof( EmberWand), 0.0215889f ) 
,new Loot( typeof( EmbossedPlateGirdle), 0.0215889f ) 
,new Loot( typeof( ExplosiveShotgun), 0.0215889f ) 
,new Loot( typeof( GlyphedBelt), 0.0215889f ) 
,new Loot( typeof( GlyphedBuckler), 0.0431779f ) 
,new Loot( typeof( GlyphedLeggings), 0.0215889f ) 
,new Loot( typeof( GoblinNutcracker), 0.0215889f ) 
,new Loot( typeof( GoldBar), 0.0431779f ) 
,new Loot( typeof( GoldOre), 0.0215889f ) 
,new Loot( typeof( GreaterScythe), 0.0647668f ) 
,new Loot( typeof( HuntsmansBands), 0.0215889f ) 
,new Loot( typeof( HuntsmansBelt), 0.0215889f ) 
,new Loot( typeof( HuntsmansCape), 0.0863558f ) 
,new Loot( typeof( HuntsmansGloves), 0.0215889f ) 
,new Loot( typeof( ImperialCloak), 0.0215889f ) 
,new Loot( typeof( ImperialLeatherHelm), 0.0215889f ) 
,new Loot( typeof( Jade), 0.0647668f ) 
,new Loot( typeof( JazeraintBoots), 0.0215889f ) 
,new Loot( typeof( JazeraintCloak), 0.0215889f ) 
,new Loot( typeof( JazeraintGauntlets), 0.0215889f ) 
,new Loot( typeof( JazeraintHelm), 0.0215889f ) 
,new Loot( typeof( JazeraintShield), 0.0215889f ) 
,new Loot( typeof( JoustersGirdle), 0.0215889f ) 
,new Loot( typeof( JoustersGreaves), 0.0215889f ) 
,new Loot( typeof( JoustersVisor), 0.0215889f ) 
,new Loot( typeof( KnightsBreastplate), 0.0215889f ) 
,new Loot( typeof( KnightsHeadguard), 0.0431779f ) 
,new Loot( typeof( MonksStaff), 0.0215889f ) 
,new Loot( typeof( Murphstar), 0.0431779f ) 
,new Loot( typeof( PatternAzureShoulders), 0.0215889f ) 
,new Loot( typeof( PatternGuardianCloak), 0.0215889f ) 
,new Loot( typeof( PatternSpiderBelt), 0.0215889f ) 
,new Loot( typeof( PatternWhiteBanditMask), 0.0215889f ) 
,new Loot( typeof( PendantOfMyzrael), 0.0647668f ) 
,new Loot( typeof( RangerCord), 0.0215889f ) 
,new Loot( typeof( RangerHelm), 0.0215889f ) 
,new Loot( typeof( RegalSash), 0.0647668f ) 
,new Loot( typeof( RenegadeShield), 0.0215889f ) 
,new Loot( typeof( SavageAxe), 0.0647668f ) 
,new Loot( typeof( SentinelBuckler), 0.0215889f ) 
,new Loot( typeof( SentinelTrousers), 0.0647668f ) 
,new Loot( typeof( SequoiaBranch), 0.0215889f ) 
,new Loot( typeof( SilverOre), 0.0215889f ) 
,new Loot( typeof( SmoothboreGun), 0.0215889f ) 
,new Loot( typeof( SorcererHat), 0.0215889f ) 
,new Loot( typeof( SorcererMantle), 0.0215889f ) 
,new Loot( typeof( SorcererSash), 0.0215889f ) 
,new Loot( typeof( StrongIronLockbox), 0.107945f ) 
,new Loot( typeof( Tigerbane), 0.0215889f ) 
,new Loot( typeof( TruesilverBar), 0.0215889f ) 
,new Loot( typeof( TwilightPants), 0.0431779f ) 
,new Loot( typeof( WelkenRing), 0.0215889f ) 
,new Loot( typeof( DeliciousCaveMold), 0.107945f ) 
,new Loot( typeof( Fadeleaf), 0.0215889f ) 
,new Loot( typeof( Firebloom), 0.0215889f ) 
,new Loot( typeof( GoldenbarkApple), 0.0863558f ) 
,new Loot( typeof( GreaterHealingPotion), 1.38169f ) 
,new Loot( typeof( HealingPotion), 0.0431779f ) 
,new Loot( typeof( HeavyLeather), 0.0647668f ) 
,new Loot( typeof( HeavyStone), 0.0431779f ) 
,new Loot( typeof( IronOre), 0.107945f ) 
,new Loot( typeof( LargeKnapsack), 0.0431779f ) 
,new Loot( typeof( LesserManaPotion), 0.647668f ) 
,new Loot( typeof( Liferoot), 0.0215889f ) 
,new Loot( typeof( MageweaveCloth), 5.05181f ) 
,new Loot( typeof( ManaPotion), 0.0431779f ) 
,new Loot( typeof( MediumLeather), 0.0215889f ) 
,new Loot( typeof( MithrilOre), 0.0647668f ) 
,new Loot( typeof( MulgoreSpiceBread), 0.0647668f ) 
,new Loot( typeof( ScrapMetal), 8.16062f ) 
,new Loot( typeof( ScrollOfAgilityII), 0.172712f ) 
,new Loot( typeof( ScrollOfProtectionIII), 0.194301f ) 
,new Loot( typeof( ScrollOfSpiritIII), 0.151123f ) 
,new Loot( typeof( ScrollOfStrengthII), 0.237478f ) 
,new Loot( typeof( SilkCloth), 30.0518f ) 
,new Loot( typeof( SolidStone), 0.0431779f ) 
,new Loot( typeof( StormwindBrie), 0.129534f ) 
,new Loot( typeof( SweetNectar), 2.72021f ) 
,new Loot( typeof( TinOre), 0.0215889f ) 
,new Loot( typeof( WildHogShank), 4.85751f ) 
,new Loot( typeof( BroadClaymore), 0.0863558f ) 
,new Loot( typeof( DoubleMailBelt), 0.0647668f ) 
,new Loot( typeof( DoubleMailBoots), 0.0863558f ) 
,new Loot( typeof( DoubleMailBracers), 0.194301f ) 
,new Loot( typeof( DoubleMailCoif), 0.0215889f ) 
,new Loot( typeof( DoubleMailGloves), 0.0431779f ) 
,new Loot( typeof( DoubleMailPants), 0.0215889f ) 
,new Loot( typeof( DoubleMailShoulderpads), 0.0431779f ) 
,new Loot( typeof( DoubleStitchedCloak), 0.0431779f ) 
,new Loot( typeof( HardenedCloak), 0.0863558f ) 
,new Loot( typeof( HardenedLeatherBelt), 0.0431779f ) 
,new Loot( typeof( HardenedLeatherBracers), 0.0431779f ) 
,new Loot( typeof( HardenedLeatherGloves), 0.0647668f ) 
,new Loot( typeof( HardenedLeatherHelm), 0.172712f ) 
,new Loot( typeof( HardenedLeatherPants), 0.0215889f ) 
,new Loot( typeof( HardenedLeatherShoulderpads), 0.0215889f ) 
,new Loot( typeof( HardenedLeatherTunic), 0.0431779f ) 
,new Loot( typeof( HeftyWarAxe), 0.0647668f ) 
,new Loot( typeof( InterlacedBelt), 0.0647668f ) 
,new Loot( typeof( InterlacedBoots), 0.107945f ) 
,new Loot( typeof( InterlacedBracers), 0.0431779f ) 
,new Loot( typeof( InterlacedCloak), 0.0215889f ) 
,new Loot( typeof( InterlacedCowl), 0.0215889f ) 
,new Loot( typeof( InterlacedGloves), 0.0647668f ) 
,new Loot( typeof( InterlacedPants), 0.0863558f ) 
,new Loot( typeof( InterlacedShoulderpads), 0.0431779f ) 
,new Loot( typeof( InterlacedVest), 0.0863558f ) 
,new Loot( typeof( KeenAxe), 0.0863558f ) 
,new Loot( typeof( LargeWarClub), 0.0431779f ) 
,new Loot( typeof( LongBarreledMusket), 0.107945f ) 
,new Loot( typeof( MetalStave), 0.0647668f ) 
,new Loot( typeof( ReflectiveHeater), 0.0431779f ) 
,new Loot( typeof( ReinforcedBuckler), 0.0215889f ) 
,new Loot( typeof( ShinyDirk), 0.0863558f ) 
,new Loot( typeof( StoneClub), 0.107945f ) 
,new Loot( typeof( TautCompoundBow), 0.259067f ) 
};
		
		public static Loot[] DustbelcherWyrmhunter = new Loot[] {new Loot( typeof( Aquamarine), 0.0899914f ) 
,new Loot( typeof( CaptainsBracers), 0.023476f ) 
,new Loot( typeof( ChiefBrigadierPauldrons), 0.023476f ) 
,new Loot( typeof( Citrine), 0.125205f ) 
,new Loot( typeof( EmberWand), 0.0273887f ) 
,new Loot( typeof( FieldPlateVambraces), 0.046952f ) 
,new Loot( typeof( ForestHoop), 0.023476f ) 
,new Loot( typeof( GreaterScythe), 0.0430394f ) 
,new Loot( typeof( Jade), 0.0273887f ) 
,new Loot( typeof( JazeraintBoots), 0.023476f ) 
,new Loot( typeof( JazeraintGauntlets), 0.0273887f ) 
,new Loot( typeof( JoustersVisor), 0.0313014f ) 
,new Loot( typeof( NoblesBrand), 0.0547774f ) 
,new Loot( typeof( RangerCord), 0.0273887f ) 
,new Loot( typeof( RazorBlade), 0.023476f ) 
,new Loot( typeof( RegalBoots), 0.023476f ) 
,new Loot( typeof( SequoiaBranch), 0.023476f ) 
,new Loot( typeof( StarRuby), 0.035214f ) 
,new Loot( typeof( SteelLockbox), 0.0313014f ) 
,new Loot( typeof( StrongIronLockbox), 0.0665154f ) 
,new Loot( typeof( TrueshotBow), 0.0273887f ) 
,new Loot( typeof( TwilightArmor), 0.0273887f ) 
,new Loot( typeof( GreaterHealingPotion), 1.28727f ) 
,new Loot( typeof( LesserManaPotion), 0.657328f ) 
,new Loot( typeof( MageweaveCloth), 4.86345f ) 
,new Loot( typeof( MithrilOre), 0.0508647f ) 
,new Loot( typeof( ScrapMetal), 9.79732f ) 
,new Loot( typeof( ScrollOfAgilityII), 0.219109f ) 
,new Loot( typeof( ScrollOfProtectionIII), 0.195633f ) 
,new Loot( typeof( ScrollOfSpiritIII), 0.152594f ) 
,new Loot( typeof( ScrollOfStrengthII), 0.266062f ) 
,new Loot( typeof( SilkCloth), 28.9694f ) 
,new Loot( typeof( SolidStone), 0.0273887f ) 
,new Loot( typeof( SweetNectar), 2.41412f ) 
,new Loot( typeof( WildHogShank), 4.87519f ) 
,new Loot( typeof( BalancedLongBow), 0.0782534f ) 
,new Loot( typeof( BlockingTarge), 0.0391267f ) 
,new Loot( typeof( BluntingMace), 0.0547774f ) 
,new Loot( typeof( BroadClaymore), 0.05869f ) 
,new Loot( typeof( CrochetBelt), 0.035214f ) 
,new Loot( typeof( CrochetBracers), 0.0430394f ) 
,new Loot( typeof( CrochetCloak), 0.023476f ) 
,new Loot( typeof( CrochetGloves), 0.035214f ) 
,new Loot( typeof( CrochetPants), 0.046952f ) 
,new Loot( typeof( CrochetVest), 0.0273887f ) 
,new Loot( typeof( CrushingMaul), 0.046952f ) 
,new Loot( typeof( DoubleMailBoots), 0.0273887f ) 
,new Loot( typeof( DoubleMailBracers), 0.023476f ) 
,new Loot( typeof( DoubleMailCoif), 0.0273887f ) 
,new Loot( typeof( DoubleMailPants), 0.0391267f ) 
,new Loot( typeof( DoubleMailVest), 0.0273887f ) 
,new Loot( typeof( DoubleStitchedCloak), 0.023476f ) 
,new Loot( typeof( FinePointedDagger), 0.046952f ) 
,new Loot( typeof( HardenedCloak), 0.035214f ) 
,new Loot( typeof( HardenedLeatherBelt), 0.0313014f ) 
,new Loot( typeof( HardenedLeatherBracers), 0.0313014f ) 
,new Loot( typeof( HardenedLeatherGloves), 0.0391267f ) 
,new Loot( typeof( HardenedLeatherPants), 0.023476f ) 
,new Loot( typeof( HardenedLeatherTunic), 0.0313014f ) 
,new Loot( typeof( HeavyFlintAxe), 0.0978167f ) 
,new Loot( typeof( HeavyWarStaff), 0.0665154f ) 
,new Loot( typeof( HeftyWarAxe), 0.070428f ) 
,new Loot( typeof( InterlacedBoots), 0.023476f ) 
,new Loot( typeof( InterlacedBracers), 0.035214f ) 
,new Loot( typeof( InterlacedCloak), 0.0313014f ) 
,new Loot( typeof( InterlacedCowl), 0.0313014f ) 
,new Loot( typeof( InterlacedGloves), 0.035214f ) 
,new Loot( typeof( InterlacedShoulderpads), 0.035214f ) 
,new Loot( typeof( InterlacedVest), 0.023476f ) 
,new Loot( typeof( KeenAxe), 0.0860787f ) 
,new Loot( typeof( LargeWarClub), 0.05869f ) 
,new Loot( typeof( LightScimitar), 0.0547774f ) 
,new Loot( typeof( LongBarreledMusket), 0.0899914f ) 
,new Loot( typeof( MetalStave), 0.0821661f ) 
,new Loot( typeof( OverlinkedChainBelt), 0.0273887f ) 
,new Loot( typeof( OverlinkedChainBoots), 0.0391267f ) 
,new Loot( typeof( OverlinkedChainCloak), 0.023476f ) 
,new Loot( typeof( OverlinkedChainGloves), 0.0626027f ) 
,new Loot( typeof( OverlinkedChainShoulderpads), 0.0391267f ) 
,new Loot( typeof( OverlinkedCoif), 0.035214f ) 
,new Loot( typeof( ProtectivePavise), 0.0273887f ) 
,new Loot( typeof( ReflectiveHeater), 0.035214f ) 
,new Loot( typeof( SentinelMusket), 0.046952f ) 
,new Loot( typeof( SharpShortsword), 0.0782534f ) 
,new Loot( typeof( ShinyDirk), 0.046952f ) 
,new Loot( typeof( SplinteringBattleAxe), 0.046952f ) 
,new Loot( typeof( StoneClub), 0.05869f ) 
,new Loot( typeof( TautCompoundBow), 0.0391267f ) 
,new Loot( typeof( ThickCloak), 0.0430394f ) 
,new Loot( typeof( ThickLeatherBelt), 0.023476f ) 
,new Loot( typeof( ThickLeatherBoots), 0.0313014f ) 
,new Loot( typeof( ThickLeatherBracers), 0.0313014f ) 
,new Loot( typeof( ThickLeatherGloves), 0.0547774f ) 
,new Loot( typeof( ThickLeatherHat), 0.0430394f ) 
,new Loot( typeof( ThickLeatherPants), 0.023476f ) 
,new Loot( typeof( ThickLeatherShoulderpads), 0.0391267f ) 
,new Loot( typeof( WhettedClaymore), 0.0430394f ) 
};
		
		public static Loot[] DustbelcherMauler = new Loot[] {new Loot( typeof( Aquamarine), 0.193966f ) 
,new Loot( typeof( ChiefBrigadierArmor), 0.0269397f ) 
,new Loot( typeof( Citrine), 0.0619612f ) 
,new Loot( typeof( ExquisiteFlamberge), 0.0269397f ) 
,new Loot( typeof( GlyphedBreastplate), 0.0215517f ) 
,new Loot( typeof( HuntsmansShoulders), 0.0215517f ) 
,new Loot( typeof( JazeraintHelm), 0.0242457f ) 
,new Loot( typeof( MonstrousWarAxe), 0.0242457f ) 
,new Loot( typeof( RazorBlade), 0.0269397f ) 
,new Loot( typeof( RegalCuffs), 0.0215517f ) 
,new Loot( typeof( SorcererMantle), 0.0269397f ) 
,new Loot( typeof( StarRuby), 0.0484914f ) 
,new Loot( typeof( SteelLockbox), 0.0835129f ) 
,new Loot( typeof( TrueshotBow), 0.0350216f ) 
,new Loot( typeof( CuredHamSteak), 4.49084f ) 
,new Loot( typeof( GreaterManaPotion), 0.730065f ) 
,new Loot( typeof( MageweaveCloth), 24.3669f ) 
,new Loot( typeof( MithrilOre), 0.0215517f ) 
,new Loot( typeof( MoonberryJuice), 2.26024f ) 
,new Loot( typeof( ScrapMetal), 9.07328f ) 
,new Loot( typeof( ScrollOfIntellectIII), 0.167026f ) 
,new Loot( typeof( ScrollOfProtectionIII), 0.282866f ) 
,new Loot( typeof( ScrollOfSpiritIII), 0.315194f ) 
,new Loot( typeof( ScrollOfStaminaIII), 0.148168f ) 
,new Loot( typeof( SilkCloth), 9.5986f ) 
,new Loot( typeof( SuperiorHealingPotion), 1.34698f ) 
,new Loot( typeof( SweetNectar), 0.0350216f ) 
,new Loot( typeof( BalancedLongBow), 0.0969828f ) 
,new Loot( typeof( BlockingTarge), 0.0619612f ) 
,new Loot( typeof( BluntingMace), 0.121228f ) 
,new Loot( typeof( CrochetBelt), 0.0565733f ) 
,new Loot( typeof( CrochetBoots), 0.0835129f ) 
,new Loot( typeof( CrochetBracers), 0.0619612f ) 
,new Loot( typeof( CrochetCloak), 0.0619612f ) 
,new Loot( typeof( CrochetGloves), 0.0835129f ) 
,new Loot( typeof( CrochetHat), 0.0727371f ) 
,new Loot( typeof( CrochetPants), 0.080819f ) 
,new Loot( typeof( CrochetShoulderpads), 0.0484914f ) 
,new Loot( typeof( CrochetVest), 0.0915948f ) 
,new Loot( typeof( CrushingMaul), 0.102371f ) 
,new Loot( typeof( FinePointedDagger), 0.12931f ) 
,new Loot( typeof( HeavyFlintAxe), 0.0646552f ) 
,new Loot( typeof( HeavyWarStaff), 0.0942888f ) 
,new Loot( typeof( OverlinkedChainArmor), 0.0404095f ) 
,new Loot( typeof( OverlinkedChainBelt), 0.0619612f ) 
,new Loot( typeof( OverlinkedChainBoots), 0.0538793f ) 
,new Loot( typeof( OverlinkedChainBracers), 0.0323276f ) 
,new Loot( typeof( OverlinkedChainCloak), 0.0862069f ) 
,new Loot( typeof( OverlinkedChainGloves), 0.0592672f ) 
,new Loot( typeof( OverlinkedChainPants), 0.0484914f ) 
,new Loot( typeof( OverlinkedChainShoulderpads), 0.0404095f ) 
,new Loot( typeof( OverlinkedCoif), 0.0404095f ) 
,new Loot( typeof( ProtectivePavise), 0.0511853f ) 
,new Loot( typeof( SentinelMusket), 0.102371f ) 
,new Loot( typeof( SharpShortsword), 0.0942888f ) 
,new Loot( typeof( SplinteringBattleAxe), 0.105065f ) 
,new Loot( typeof( ThickCloak), 0.0700431f ) 
,new Loot( typeof( ThickLeatherBelt), 0.078125f ) 
,new Loot( typeof( ThickLeatherBoots), 0.0511853f ) 
,new Loot( typeof( ThickLeatherBracers), 0.0457974f ) 
,new Loot( typeof( ThickLeatherGloves), 0.0673491f ) 
,new Loot( typeof( ThickLeatherHat), 0.0538793f ) 
,new Loot( typeof( ThickLeatherPants), 0.0862069f ) 
,new Loot( typeof( ThickLeatherShoulderpads), 0.078125f ) 
,new Loot( typeof( ThickLeatherTunic), 0.0673491f ) 
,new Loot( typeof( WhettedClaymore), 0.0835129f ) 
};
		
		public static Loot[] DustbelcherShaman = new Loot[] {new Loot( typeof( Aquamarine), 0.246596f ) 
,new Loot( typeof( BrigadeBoots), 0.035962f ) 
,new Loot( typeof( BrigadeBracers), 0.0205497f ) 
,new Loot( typeof( CaptainsBoots), 0.0256871f ) 
,new Loot( typeof( CaptainsBuckler), 0.0205497f ) 
,new Loot( typeof( Citrine), 0.0616491f ) 
,new Loot( typeof( EmberWand), 0.0205497f ) 
,new Loot( typeof( ExquisiteFlamberge), 0.035962f ) 
,new Loot( typeof( GoblinNutcracker), 0.0256871f ) 
,new Loot( typeof( GossamerBracers), 0.0256871f ) 
,new Loot( typeof( HeadstrikerSword), 0.0308246f ) 
,new Loot( typeof( ImperialLeatherHelm), 0.035962f ) 
,new Loot( typeof( IridiumCircle), 0.0205497f ) 
,new Loot( typeof( JazeraintLeggings), 0.0205497f ) 
,new Loot( typeof( JazeraintShield), 0.0308246f ) 
,new Loot( typeof( JoustersChestplate), 0.0256871f ) 
,new Loot( typeof( MistscapeBoots), 0.0256871f ) 
,new Loot( typeof( MistscapeBracers), 0.0205497f ) 
,new Loot( typeof( MistscapeCloak), 0.0205497f ) 
,new Loot( typeof( MistscapeSash), 0.0256871f ) 
,new Loot( typeof( MonksStaff), 0.035962f ) 
,new Loot( typeof( MonstrousWarAxe), 0.0667865f ) 
,new Loot( typeof( RangerBoots), 0.0256871f ) 
,new Loot( typeof( RegalGloves), 0.0205497f ) 
,new Loot( typeof( RoyalBands), 0.0256871f ) 
,new Loot( typeof( SacrificialKris), 0.035962f ) 
,new Loot( typeof( SpiritchaserStaff), 0.0205497f ) 
,new Loot( typeof( StarRuby), 0.0821988f ) 
,new Loot( typeof( SteelLockbox), 0.107886f ) 
,new Loot( typeof( ThinkingCap), 0.508605f ) 
,new Loot( typeof( TrackersShoulderpads), 0.0205497f ) 
,new Loot( typeof( CuredHamSteak), 4.69561f ) 
,new Loot( typeof( DeliciousCaveMold), 0.0205497f ) 
,new Loot( typeof( Goldthorn), 0.0205497f ) 
,new Loot( typeof( GreaterManaPotion), 0.642178f ) 
,new Loot( typeof( JourneymansBackpack), 0.0205497f ) 
,new Loot( typeof( MageweaveCloth), 24.2949f ) 
,new Loot( typeof( MithrilOre), 0.0410994f ) 
,new Loot( typeof( MoonberryJuice), 2.38377f ) 
,new Loot( typeof( MulgoreSpiceBread), 0.0256871f ) 
,new Loot( typeof( ScrapMetal), 8.90316f ) 
,new Loot( typeof( ScrollOfIntellectIII), 0.184947f ) 
,new Loot( typeof( ScrollOfProtectionIII), 0.205497f ) 
,new Loot( typeof( ScrollOfSpiritIII), 0.195222f ) 
,new Loot( typeof( ScrollOfStaminaIII), 0.123298f ) 
,new Loot( typeof( SilkCloth), 9.24737f ) 
,new Loot( typeof( SuperiorHealingPotion), 1.55664f ) 
,new Loot( typeof( SweetNectar), 0.0616491f ) 
,new Loot( typeof( BalancedLongBow), 0.128436f ) 
,new Loot( typeof( BlockingTarge), 0.0770614f ) 
,new Loot( typeof( BluntingMace), 0.154123f ) 
,new Loot( typeof( CrochetBelt), 0.0821988f ) 
,new Loot( typeof( CrochetBoots), 0.071924f ) 
,new Loot( typeof( CrochetBracers), 0.0770614f ) 
,new Loot( typeof( CrochetCloak), 0.0616491f ) 
,new Loot( typeof( CrochetGloves), 0.0308246f ) 
,new Loot( typeof( CrochetHat), 0.0565117f ) 
,new Loot( typeof( CrochetPants), 0.154123f ) 
,new Loot( typeof( CrochetShoulderpads), 0.0565117f ) 
,new Loot( typeof( CrochetVest), 0.0821988f ) 
,new Loot( typeof( CrushingMaul), 0.102749f ) 
,new Loot( typeof( FinePointedDagger), 0.0873362f ) 
,new Loot( typeof( HeavyFlintAxe), 0.143848f ) 
,new Loot( typeof( HeavyWarStaff), 0.0770614f ) 
,new Loot( typeof( OverlinkedChainArmor), 0.0256871f ) 
,new Loot( typeof( OverlinkedChainBelt), 0.0616491f ) 
,new Loot( typeof( OverlinkedChainBoots), 0.0256871f ) 
,new Loot( typeof( OverlinkedChainBracers), 0.0667865f ) 
,new Loot( typeof( OverlinkedChainCloak), 0.0616491f ) 
,new Loot( typeof( OverlinkedChainGloves), 0.0462368f ) 
,new Loot( typeof( OverlinkedChainPants), 0.0513743f ) 
,new Loot( typeof( OverlinkedChainShoulderpads), 0.0462368f ) 
,new Loot( typeof( OverlinkedCoif), 0.0513743f ) 
,new Loot( typeof( ProtectivePavise), 0.071924f ) 
,new Loot( typeof( SentinelMusket), 0.164398f ) 
,new Loot( typeof( SharpShortsword), 0.118161f ) 
,new Loot( typeof( SplinteringBattleAxe), 0.138711f ) 
,new Loot( typeof( ThickCloak), 0.035962f ) 
,new Loot( typeof( ThickLeatherBelt), 0.0565117f ) 
,new Loot( typeof( ThickLeatherBoots), 0.0513743f ) 
,new Loot( typeof( ThickLeatherBracers), 0.102749f ) 
,new Loot( typeof( ThickLeatherGloves), 0.035962f ) 
,new Loot( typeof( ThickLeatherHat), 0.0616491f ) 
,new Loot( typeof( ThickLeatherPants), 0.0462368f ) 
,new Loot( typeof( ThickLeatherTunic), 0.0616491f ) 
,new Loot( typeof( WhettedClaymore), 0.143848f ) 
};
		
		public static Loot[] DustbelcherLord = new Loot[] {new Loot( typeof( Aquamarine), 0.192059f ) 
,new Loot( typeof( BrigadePauldrons), 0.0267989f ) 
,new Loot( typeof( CabalistBelt), 0.0223324f ) 
,new Loot( typeof( CabalistBoots), 0.0267989f ) 
,new Loot( typeof( CabalistBracers), 0.0267989f ) 
,new Loot( typeof( Citrine), 0.0714637f ) 
,new Loot( typeof( CrusaderBow), 0.0223324f ) 
,new Loot( typeof( FuriousFalchion), 0.0446648f ) 
,new Loot( typeof( GoldOre), 0.0223324f ) 
,new Loot( typeof( GossamerBoots), 0.0267989f ) 
,new Loot( typeof( GossamerBracers), 0.0267989f ) 
,new Loot( typeof( ImperialLeatherPants), 0.0223324f ) 
,new Loot( typeof( ImperialLeatherSpaulders), 0.0223324f ) 
,new Loot( typeof( LumberingOgreAxe), 1.00496f ) 
,new Loot( typeof( MistscapePants), 0.0267989f ) 
,new Loot( typeof( MyrmidonsBracers), 0.0759301f ) 
,new Loot( typeof( RoyalAmice), 0.0267989f ) 
,new Loot( typeof( RoyalGloves), 0.0223324f ) 
,new Loot( typeof( RoyalSash), 0.0491313f ) 
,new Loot( typeof( RoyalTrousers), 0.0223324f ) 
,new Loot( typeof( SacrificialKris), 0.0267989f ) 
,new Loot( typeof( SilverOre), 0.0223324f ) 
,new Loot( typeof( SkullcrusherMace), 0.0267989f ) 
,new Loot( typeof( SniperRifle), 0.0267989f ) 
,new Loot( typeof( StarRuby), 0.0759301f ) 
,new Loot( typeof( SteelLockbox), 0.0982625f ) 
,new Loot( typeof( TrackersBelt), 0.0357318f ) 
,new Loot( typeof( TrackersShoulderpads), 0.0223324f ) 
,new Loot( typeof( TruesilverOre), 0.0312654f ) 
,new Loot( typeof( BlackVitriol), 0.0223324f ) 
,new Loot( typeof( CuredHamSteak), 4.76127f ) 
,new Loot( typeof( FineAgedCheddar), 0.0535977f ) 
,new Loot( typeof( GreaterHealingPotion), 0.0535977f ) 
,new Loot( typeof( GreaterManaPotion), 0.714637f ) 
,new Loot( typeof( HeavyStone), 0.0893296f ) 
,new Loot( typeof( IronOre), 0.160793f ) 
,new Loot( typeof( JourneymansBackpack), 0.0446648f ) 
,new Loot( typeof( MageweaveCloth), 24.1503f ) 
,new Loot( typeof( MithrilOre), 0.334986f ) 
,new Loot( typeof( MoonHarvestPumpkin), 0.0669972f ) 
,new Loot( typeof( MoonberryJuice), 2.44763f ) 
,new Loot( typeof( RawBlackTruffle), 0.0357318f ) 
,new Loot( typeof( ScrapMetal), 3.09527f ) 
,new Loot( typeof( ScrollOfIntellectIII), 0.15186f ) 
,new Loot( typeof( ScrollOfProtectionIII), 0.31712f ) 
,new Loot( typeof( ScrollOfSpiritIII), 0.232257f ) 
,new Loot( typeof( ScrollOfStaminaIII), 0.200992f ) 
,new Loot( typeof( SilkCloth), 9.76372f ) 
,new Loot( typeof( SoftBananaBread), 0.0446648f ) 
,new Loot( typeof( SolidStone), 0.174193f ) 
,new Loot( typeof( SuperiorHealingPotion), 1.34888f ) 
,new Loot( typeof( BalancedLongBow), 0.107195f ) 
,new Loot( typeof( BlockingTarge), 0.0535977f ) 
,new Loot( typeof( BluntingMace), 0.142927f ) 
,new Loot( typeof( CrochetBelt), 0.0491313f ) 
,new Loot( typeof( CrochetBoots), 0.0625307f ) 
,new Loot( typeof( CrochetBracers), 0.0669972f ) 
,new Loot( typeof( CrochetCloak), 0.0491313f ) 
,new Loot( typeof( CrochetGloves), 0.107195f ) 
,new Loot( typeof( CrochetHat), 0.0446648f ) 
,new Loot( typeof( CrochetPants), 0.0714637f ) 
,new Loot( typeof( CrochetShoulderpads), 0.0446648f ) 
,new Loot( typeof( CrochetVest), 0.0267989f ) 
,new Loot( typeof( CrushingMaul), 0.107195f ) 
,new Loot( typeof( FinePointedDagger), 0.15186f ) 
,new Loot( typeof( HeavyFlintAxe), 0.111662f ) 
,new Loot( typeof( HeavyWarStaff), 0.133994f ) 
,new Loot( typeof( OverlinkedChainArmor), 0.0803966f ) 
,new Loot( typeof( OverlinkedChainBelt), 0.0625307f ) 
,new Loot( typeof( OverlinkedChainBoots), 0.0446648f ) 
,new Loot( typeof( OverlinkedChainBracers), 0.0491313f ) 
,new Loot( typeof( OverlinkedChainCloak), 0.0848631f ) 
,new Loot( typeof( OverlinkedChainGloves), 0.0491313f ) 
,new Loot( typeof( OverlinkedChainPants), 0.0446648f ) 
,new Loot( typeof( OverlinkedChainShoulderpads), 0.0357318f ) 
,new Loot( typeof( OverlinkedCoif), 0.0446648f ) 
,new Loot( typeof( ProtectivePavise), 0.0714637f ) 
,new Loot( typeof( SentinelMusket), 0.120595f ) 
,new Loot( typeof( SharpShortsword), 0.0937961f ) 
,new Loot( typeof( SplinteringBattleAxe), 0.111662f ) 
,new Loot( typeof( ThickCloak), 0.0535977f ) 
,new Loot( typeof( ThickLeatherBelt), 0.0491313f ) 
,new Loot( typeof( ThickLeatherBoots), 0.0759301f ) 
,new Loot( typeof( ThickLeatherBracers), 0.0491313f ) 
,new Loot( typeof( ThickLeatherGloves), 0.0580642f ) 
,new Loot( typeof( ThickLeatherHat), 0.0491313f ) 
,new Loot( typeof( ThickLeatherPants), 0.0803966f ) 
,new Loot( typeof( ThickLeatherShoulderpads), 0.0937961f ) 
,new Loot( typeof( ThickLeatherTunic), 0.0759301f ) 
,new Loot( typeof( WhettedClaymore), 0.125061f ) 
};
		
		public static Loot[] DustbelcherOgreMage = new Loot[] {new Loot( typeof( Aquamarine), 0.174316f ) 
,new Loot( typeof( ChromiteBarbute), 0.0208138f ) 
,new Loot( typeof( Citrine), 0.057238f ) 
,new Loot( typeof( EbonScimitar), 0.0416276f ) 
,new Loot( typeof( EmbossedPlateHelmet), 0.0208138f ) 
,new Loot( typeof( GiganticWarAxe), 0.0260173f ) 
,new Loot( typeof( GoblinNutcracker), 0.028619f ) 
,new Loot( typeof( GoldOre), 0.0234155f ) 
,new Loot( typeof( GossamerCape), 0.0208138f ) 
,new Loot( typeof( HeadstrikerSword), 0.0260173f ) 
,new Loot( typeof( ImperialLeatherSpaulders), 0.028619f ) 
,new Loot( typeof( MistscapeBoots), 0.0234155f ) 
,new Loot( typeof( RoyalBands), 0.0338225f ) 
,new Loot( typeof( RoyalSash), 0.0234155f ) 
,new Loot( typeof( SacrificialKris), 0.0390259f ) 
,new Loot( typeof( SniperRifle), 0.0234155f ) 
,new Loot( typeof( StarRuby), 0.0494328f ) 
,new Loot( typeof( SteelLockbox), 0.132688f ) 
,new Loot( typeof( TrackersWristguards), 0.0208138f ) 
,new Loot( typeof( TruesilverOre), 0.0234155f ) 
,new Loot( typeof( CuredHamSteak), 4.88084f ) 
,new Loot( typeof( GreaterManaPotion), 0.749298f ) 
,new Loot( typeof( HeavyStone), 0.0442294f ) 
,new Loot( typeof( IronOre), 0.0988656f ) 
,new Loot( typeof( JourneymansBackpack), 0.0260173f ) 
,new Loot( typeof( MageweaveCloth), 24.386f ) 
,new Loot( typeof( MithrilOre), 0.348631f ) 
,new Loot( typeof( MoonberryJuice), 2.28172f ) 
,new Loot( typeof( ScrapMetal), 2.80726f ) 
,new Loot( typeof( ScrollOfIntellectIII), 0.132688f ) 
,new Loot( typeof( ScrollOfProtectionIII), 0.314809f ) 
,new Loot( typeof( ScrollOfSpiritIII), 0.262774f ) 
,new Loot( typeof( ScrollOfStaminaIII), 0.19513f ) 
,new Loot( typeof( SilkCloth), 9.83193f ) 
,new Loot( typeof( SolidStone), 0.189926f ) 
,new Loot( typeof( SuperiorHealingPotion), 1.28786f ) 
,new Loot( typeof( BalancedLongBow), 0.104069f ) 
,new Loot( typeof( BlockingTarge), 0.0650432f ) 
,new Loot( typeof( BluntingMace), 0.104069f ) 
,new Loot( typeof( CrochetBelt), 0.0754501f ) 
,new Loot( typeof( CrochetBoots), 0.0520346f ) 
,new Loot( typeof( CrochetBracers), 0.085857f ) 
,new Loot( typeof( CrochetCloak), 0.0728484f ) 
,new Loot( typeof( CrochetGloves), 0.0910605f ) 
,new Loot( typeof( CrochetHat), 0.0598397f ) 
,new Loot( typeof( CrochetPants), 0.0910605f ) 
,new Loot( typeof( CrochetShoulderpads), 0.0754501f ) 
,new Loot( typeof( CrochetVest), 0.0728484f ) 
,new Loot( typeof( CrushingMaul), 0.104069f ) 
,new Loot( typeof( FinePointedDagger), 0.0936622f ) 
,new Loot( typeof( HeavyFlintAxe), 0.0936622f ) 
,new Loot( typeof( HeavyWarStaff), 0.104069f ) 
,new Loot( typeof( OverlinkedChainArmor), 0.028619f ) 
,new Loot( typeof( OverlinkedChainBelt), 0.028619f ) 
,new Loot( typeof( OverlinkedChainBoots), 0.0416276f ) 
,new Loot( typeof( OverlinkedChainBracers), 0.057238f ) 
,new Loot( typeof( OverlinkedChainCloak), 0.0494328f ) 
,new Loot( typeof( OverlinkedChainGloves), 0.0624415f ) 
,new Loot( typeof( OverlinkedChainPants), 0.0442294f ) 
,new Loot( typeof( OverlinkedChainShoulderpads), 0.0468311f ) 
,new Loot( typeof( OverlinkedCoif), 0.0598397f ) 
,new Loot( typeof( ProtectivePavise), 0.0598397f ) 
,new Loot( typeof( SentinelMusket), 0.13529f ) 
,new Loot( typeof( SharpShortsword), 0.117078f ) 
,new Loot( typeof( SplinteringBattleAxe), 0.0988656f ) 
,new Loot( typeof( ThickCloak), 0.0676449f ) 
,new Loot( typeof( ThickLeatherBelt), 0.0468311f ) 
,new Loot( typeof( ThickLeatherBoots), 0.0624415f ) 
,new Loot( typeof( ThickLeatherBracers), 0.0442294f ) 
,new Loot( typeof( ThickLeatherGloves), 0.0780518f ) 
,new Loot( typeof( ThickLeatherHat), 0.0546363f ) 
,new Loot( typeof( ThickLeatherPants), 0.0676449f ) 
,new Loot( typeof( ThickLeatherShoulderpads), 0.0468311f ) 
,new Loot( typeof( ThickLeatherTunic), 0.0468311f ) 
,new Loot( typeof( WhettedClaymore), 0.0910605f ) 
};
		
	
	}
}