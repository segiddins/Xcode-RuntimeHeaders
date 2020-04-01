//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAssetRep.h>

@class IBICColor, NSString;

@interface IBICColorSetRep : IBICSlottedAssetRep
{
    IBICColor *_color;
    NSString *_referenceColorName;
    NSString *_referenceColorPlatform;
    long long _componentInterpretation;
}

+ (id)contentReferenceTypeName;
+ (Class)slottedAssetClass;
+ (Class)repIdentifierClass;
+ (id)assetRepWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(BOOL)arg3;
+ (id)assetRepWithRepIdentifier:(id)arg1;
+ (id)createDefaultInstancesForUnitTesting;
@property(nonatomic) long long componentInterpretation; // @synthesize componentInterpretation=_componentInterpretation;
@property(copy, nonatomic) NSString *referenceColorPlatform; // @synthesize referenceColorPlatform=_referenceColorPlatform;
@property(copy, nonatomic) NSString *referenceColorName; // @synthesize referenceColorName=_referenceColorName;
@property(retain, nonatomic) IBICColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (BOOL)isDraggable;
- (id)copyUsingSlot:(id)arg1 andFileName:(id)arg2;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)effectiveModificationDateForCARCompiler;
- (BOOL)isMinimallyFitForCompiling;
- (CDStruct_550fdc95)taggingSupport;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (void)setSlot:(id)arg1;
- (id)structuredIdentifier;
- (id)slot;
- (id)parent;
- (id)initWithSlot:(id)arg1;
- (BOOL)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;

@end

