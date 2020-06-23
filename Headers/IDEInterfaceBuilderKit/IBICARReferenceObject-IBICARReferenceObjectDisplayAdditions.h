//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICARReferenceObject.h>

#import <IDEInterfaceBuilderKit/IBICAbstractCollectionChild-Protocol.h>

@class NSString;

@interface IBICARReferenceObject (IBICARReferenceObjectDisplayAdditions) <IBICAbstractCollectionChild>
+ (id)itemsFromOverlayOrnament:(id)arg1;
+ (id)arReferenceObjectPaths:(id)arg1;
+ (id)synthesizeItemsFromLoosePaths:(id)arg1 claimingPaths:(id *)arg2;
+ (id)referenceObjectsFromPaths:(id)arg1;
- (BOOL)applyContentFromDropIndicator:(id)arg1;
- (id)catalogItemForHostingInContainer:(id)arg1;
- (BOOL)isDisplayNameFindable;
- (BOOL)validateAndImportAR3DObjectFileAtPath:(id)arg1;
- (id)overviewCapsuleSpecification;
- (id)icon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
