//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEGeniusResultsFinder.h>

@class DVTObservingToken, GPUTraceSession;

__attribute__((visibility("hidden")))
@interface GPUInvestigatorReportGeniusResultsFinder : IDEGeniusResultsFinder
{
    DVTObservingToken *_reportSelectionObserver;
    GPUTraceSession *_traceSession;
}

+ (Class)editorDocumentClass;
- (void).cxx_destruct;
- (void)_updateGeniusResults;
- (void)primitiveInvalidate;

@end
