//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDESchemeActionAbstractTestSummaryObject.h>

#import <IDEFoundation/IDESchemeActionTestContainer-Protocol.h>
#import <IDEFoundation/IDESchemeActionTestIdentifiable-Protocol.h>
#import <IDEFoundation/IDESchemeActionTestSummaryContainer-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface IDESchemeActionTestSummaryGroup : IDESchemeActionAbstractTestSummaryObject <IDESchemeActionTestSummaryContainer, IDESchemeActionTestContainer, IDESchemeActionTestIdentifiable>
{
    NSMutableArray *_subtests;
    NSString *_identifier;
    double _duration;
    NSMutableArray *_mutableFailureSummaries;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSMutableArray *mutableFailureSummaries; // @synthesize mutableFailureSummaries=_mutableFailureSummaries;
@property double duration; // @synthesize duration=_duration;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)allAttachments;
- (id)sparseSummaryGroupForTestIdentifiers:(id)arg1 blueprintName:(id)arg2;
- (void)enumerateTestsUsingBlock:(CDUnknownBlockType)arg1 testableSummary:(id)arg2;
@property(readonly) NSMutableArray *mutableContainedTestSummaries;
@property(readonly) NSArray *containedTestSummaries;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)addNewTestSummaryGroupWithName:(id)arg1 identifier:(id)arg2;
- (void)addFailureSummary:(id)arg1;
- (void)addTestSummary:(id)arg1;
@property(readonly, copy) NSArray *failureSummaries;
- (unsigned long long)status;
- (void)loadDiagnosticsFromFilePromise:(id)arg1;
- (void)loadAttachmentsFromDirectory:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 subtests:(id)arg3;
- (id)initWithName:(id)arg1 identifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) NSMutableArray *mutableSubtests; // @dynamic mutableSubtests;
@property(copy) NSArray *subtests; // @dynamic subtests;
@property(readonly) Class superclass;

@end

