//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/XCSUIBotDefintionEditorViewController-Protocol.h>

@class DVTStackBacktrace, NSString, XCSUIBotDefinitionContext, XCSUIBotDefinition_BuildConfigurationEditor;

@interface XCSUIBotDefinitionEditor_BuildConfigurationCapsule : IDEViewController <XCSUIBotDefintionEditorViewController>
{
    XCSUIBotDefinitionContext *_definitionContext;
    XCSUIBotDefinition_BuildConfigurationEditor *_buildConfigurationEditor;
}

+ (id)title;
- (void).cxx_destruct;
@property(retain, nonatomic) XCSUIBotDefinition_BuildConfigurationEditor *buildConfigurationEditor; // @synthesize buildConfigurationEditor=_buildConfigurationEditor;
@property(retain, nonatomic) XCSUIBotDefinitionContext *definitionContext; // @synthesize definitionContext=_definitionContext;
- (void)primitiveInvalidate;
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

