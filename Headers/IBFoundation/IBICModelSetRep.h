//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICSlottedAssetRep.h>

@interface IBICModelSetRep : IBICSlottedAssetRep
{
}

+ (id)contentReferenceTypeName;
+ (Class)repIdentifierClass;
+ (Class)slottedAssetClass;
+ (id)assetRepWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(BOOL)arg3;
+ (id)assetRepWithRepIdentifier:(id)arg1;
+ (id)createDefaultInstancesForUnitTesting;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (id)fullyQualifiedRelativePathForFileWriter;
- (id)displayName;
- (CDStruct_550fdc95)taggingSupport;
- (void)setSlot:(id)arg1;
- (id)structuredIdentifier;
- (id)slot;
- (id)parent;
- (id)initWithSlot:(id)arg1;
- (BOOL)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;

@end

