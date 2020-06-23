//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTBorderedView.h>

#import <DVTUserInterfaceKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSMutableArray, NSString, NSTextField;
@protocol DVTFilterControlBarTarget, DVTFilterControlField;

@interface DVTFilterControlBar : DVTBorderedView <DVTInvalidation>
{
    NSTextField<DVTFilterControlField> *_filterControlField;
    id _filterLeftButton;
    NSMutableArray *_toggleButtons;
    id <DVTFilterControlBarTarget> _filterTarget;
    NSString *_filterDefinitionIdentifier;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *filterDefinitionIdentifier; // @synthesize filterDefinitionIdentifier=_filterDefinitionIdentifier;
@property(retain, nonatomic) id <DVTFilterControlBarTarget> filterTarget; // @synthesize filterTarget=_filterTarget;
@property(readonly) NSTextField<DVTFilterControlField> *filterControlField; // @synthesize filterControlField=_filterControlField;
- (void)primitiveInvalidate;
- (id)toggleButtons;
- (void)configureLeftFilterButtonWithMenu:(id)arg1;
- (void)_didSetFilterTarget;
- (void)_willSetFilterTarget;
- (void)setUpFilterControls;
- (id)imageNamed:(id)arg1 fromExtension:(id)arg2;
- (id)filterDefinitionExtension;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (id)_filterControlFieldWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
