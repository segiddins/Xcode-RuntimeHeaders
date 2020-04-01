//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEIndexGeniusResultsFinder.h>

@class DVTDelayedInvocation, NSSet;

@interface IBDocumentSelectionGeniusResultsFinder : IDEIndexGeniusResultsFinder
{
    DVTDelayedInvocation *_delayedUpdateInvocation;
    NSSet *_interfaceBuilderObjectKVOObservations;
    NSSet *_documentNotificationTokens;
}

+ (Class)editorDocumentClass;
- (void).cxx_destruct;
- (void)findGeniusResultsForEditorDocument:(id)arg1 selectedDocumentLocations:(id)arg2;
- (void)unregisterDocumentAndSelectionObservations;
- (void)registerObservationsWithDocument:(id)arg1 andLocations:(id)arg2;
- (BOOL)_getUpdateGeniusResultsPhase1Block:(CDUnknownBlockType *)arg1 phase2Block:(CDUnknownBlockType *)arg2 phase3Block:(CDUnknownBlockType *)arg3;
- (void)primitiveInvalidate;
- (id)editorDocument;

@end

