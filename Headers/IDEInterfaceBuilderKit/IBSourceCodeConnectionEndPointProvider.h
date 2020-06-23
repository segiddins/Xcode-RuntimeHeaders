//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBEndPointProvider-Protocol.h>

@class IBTargetIdentifier, NSSet, NSString, NSURL, NSView;
@protocol DVTSourceEditorViewProtocol;

@interface IBSourceCodeConnectionEndPointProvider : NSObject <IBEndPointProvider>
{
    IBTargetIdentifier *_targetIdentifier;
    NSSet *_connectionContextExtensions;
    NSView<DVTSourceEditorViewProtocol> *_sourceEditorView;
}

@property(retain) NSView<DVTSourceEditorViewProtocol> *sourceEditorView; // @synthesize sourceEditorView=_sourceEditorView;
- (void).cxx_destruct;
@property(readonly) NSURL *sourceDocumentURL;
- (BOOL)shouldFilterConstraintChoicesBasedUponAngleOfLine;
- (void)indicateConnectionSuccessForTarget:(id)arg1;
- (id)showTargetIdentifierForEndPoint:(id)arg1;
- (id)showTargetIdentifierForConnectionHandler:(id)arg1;
- (struct CGRect)targetIdentifierFrameForConnectionContext:(id)arg1;
- (id)endPointsFromBackToFrontAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4 connectionHandler:(id *)arg5;
- (void)revealSpringLoadedObjectAndIndicateSuccess:(id)arg1;
- (id)springLoadedObjectInfoAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4;
- (id)endPointHandlerForPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4;
- (struct _NSRange)lineRangeForModelItem:(id)arg1;
- (void)endPointConsumerDidFinishConnecting;
- (void)endPointConsumerWillStartConnecting;
- (id)nearestInterestingConnectionHandlerContainingClassNamed:(id)arg1 realSourceLineNumber:(unsigned long long)arg2 withContext:(id)arg3 forDocument:(id)arg4 prototypeConnectionContextsBlock:(CDUnknownBlockType)arg5;
- (void)determineValidMatchAndInsertionContextsForCompletingConnectionPrototype:(id)arg1 containingClassNamed:(id)arg2 realSourceLineNumber:(unsigned long long)arg3 withContext:(id)arg4 forDocument:(id)arg5 prototypeConnectionContextsBlock:(CDUnknownBlockType)arg6 populatingValidMatchContexts:(id)arg7 validInsertionContexts:(id)arg8;
- (BOOL)checkIfInsertionBelowFirstMethodAtLineNumber:(unsigned long long)arg1;
- (void)uninstallTargetIdentifier;
- (void)installTargetIdentifier;
- (id)destinationWorkspaceDocument;
- (id)containingView;
- (id)sourceEditorViewLayoutManager;
- (id)editorForSourceTextView;
- (id)initWithSourceEditorView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

