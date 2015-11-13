//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTMessageBubbleAnnotation.h>

#import <DebuggerUI/DVTMessageBubbleAnnotationDelegate-Protocol.h>

@class DBGDebugSession, DVTObservingToken, DVTTextDocumentLocation, IDEStackFrame, IDEWorkspaceWindowController, NSImage, NSString;

@interface DBGInstructionPointerAnnotation : DVTMessageBubbleAnnotation <DVTMessageBubbleAnnotationDelegate>
{
    IDEWorkspaceWindowController *_workspaceWindowController;
    DBGDebugSession *_debugSession;
    IDEStackFrame *_stackFrame;
    NSImage *_icon;
    DVTTextDocumentLocation *_preDragAnnotationLocation;
    DVTObservingToken *_theadNameObserverToken;
    DVTObservingToken *_uniqueIDObserverToken;
    DVTObservingToken *_lastReasonStoppedObserverToken;
}

+ (id)dvt_instructionPointerPathWithSize:(struct CGSize)arg1 tipWidth:(double)arg2;
+ (id)dvt_instructionPointerPathWithSize:(struct CGSize)arg1;
+ (id)_dvt_instructionPointerImageForSize:(struct CGSize)arg1 fillColor:(id)arg2;
- (void).cxx_destruct;
- (id)annotationDisplayDescription;
- (id)annotationDisplayName;
- (void)_moveInstructionPointerToAnnotationLocation;
- (void)didMoveAnnotation:(id)arg1;
- (unsigned long long)annotation:(id)arg1 willMoveToParagraphNumber:(unsigned long long)arg2;
- (id)_themeBasedOnCurrentThreadState;
- (id)_iconForRect:(struct CGRect)arg1;
- (void)drawSidebarMarkerIconInRect:(struct CGRect)arg1 textView:(id)arg2;
- (struct CGRect)sidebarMarkerRectForFirstLineRect:(struct CGRect)arg1;
- (void)fontAndColorThemeChanged:(id)arg1;
- (void)_updateMessageBubbleText;
- (void)setRepresentedObject:(id)arg1;
- (void)annotationWillUninstall;
- (id)initWithWorkspaceWindowController:(id)arg1 documentLocation:(id)arg2 stackFrame:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

