//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEIndexGeniusResultsFinder.h>

@class DVTDelayedInvocation, IBDocument, NSSet;

@interface IBDocumentGeniusResultsFinder : IDEIndexGeniusResultsFinder
{
    NSSet *interfaceBuilderObjectKVOObservations;
    NSSet *documentNotificationTokens;
    DVTDelayedInvocation *delayedUpdateInvocation;
}

+ (Class)editorDocumentClass;
- (void).cxx_destruct;
- (void)findGeniusResultsForEditorDocument:(id)arg1 selectedDocumentLocations:(id)arg2;
- (void)unregisterForNotifications;
- (void)registerObservationsWithDocument:(id)arg1;
- (BOOL)_getUpdateGeniusResultsPhaseOneBlock:(CDUnknownBlockType *)arg1 phaseTwoBlock:(CDUnknownBlockType *)arg2 phaseThreeBlock:(CDUnknownBlockType *)arg3;
- (void)primitiveInvalidate;
@property(readonly) IBDocument *editorDocument;

@end
