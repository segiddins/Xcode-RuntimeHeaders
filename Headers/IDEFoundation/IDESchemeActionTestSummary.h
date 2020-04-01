//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeActionAbstractTestSummaryObject.h>

#import <IDEFoundation/IDESchemeActionTestIdentifiable-Protocol.h>

@class NSArray, NSString;

@interface IDESchemeActionTestSummary : IDESchemeActionAbstractTestSummaryObject <IDESchemeActionTestIdentifiable>
{
    unsigned long long _status;
    double _duration;
    NSString *_identifier;
    NSString *_testSummaryGUID;
    NSArray *_failureSummaries;
    NSArray *_performanceMetrics;
    NSArray *_activitySummaries;
    id __metadata;
}

@property(retain) id _metadata; // @synthesize _metadata=__metadata;
@property(copy) NSArray *activitySummaries; // @synthesize activitySummaries=_activitySummaries;
@property(copy) NSArray *performanceMetrics; // @synthesize performanceMetrics=_performanceMetrics;
@property(copy) NSArray *failureSummaries; // @synthesize failureSummaries=_failureSummaries;
@property(copy) NSString *testSummaryGUID; // @synthesize testSummaryGUID=_testSummaryGUID;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property double duration; // @synthesize duration=_duration;
@property unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (void)loadDiagnosticsFromFilePromise:(id)arg1;
- (void)loadAttachmentsFromDirectory:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 status:(unsigned long long)arg3 duration:(double)arg4 activitySummaries:(id)arg5;
- (id)initWithName:(id)arg1 identifier:(id)arg2 status:(unsigned long long)arg3 duration:(double)arg4 failureSummaries:(id)arg5 performanceMetrics:(id)arg6 activitySummaries:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

