//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorCapsuleViewController.h>

#import <IDEIntentBuilderEditor/IDEIntentBuilderComponentStackViewDelegate-Protocol.h>

@class IDEIntentBuilderComponentStackView, NSArray, NSString;

@interface IDEIntentBuilderEditorInfoCapsuleViewController : IDEIntentBuilderEditorCapsuleViewController <IDEIntentBuilderComponentStackViewDelegate>
{
    IDEIntentBuilderComponentStackView *_stackView;
}

@property __weak IDEIntentBuilderComponentStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)componentStackViewBoundsDidChange:(id)arg1;
- (void)primitiveInvalidate;
- (void)unbind;
- (void)bind;
@property(readonly, nonatomic) NSArray *stackComponentViews;
@property(readonly) double verticalContentSpacing;
- (void)loadView;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

