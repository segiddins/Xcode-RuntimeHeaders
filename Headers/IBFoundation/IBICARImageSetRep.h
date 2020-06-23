//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICSlottedAssetRep.h>

@class CIImage;

@interface IBICARImageSetRep : IBICSlottedAssetRep
{
}

+ (Class)slottedAssetClass;
+ (Class)repIdentifierClass;
+ (BOOL)supportsCompression;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)assetRepWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(BOOL)arg3;
+ (id)assetRepWithRepIdentifier:(id)arg1;
+ (id)createDefaultInstancesForUnitTesting;
- (struct __CVBuffer *)createPixelBuffer;
@property(readonly, nonatomic) CIImage *ciImage;
@property(readonly, nonatomic) struct CGImage *cgImage;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (id)itemName;
- (CDStruct_550fdc95)taggingSupport;
- (id)initWithSlot:(id)arg1;
- (void)setSlot:(id)arg1;
- (id)structuredIdentifier;
- (id)slot;
- (id)parent;
- (BOOL)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;

@end

