//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/DVTFontTextFieldDataSource-Protocol.h>

@class IBCocoaTouchTargetRuntime, NSArray, NSString;

@interface IBUIFontDataSource : NSObject <DVTFontTextFieldDataSource>
{
    NSArray *_fonts;
    NSArray *_fontFamilies;
    IBCocoaTouchTargetRuntime *_runtime;
}

@property(readonly) IBCocoaTouchTargetRuntime *runtime; // @synthesize runtime=_runtime;
- (void).cxx_destruct;
- (BOOL)fontTextFieldCanShowFontPanel:(id)arg1;
- (BOOL)fontTextField:(id)arg1 value:(id)arg2 isEqualToValue:(id)arg3;
- (id)fontTextField:(id)arg1 displaySizeForValue:(id)arg2;
- (id)fontTextField:(id)arg1 displayNameForValue:(id)arg2;
- (double)fontTextField:(id)arg1 pointSizeForValue:(id)arg2;
- (id)fontTextField:(id)arg1 sizePlaceholderForValue:(id)arg2;
- (unsigned long long)fontTextField:(id)arg1 settableAttributesForValue:(id)arg2;
- (BOOL)fontTextField:(id)arg1 isValueSpecial:(id)arg2;
- (id)fontTextField:(id)arg1 descriptionForValue:(id)arg2 type:(int *)arg3;
- (id)fontTextField:(id)arg1 fontNameForValue:(id)arg2;
- (id)fontTextField:(id)arg1 familyForValue:(id)arg2;
- (id)fontTextField:(id)arg1 transformValue:(id)arg2 toHavePointSize:(double)arg3;
- (id)fontTextField:(id)arg1 transformValue:(id)arg2 toHaveSize:(id)arg3;
- (id)fontTextField:(id)arg1 transformValue:(id)arg2 toHaveFontName:(id)arg3;
- (id)fontTextField:(id)arg1 transformValue:(id)arg2 toHaveFamily:(id)arg3;
- (id)fontTextField:(id)arg1 transformValue:(id)arg2 toFontValue:(id)arg3;
- (id)fontTextField:(id)arg1 descriptionForFontName:(id)arg2;
- (id)fontTextField:(id)arg1 descriptionForFamily:(id)arg2;
- (unsigned long long)availableFontTraitsForFontTextField:(id)arg1;
- (id)fontTextField:(id)arg1 fontNamesForFontFamily:(id)arg2;
- (id)fontFamiliesForFontTextField:(id)arg1;
- (id)fontValuesForFontTextField:(id)arg1;
- (id)validateFontValue:(id)arg1;
- (id)fontNameForFamily:(id)arg1 andTraits:(unsigned long long)arg2;
- (void)runtimeFontsDidUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithRuntime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

