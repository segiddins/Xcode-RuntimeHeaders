//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTInvalidation_NSObject.h>

@class IDEQuickHelpQueryResult, MISSING_TYPE, _TtC16DVTDocumentation23DVTDocumentationManager;

@interface _TtC12IDEQuickHelp22IDEQuickHelpController : DVTInvalidation_NSObject
{
    MISSING_TYPE *queryResult;
    MISSING_TYPE *documentationManager;
    MISSING_TYPE *placeholderString;
    MISSING_TYPE *_inFlightOperation;
    MISSING_TYPE *_inspectorViewController;
    MISSING_TYPE *renderedContentSize;
    MISSING_TYPE *quickHelpPerformanceLogAspect;
    MISSING_TYPE *quickHelpPerformanceMetricLock;
    MISSING_TYPE *quickHelpPerformanceMetric;
}

- (void).cxx_destruct;
- (id)init;
- (void)generateContentFor:(id)arg1 container:(id)arg2 symbolKind:(id)arg3 context:(id)arg4;
- (void)generateContentFor:(id)arg1 with:(id)arg2 from:(id)arg3;
- (void)showDocumentation:(id)arg1;
- (void)primitiveInvalidate;
@property(nonatomic) struct CGSize renderedContentSize; // @synthesize renderedContentSize;
@property(nonatomic, retain) _TtC16DVTDocumentation23DVTDocumentationManager *documentationManager; // @synthesize documentationManager;
@property(nonatomic, retain) IDEQuickHelpQueryResult *queryResult; // @synthesize queryResult;

@end

