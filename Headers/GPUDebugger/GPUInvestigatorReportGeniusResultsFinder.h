//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEGeniusResultsFinder.h>

@class DVTObservingToken, GPUTraceSession;

__attribute__((visibility("hidden")))
@interface GPUInvestigatorReportGeniusResultsFinder : IDEGeniusResultsFinder
{
    GPUTraceSession *_traceSession;
    DVTObservingToken *_reportSelectionObserver;
}

+ (Class)editorDocumentClass;
- (void).cxx_destruct;
- (void)_updateGeniusResults;
- (void)primitiveInvalidate;

@end
