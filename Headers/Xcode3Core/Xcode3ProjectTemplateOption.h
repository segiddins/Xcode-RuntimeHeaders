//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDETemplateOption.h>

@class NSArray, NSDictionary, NSString;
@protocol Xcode3ProjectTemplateOptionParent;

@interface Xcode3ProjectTemplateOption : IDETemplateOption
{
    NSDictionary *_units;
    NSString *_specialType;
    NSArray *_filterOptionsForDisplayValues;
}

+ (id)keyPathsForValuesAffectingHasValidValue;
+ (id)keyPathsForValuesAffectingValues;
+ (id)keyPathsForValuesAffectingDisplayValues;
+ (id)allowedTemplateOptionTypes;
@property(retain) NSArray *filterOptionsForDisplayValues; // @synthesize filterOptionsForDisplayValues=_filterOptionsForDisplayValues;
@property(copy) NSDictionary *units; // @synthesize units=_units;
- (void).cxx_destruct;
- (id)prefix;
- (void)setPrefix:(id)arg1;
@property __weak id <Xcode3ProjectTemplateOptionParent> parent;
- (id)values;
- (void)updateFilteredDisplayValuesWithOptions:(id)arg1;
- (BOOL)isValue:(id)arg1 usableWithOptions:(id)arg2;
- (id)displayValues;
- (void)updateEnabledWithOptions:(id)arg1;
- (void)addToNode:(id)arg1 andDefinitions:(id)arg2 withOptions:(id)arg3 components:(id)arg4 project:(id)arg5 targets:(id)arg6 executables:(id)arg7 macros:(id)arg8 workspaceSettings:(id)arg9 replacementHandler:(CDUnknownBlockType)arg10;
- (id)effectiveValueWithOptions:(id)arg1;
- (id)initWithOptionInfo:(id)arg1 filePath:(id)arg2;

@end

