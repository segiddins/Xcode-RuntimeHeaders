//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTBorderedView.h>

#import <IDEIntentBuilderEditor/DVTInvalidation-Protocol.h>

@class DVTBorderView, DVTStackBacktrace, NSDictionary, NSLayoutConstraint, NSString, NSTextField;
@protocol _IDEIntentBuilderComponentViewDelegate;

@interface IDEIntentBuilderComponentView : DVTBorderedView <DVTInvalidation>
{
    id _bindingTarget;
    NSDictionary *_bindingKeyPaths;
    NSString *_componentIdentifier;
    DVTBorderView *_nibView;
    NSTextField *_titleLabel;
    NSLayoutConstraint *__titleLabelWidthConstraint;
    id _primaryControl;
    id <_IDEIntentBuilderComponentViewDelegate> __delegate;
}

+ (id)nibBundle;
+ (id)nibName;
+ (void)initialize;
- (void).cxx_destruct;
@property(setter=_setDelegate:) __weak id <_IDEIntentBuilderComponentViewDelegate> _delegate; // @synthesize _delegate=__delegate;
@property(retain) id primaryControl; // @synthesize primaryControl=_primaryControl;
@property(retain) NSLayoutConstraint *_titleLabelWidthConstraint; // @synthesize _titleLabelWidthConstraint=__titleLabelWidthConstraint;
@property __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) DVTBorderView *nibView; // @synthesize nibView=_nibView;
@property(copy, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(copy) NSDictionary *bindingKeyPaths; // @synthesize bindingKeyPaths=_bindingKeyPaths;
@property(retain, setter=_setBindingTarget:) id bindingTarget; // @synthesize bindingTarget=_bindingTarget;
- (void)reloadData;
- (void)unbind;
- (BOOL)bindTo:(id)arg1;
- (id)bindingTargetForBindingName:(id)arg1;
- (id)bindingOptionsForBindingName:(id)arg1;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) double titleLabelWidth;
- (void)primitiveInvalidate;
- (void)layout;
- (id)initWithTitle:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

