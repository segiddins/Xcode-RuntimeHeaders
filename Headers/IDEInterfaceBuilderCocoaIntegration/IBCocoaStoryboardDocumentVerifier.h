//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBCocoaDocumentVerifier.h>

@interface IBCocoaStoryboardDocumentVerifier : IBCocoaDocumentVerifier
{
}

- (void)_verifyWindowControllerConnections;
- (void)_verifyTabViewControllerTransitionOptionsAndPopulateMessages:(id)arg1;
- (void)_verifyTabViewControllerConnections;
- (void)_verifySplitViewControllerConnections;
- (void)_migrateTabViewViewControllerViewsToTabViews;
- (void)_migrateSplitViewControllerViewsToSplitViews;
- (void)_migrateRelationshipSeguesForObject:(id)arg1 withLabel:(id)arg2 toLabel:(id)arg3;
- (void)verifyAndPopulateMessages:(id)arg1;

@end

