//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSController.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface NSController (IBNSControllerIntegration) <IBDocumentArchiving>
+ (void)ibSynthesizeShadowedProperties;
+ (id)ibDynamicShadowedKeyPathsToTypes;
+ (void)ibSynthesizeAccessorsForShadowedProperties:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (BOOL)ibShadowedControllerBoolAttribute;
- (void)setIbShadowedControllerBoolAttribute:(BOOL)arg1;
- (id)ibShadowedControllerObjectAttribute;
- (void)setIbShadowedControllerObjectAttribute:(id)arg1;
- (id)ibControllerKeys;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

