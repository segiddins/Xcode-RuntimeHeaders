//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlot.h>

@class IBICColorSpace, IBICContrastAppearance, IBICIdiom, IBICLocale, IBICLuminosityAppearance, IBICSubtype, IBICVibrancyAppearance;

@interface IBICColorSetRepSlot : IBICSlot
{
    IBICIdiom *_idiom;
    IBICSubtype *_subtype;
    IBICColorSpace *_colorSpace;
    IBICLuminosityAppearance *_luminosityAppearance;
    IBICContrastAppearance *_contrastAppearance;
    IBICVibrancyAppearance *_vibrancyAppearance;
    IBICLocale *_locale;
}

+ (id)genesisSlotsForSlots:(id)arg1;
+ (id)slotWithIdiom:(id)arg1 appearance:(id)arg2;
+ (id)slotWithIdiom:(id)arg1 colorSpace:(id)arg2;
+ (id)orderedComponentClasses;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
+ (id)slotFilterWithNilMatching:(long long)arg1 idioms:(id)arg2 subtypes:(id)arg3 colorSpaces:(id)arg4 luminositySlots:(id)arg5 contrastSlots:(id)arg6 vibrancySlots:(id)arg7 includeLocales:(BOOL)arg8;
+ (id)slotFilterUnionedWithStandardUniversalCounterpart:(BOOL)arg1 idioms:(id)arg2 subtypes:(id)arg3 colorSpaces:(id)arg4 luminositySlots:(id)arg5 contrastSlots:(id)arg6 vibrancySlots:(id)arg7 includeLocales:(BOOL)arg8;
@property(readonly) IBICLocale *locale; // @synthesize locale=_locale;
@property(readonly) IBICVibrancyAppearance *vibrancyAppearance; // @synthesize vibrancyAppearance=_vibrancyAppearance;
@property(readonly) IBICContrastAppearance *contrastAppearance; // @synthesize contrastAppearance=_contrastAppearance;
@property(readonly) IBICLuminosityAppearance *luminosityAppearance; // @synthesize luminosityAppearance=_luminosityAppearance;
@property(readonly) IBICColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly) IBICSubtype *subtype; // @synthesize subtype=_subtype;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (BOOL)hasUnspecifiedLocale;
- (BOOL)hasUnspecifiedAppearance;
- (id)detailAreaPath;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (BOOL)anyExplicitValuesForSlotComponentClass:(Class)arg1 amongCounterparts:(id)arg2;
- (id)shortDisplayName;
- (void)captureComponents;

@end

