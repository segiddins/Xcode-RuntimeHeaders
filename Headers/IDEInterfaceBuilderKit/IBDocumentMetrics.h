//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBDocumentMetrics : NSObject
{
    double _editOperationStartTime;
    double _documentUILoadingStartTime;
    double _documentSessionStartTime;
    long long _documentOpeningCount;
    double _documentUILoadingDuration;
    double _documentSessionDuration;
    double _editOperationAverageDuration;
    double _editOperationLongestDuration;
    NSString *_editOperationLongestDurationActionName;
    long long _editOperationsCount;
}

+ (id)documentMetricsFromDictionary:(id)arg1;
+ (id)keyPathsForReporting;
@property(readonly) long long editOperationsCount; // @synthesize editOperationsCount=_editOperationsCount;
@property(readonly, copy) NSString *editOperationLongestDurationActionName; // @synthesize editOperationLongestDurationActionName=_editOperationLongestDurationActionName;
@property(readonly) double editOperationLongestDuration; // @synthesize editOperationLongestDuration=_editOperationLongestDuration;
@property(readonly) double editOperationAverageDuration; // @synthesize editOperationAverageDuration=_editOperationAverageDuration;
@property(readonly) double documentSessionDuration; // @synthesize documentSessionDuration=_documentSessionDuration;
@property(readonly) double documentUILoadingDuration; // @synthesize documentUILoadingDuration=_documentUILoadingDuration;
@property(readonly) long long documentOpeningCount; // @synthesize documentOpeningCount=_documentOpeningCount;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)finishEditOperationWithActionName:(id)arg1;
- (void)startEditOperation;
- (void)finishDocumentUILoading;
- (void)startDocumentUILoadingIfNeeded;
- (void)finishDocumentSession;
- (void)startDocumentSession;

@end

