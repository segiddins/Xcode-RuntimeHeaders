//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderComponentView.h>

#import <IDEIntentBuilderEditor/NSMenuDelegate-Protocol.h>

@class DVTObservingToken, NSArrayController, NSPopUpButton, NSString;
@protocol IDEIntentBuilderPopUpButtonComponentViewDelegate;

@interface IDEIntentBuilderPopUpButtonComponentView : IDEIntentBuilderComponentView <NSMenuDelegate>
{
    DVTObservingToken *_selectedObjectsObservationToken;
    DVTObservingToken *_contentObservationToken;
    DVTObservingToken *_descriptionObservationToken;
    BOOL _observesContentChanges;
    id <IDEIntentBuilderPopUpButtonComponentViewDelegate> _delegate;
    NSPopUpButton *_popUpButton;
}

- (void).cxx_destruct;
@property __weak NSPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
@property __weak id <IDEIntentBuilderPopUpButtonComponentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL observesContentChanges; // @synthesize observesContentChanges=_observesContentChanges;
- (void)popUpButtonChangedValue:(id)arg1;
- (void)primitiveInvalidate;
- (void)menuNeedsUpdate:(id)arg1;
- (void)unbind;
- (BOOL)bindTo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) NSArrayController *primaryControl; // @dynamic primaryControl;
@property(readonly) Class superclass;

@end

