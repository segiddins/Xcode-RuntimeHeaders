//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderStackComponentView.h>

#import <IDEIntentBuilderEditor/IDEIntentBuilderDisclosureViewDelegate-Protocol.h>

@class IDEIntentBuilderDisclosureView, NSString;

@interface IDEIntentBuilderDisclosureComponentView : IDEIntentBuilderStackComponentView <IDEIntentBuilderDisclosureViewDelegate>
{
    NSString *_title;
    IDEIntentBuilderDisclosureView *_disclosureView;
}

@property __weak IDEIntentBuilderDisclosureView *disclosureView; // @synthesize disclosureView=_disclosureView;
- (void).cxx_destruct;
- (void)_resize;
- (void)disclosureView:(id)arg1 didChangeDisclosedState:(BOOL)arg2;
- (BOOL)bindTo:(id)arg1;
- (id)bindingTargetForBindingName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

