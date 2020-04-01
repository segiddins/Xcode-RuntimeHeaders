//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDictionaryController.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSArray, NSString;

@interface NSDictionaryController (IBNSDictionaryControllerIntegration) <IBDocumentArchiving>
+ (id)ibDynamicShadowedKeyPathsToTypes;
- (BOOL)ibIsInspectorSliceApplicable:(id)arg1 forCategory:(id)arg2;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSArray *ibShadowedExcludedKeys; // @dynamic ibShadowedExcludedKeys;
@property(copy) NSArray *ibShadowedIncludedKeys; // @dynamic ibShadowedIncludedKeys;
@property(readonly) Class superclass;
@end

