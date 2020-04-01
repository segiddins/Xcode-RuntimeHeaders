//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAbstractImageRep.h>

@class IBICImageResizingBehavior, NSNumber, NSString;

@interface IBICImageSetRep : IBICSlottedAbstractImageRep
{
    NSNumber *_cachedAssetDataIsFullyOpaqueBitmap;
    NSString *_cachedFirstNonOpaquePixelMessage;
    IBICImageResizingBehavior *_resizingBehavior;
    CDStruct_c519178c _alignmentInsets;
}

+ (BOOL)supportsCompression;
+ (id)contentReferenceTypeName;
+ (Class)slottedAssetClass;
+ (Class)repIdentifierClass;
+ (id)assetRepWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(BOOL)arg3;
+ (id)assetRepWithRepIdentifier:(id)arg1;
+ (id)createDefaultInstancesForUnitTesting;
@property(nonatomic) CDStruct_c519178c alignmentInsets; // @synthesize alignmentInsets=_alignmentInsets;
@property(copy, nonatomic) IBICImageResizingBehavior *resizingBehavior; // @synthesize resizingBehavior=_resizingBehavior;
- (void).cxx_destruct;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (id)languageComponentsRepresentedByConflictFreeSiblings;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (id)messageDescribingTransparency;
- (BOOL)assetDataIsFullyOpaqueBitmap;
- (void)cacheOpaquenessInfoIfNeeded;
- (void)assetDataWillChange;
- (CDStruct_550fdc95)taggingSupport;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (id)copyUsingSlot:(id)arg1 andFileName:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSlot:(id)arg1;
- (void)setSlot:(id)arg1;
- (id)structuredIdentifier;
- (id)slot;
- (id)parent;
- (BOOL)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;

@end

