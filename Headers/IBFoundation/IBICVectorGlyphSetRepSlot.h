//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlot.h>

@class IBICIdiom, IBICLanguageDirection, IBICLocale, IBICLuminosityAppearance;

@interface IBICVectorGlyphSetRepSlot : IBICSlot
{
    IBICIdiom *_idiom;
    IBICLanguageDirection *_languageDirection;
    IBICLocale *_locale;
    IBICLuminosityAppearance *_luminosityAppearance;
}

+ (id)orderedComponentClasses;
+ (id)genesisSlotsForSlots:(id)arg1;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
+ (id)slotFilterWithNilMatching:(long long)arg1 idioms:(id)arg2 locales:(id)arg3 languageDirections:(id)arg4 luminositySlots:(id)arg5;
+ (id)slotFilterUnionedWithStandardUniversalCounterpart:(BOOL)arg1 idioms:(id)arg2 locales:(id)arg3 languageDirections:(id)arg4 luminositySlots:(id)arg5;
@property(readonly) IBICLuminosityAppearance *luminosityAppearance; // @synthesize luminosityAppearance=_luminosityAppearance;
@property(readonly) IBICLocale *locale; // @synthesize locale=_locale;
@property(readonly) IBICLanguageDirection *languageDirection; // @synthesize languageDirection=_languageDirection;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (BOOL)hasUnspecifiedLocale;
- (BOOL)hasUnspecifiedAppearance;
- (id)detailAreaPath;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (BOOL)anyExplicitValuesForSlotComponentClass:(Class)arg1 amongCounterparts:(id)arg2;
- (void)captureComponents;

@end

