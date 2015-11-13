//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>
#import <IDEInterfaceBuilderKit/IBConnectionPrototypeViewDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTMutableOrderedDictionary, DVTNotificationToken, DVTStackBacktrace, IBCancellationToken, IBConnectionInterfaceStyle, IBConnectionPrototypeView, IBDocument, NSColor, NSString;
@protocol DVTCancellable;

@interface IBConnectionsViewController : NSViewController <IBConnectionPrototypeViewDelegate, DVTInvalidation>
{
    DVTDelayedInvocation *delayedInvocation;
    DVTMutableOrderedDictionary *dicslosureViews;
    NSColor *lastDisclosureBottomBorderColor;
    IBDocument *document;
    IBConnectionPrototypeView *identifiedPrototypeView;
    IBCancellationToken *identifiedPrototypeViewCancellationToken;
    IBConnectionInterfaceStyle *connectionInterfaceStyle;
    id endPoint;
    id <DVTCancellable> classesObservingToken;
    DVTNotificationToken *documentDidAddConnectionToken;
    DVTNotificationToken *documentWillRemoveConnectionToken;
    DVTNotificationToken *documentDidReorderConnectionToken;
    DVTNotificationToken *documentDidAddObjectToken;
    DVTNotificationToken *documentWillRemoveObjectToken;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)findIndicatorContentViewForConnection:(id)arg1;
- (void)refreshConnectionsData:(id)arg1;
- (void)syncPrototypeStack:(id)arg1 withPrototypeData:(id)arg2;
- (id)matchingPrototypeForPrototype:(id)arg1 inSet:(id)arg2;
- (void)refreshBorderColors;
- (void)loadView;
- (void)connectionPrototypeView:(id)arg1 didRollover:(id)arg2;
- (void)connectionPrototypeViewHandleConnectionDrag:(id)arg1;
- (void)connectionPrototypeView:(id)arg1 didDisconnect:(id)arg2;
- (void)cancelPrototypeRollover;
- (void)primitiveInvalidate;
- (void)setLastDisclosureBottomBorderColor:(id)arg1;
- (id)disclosureViews;
- (id)connectionInterfaceStyle;
- (id)document;
- (id)window;
- (id)view;
- (void)documentWillRemoveObject:(id)arg1;
- (void)documentDidAddObject:(id)arg1;
- (void)documentDidReorderConnection:(id)arg1;
- (void)documentWillRemoveConnection:(id)arg1;
- (void)documentDidAddConnection:(id)arg1;
- (void)validateContent:(id)arg1;
- (id)initWithDocument:(id)arg1 endPoint:(id)arg2 andInterfaceStyle:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

