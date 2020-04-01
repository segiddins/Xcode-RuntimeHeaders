//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderComponentView.h>

#import <IDEIntentBuilderEditor/IDEIntentBuilderComponentStackViewDelegate-Protocol.h>

@class DVTObservingToken, IDEIntentBuilderComponentStackView, NSArray, NSString;

@interface IDEIntentBuilderStackComponentView : IDEIntentBuilderComponentView <IDEIntentBuilderComponentStackViewDelegate>
{
    DVTObservingToken *_componentViewsObservationToken;
    IDEIntentBuilderComponentStackView *_stackView;
}

@property __weak IDEIntentBuilderComponentStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)_resize;
- (void)componentStackViewBoundsDidChange:(id)arg1;
- (void)primitiveInvalidate;
- (void)unbind;
- (BOOL)bindTo:(id)arg1;
- (void)reloadData;
- (double)titleLabelWidth;
- (void)setTitleLabelWidth:(double)arg1;
@property(nonatomic) CDStruct_d2b197d1 subviewInset;
@property(nonatomic) double subviewSpacing;
@property(retain, nonatomic) NSArray *componentViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

