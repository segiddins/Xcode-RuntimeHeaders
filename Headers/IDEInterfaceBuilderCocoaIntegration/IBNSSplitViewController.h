//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSRelationshipSegueModeledViewController.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSSplitView, NSString;

@interface IBNSSplitViewController : IBNSRelationshipSegueModeledViewController <IBDocumentArchiving>
{
    BOOL _vertical;
    NSSplitView *_splitView;
}

+ (Class)ibViewClass;
@property(retain, nonatomic) NSSplitView *splitView; // @synthesize splitView=_splitView;
@property BOOL vertical; // @synthesize vertical=_vertical;
- (void).cxx_destruct;
- (BOOL)ibCanBeValidTriggerSegueSource;
@property(readonly) BOOL viewIsVertical;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibMakeDefaultView;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibEditorViewWithSuggestedSize:(struct CGSize)arg1 forDocument:(id)arg2;
- (Class)ibEditorClass;
- (id)ibDefaultItemForNewInstances;
- (id)ibDefaultViewForNewInstances;
- (id)ibDefaultImage;
- (id)ibRelationshipSegueTrackingViewProperties;
- (id)ibRelationshipSegueTrackingItemLocalizableProperties;
- (id)ibRelationshipSegueTrackingItemProperties;
- (id)ibRelationshipSegueBadgeImage;
- (id)ibRelationshipSegueDefaultImage;
- (id)ibRelationshipSegueTrackingItemProperty;
- (id)ibRelationshipSegueTrackingItemsProperty;
- (id)ibImageForOwnedScene;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

