//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTObservingToken, IDEActivityReport, NSObject;
@protocol IDELocalizationWorkProgress;

@interface IDELocalizationActivityReporter : IDEActivityReporter
{
    NSObject<IDELocalizationWorkProgress> *_worker;
    DVTObservingToken *_localizationStartObserver;
    DVTObservingToken *_localizationPhaseObserver;
    DVTObservingToken *_localizationProgressObserver;
    DVTObservingToken *_localizationCompleteObserver;
    IDEActivityReport *_activeReport;
}

+ (id)_titleSegmentsForWorker:(id)arg1;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)setWorker:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

@end

