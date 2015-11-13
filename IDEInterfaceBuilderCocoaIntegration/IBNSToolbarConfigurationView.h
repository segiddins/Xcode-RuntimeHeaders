//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderCocoaIntegration/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IBDefaultNSToolbarItemsContainerView, IBDocument, IBMutableIdentityDictionary, IBNSToolbarItemsContainerView, NSButton, NSString, NSTextField;
@protocol IBNSToolbarConfigurationViewDelegate;

@interface IBNSToolbarConfigurationView : DVTLayoutView_ML <DVTInvalidation>
{
    IBDefaultNSToolbarItemsContainerView *defaultItemsView;
    IBNSToolbarItemsContainerView *allowedItemsView;
    NSTextField *allowedItemsLabel;
    NSTextField *defaultItemsLabel;
    NSButton *doneButton;
    IBMutableIdentityDictionary *setupOffsets;
    NSString *localPasteboardType;
    IBDocument *document;
    id <IBNSToolbarConfigurationViewDelegate> _delegate;
}

+ (id)configurationViewWithAllowedItems:(id)arg1 defaultItems:(id)arg2;
+ (void)initialize;
@property(nonatomic) __weak id <IBNSToolbarConfigurationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IBNSToolbarItemsContainerView *allowedItemsView; // @synthesize allowedItemsView;
@property(readonly, nonatomic) NSString *localPasteboardType; // @synthesize localPasteboardType;
@property(retain, nonatomic) IBDocument *document; // @synthesize document;
@property(readonly, nonatomic) IBDefaultNSToolbarItemsContainerView *defaultItemsView; // @synthesize defaultItemsView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)done:(id)arg1;
- (void)primitiveInvalidate;
- (void)setupWithAllowedItems:(id)arg1 defaultItems:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

