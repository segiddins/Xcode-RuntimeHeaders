//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorCapsuleViewController.h>

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorCapsuleViewControllerDelegate-Protocol.h>

@class IDEIntentBuilderEditorIntentResponseOutputCapsuleViewController, IDEIntentBuilderEditorPropertiesDetailsCapsuleViewController, NSString;

@interface IDEIntentBuilderEditorIntentResponsePropertiesCapsuleViewController : IDEIntentBuilderEditorCapsuleViewController <IDEIntentBuilderEditorCapsuleViewControllerDelegate>
{
    IDEIntentBuilderEditorPropertiesDetailsCapsuleViewController *_responseDetailsViewController;
    IDEIntentBuilderEditorIntentResponseOutputCapsuleViewController *_outputViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IDEIntentBuilderEditorIntentResponseOutputCapsuleViewController *_outputViewController; // @synthesize _outputViewController;
@property(readonly, nonatomic) IDEIntentBuilderEditorPropertiesDetailsCapsuleViewController *_responseDetailsViewController; // @synthesize _responseDetailsViewController;
- (void)editorCapsuleViewControllerDidResize:(id)arg1;
- (void)selectionDidChange;
- (void)setParentEditor:(id)arg1;
- (void)unbind;
- (void)bind;
- (void)primitiveInvalidate;
- (void)viewDidLayout;
- (void)loadView;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
