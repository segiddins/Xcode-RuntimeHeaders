//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

#import <Xcode3UI/DVTInvalidation-Protocol.h>

@class DVTBorderedView, DVTDisclosureView, DVTNotificationToken, DVTPlistViewController, DVTStackBacktrace, NSString, NSTextField;

@interface Xcode3InfoPlistSliceView : DVTLayoutView_ML <DVTInvalidation>
{
    DVTBorderedView *_plistBorderedView;
    DVTPlistViewController *_plistViewController;
    DVTDisclosureView *_parentView;
    NSTextField *_emptyOutlineField;
    NSString *_emptyContentString;
    DVTNotificationToken *_outlineViewFrameChangeToken;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) DVTDisclosureView *parentView; // @synthesize parentView=_parentView;
@property(copy, nonatomic) NSString *emptyContentString; // @synthesize emptyContentString=_emptyContentString;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (double)_leftMargin;
- (void)plistOutlineViewFrameChanged:(id)arg1;
- (void)_updatePlistOutlineViewTheme;
- (void)configureUsingPlistViewController:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (void)_syncPlistViews;
- (void)_updateEmptyOutlineFieldTheme;
- (id)_emptyOutlineField;
- (BOOL)_showEmptyOutlineField;
- (BOOL)isFlipped;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

