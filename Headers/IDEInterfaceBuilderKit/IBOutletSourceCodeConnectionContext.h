//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBSourceCodeConnectionContext.h>

@class NSDictionary;

@interface IBOutletSourceCodeConnectionContext : IBSourceCodeConnectionContext
{
    long long _storageType;
    long long _preferredDefaultStorageType;
}

@property(nonatomic) long long preferredDefaultStorageType; // @synthesize preferredDefaultStorageType=_preferredDefaultStorageType;
@property long long storageType; // @synthesize storageType=_storageType;
- (void)saveStorageTypeSelectionToDocument;
- (id)outletTeardownCounterparts;
- (id)prepareToInsertSourceCode:(id *)arg1;
- (long long)effectivePropertyObjCStorageType;
- (long long)effectiveInstanceVariableObjCStorageType;
- (long long)primitiveEffectiveInternalStorageType;
@property(readonly) NSDictionary *validStorageTypes;
- (Class)userConfigurableOptionsViewControllerClass;
- (BOOL)shouldAllowUserToConfigureStorageType;
- (void)setDocument:(id)arg1;
- (id)validatedSourceCodeConnectionNameForName:(id)arg1 error:(id *)arg2;
- (id)insertionConnectionTypeString;
- (id)init;

@end

