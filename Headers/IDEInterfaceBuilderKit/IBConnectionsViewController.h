//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>
#import <IDEInterfaceBuilderKit/IBConnectionPrototypeViewDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTMutableOrderedDictionary, DVTStackBacktrace, IBCancellationToken, IBConnectionInterfaceStyle, IBConnectionPrototypeView, IBDocument, NSArray, NSString;
@protocol DVTCancellable;

@interface IBConnectionsViewController : NSViewController <IBConnectionPrototypeViewDelegate, DVTInvalidation>
{
    NSArray *_documentNotificationTokens;
    DVTDelayedInvocation *_delayedInvocation;
    DVTMutableOrderedDictionary *_disclosureViewsByGroup;
    IBDocument *_document;
    IBConnectionPrototypeView *_identifiedPrototypeView;
    IBCancellationToken *_identifiedPrototypeViewCancellationToken;
    id _endPoint;
    id <DVTCancellable> _classesObservingToken;
    BOOL _forceHUDStyleBehavior;
    IBConnectionInterfaceStyle *_connectionInterfaceStyle;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) IBConnectionInterfaceStyle *connectionInterfaceStyle; // @synthesize connectionInterfaceStyle=_connectionInterfaceStyle;
- (id)findIndicatorContentViewForConnection:(id)arg1;
- (void)refreshConnectionsData:(id)arg1;
- (void)syncPrototypeStack:(id)arg1 withPrototypeData:(id)arg2;
- (id)matchingPrototypeForPrototype:(id)arg1 inSet:(id)arg2;
- (void)loadView;
- (void)connectionPrototypeView:(id)arg1 didRollover:(id)arg2;
- (void)connectionPrototypeViewHandleConnectionDrag:(id)arg1;
- (void)connectionPrototypeView:(id)arg1 didDisconnect:(id)arg2;
- (void)cancelPrototypeRollover;
- (void)primitiveInvalidate;
- (id)disclosureViews;
- (id)document;
- (id)window;
- (id)view;
- (void)documentWillChangePropertyConnection:(id)arg1;
- (void)documentWillRemoveObject:(id)arg1;
- (void)documentDidAddObject:(id)arg1;
- (void)documentDidReorderConnection:(id)arg1;
- (void)documentWillRemoveConnection:(id)arg1;
- (void)documentDidAddConnection:(id)arg1;
- (void)validateContent:(id)arg1;
- (id)initWithDocument:(id)arg1 endPoint:(id)arg2 forceHUDStyleBehavior:(BOOL)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

