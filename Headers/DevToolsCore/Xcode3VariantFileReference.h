//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/Xcode3FileReference.h>

@class NSString;

@interface Xcode3VariantFileReference : Xcode3FileReference
{
}

- (id)referenceForAssetTags;
- (BOOL)canStructureEditNameFromVariantGroup;
- (BOOL)canStructureEditName;
- (void)_primitiveChangeInternalReferencePath:(id)arg1 sourceTree:(id)arg2;
- (void)_takeConfigurationFromFileReference:(id)arg1;
@property(copy) NSString *path;
- (id)ideModelObjectTypeIdentifier;
- (id)localization;

@end

