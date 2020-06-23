//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/XCSUIBotDefintionEditorViewController-Protocol.h>

@class DVTStackBacktrace, NSString, XCSUIBotDefinitionContext, XCSUIBotDefinition_BasicInfoEditor;

@interface XCSUIBotDefinitionEditor_BasicInfoCapsule : IDEViewController <XCSUIBotDefintionEditorViewController>
{
    XCSUIBotDefinition_BasicInfoEditor *_basicInfoViewController;
    XCSUIBotDefinitionContext *_definitionContext;
}

+ (id)title;
- (void).cxx_destruct;
@property(retain, nonatomic) XCSUIBotDefinitionContext *definitionContext; // @synthesize definitionContext=_definitionContext;
- (void)primitiveInvalidate;
- (void)commitChanges;
- (void)loadView;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

