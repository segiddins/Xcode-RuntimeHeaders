//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class XCSUIBotDefinition_BasicInfoEditor, XCSUICreateBotAssistantContext;

@interface XCSUICreateBotBasicInfoAssistant : IDEAssistant
{
    XCSUIBotDefinition_BasicInfoEditor *_basicInfoEditor;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingCreateBotAssistantContext;
@property(retain) XCSUIBotDefinition_BasicInfoEditor *basicInfoEditor; // @synthesize basicInfoEditor=_basicInfoEditor;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)canGoForward;
- (id)assistantTitle;
- (id)nextAssistantIdentifier;
@property(readonly) XCSUICreateBotAssistantContext *createBotAssistantContext;
- (void)primitiveInvalidate;

@end

