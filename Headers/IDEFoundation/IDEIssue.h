//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEDiagnosticItemDelegate-Protocol.h>

@class DVTDocumentLocation, IDEActivityLogMessage, IDEActivityLogRecord, IDEIssueProvider, NSArray, NSString;
@protocol NSCopying;

@interface IDEIssue : NSObject <IDEDiagnosticItemDelegate>
{
    IDEIssue *_parentIssue;
    BOOL _frozen;
    BOOL _valid;
    BOOL _wasFetchedFromCache;
    BOOL __coalesced;
    BOOL __vended;
    NSArray *_filteredSubissues;
    IDEIssueProvider *_issueProvider;
    unsigned long long _sequenceNumber;
    NSArray *_documentLocations;
    DVTDocumentLocation *_primaryDocumentLocation;
    NSObject *_issueTypeIdentifier;
    NSString *_fullMessage;
    unsigned long long _severity;
    NSArray *_subissues;
    IDEActivityLogMessage *_representedMessage;
    IDEActivityLogRecord *_originatingLogRecord;
    unsigned long long _issueType;
    NSArray *_threads;
    id _helpIDOrURL;
    id <NSCopying> _coalescingGroupIdentifier;
    id <NSCopying> _coalescingIdentifier;
}

+ (BOOL)isIssueTypeRuntime:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(getter=_isVended) BOOL _vended; // @synthesize _vended=__vended;
@property(getter=_isCoalesced) BOOL _coalesced; // @synthesize _coalesced=__coalesced;
@property(retain, nonatomic) id <NSCopying> coalescingIdentifier; // @synthesize coalescingIdentifier=_coalescingIdentifier;
@property(retain, nonatomic) id <NSCopying> coalescingGroupIdentifier; // @synthesize coalescingGroupIdentifier=_coalescingGroupIdentifier;
@property(copy) id helpIDOrURL; // @synthesize helpIDOrURL=_helpIDOrURL;
@property(copy, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(readonly) unsigned long long issueType; // @synthesize issueType=_issueType;
@property BOOL wasFetchedFromCache; // @synthesize wasFetchedFromCache=_wasFetchedFromCache;
@property(readonly) IDEActivityLogRecord *originatingLogRecord; // @synthesize originatingLogRecord=_originatingLogRecord;
@property(retain, nonatomic) IDEActivityLogMessage *representedMessage; // @synthesize representedMessage=_representedMessage;
@property(copy, nonatomic) NSArray *subissues; // @synthesize subissues=_subissues;
@property(readonly) unsigned long long severity; // @synthesize severity=_severity;
@property(readonly) NSString *fullMessage; // @synthesize fullMessage=_fullMessage;
@property(retain) NSObject *issueTypeIdentifier; // @synthesize issueTypeIdentifier=_issueTypeIdentifier;
@property(readonly) DVTDocumentLocation *primaryDocumentLocation; // @synthesize primaryDocumentLocation=_primaryDocumentLocation;
@property(readonly) NSArray *documentLocations; // @synthesize documentLocations=_documentLocations;
@property(readonly) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) IDEIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
@property(getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(readonly) __weak IDEIssue *parentIssue; // @synthesize parentIssue=_parentIssue;
@property(readonly, nonatomic) IDEIssue *representativeSubIssue;
- (BOOL)isEqualDisregardingLocationTimestamps:(id)arg1;
- (id)_firstCommonLocationFromArray:(id)arg1 andArray:(id)arg2;
- (void)diagnosticItemWasFixed:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly) BOOL isLiveIssue;
@property(retain) IDEIssue *_parentIssue;
@property(readonly) NSString *formattedStringRepresentation;
@property(readonly, copy) NSString *description;
- (id)_severityString;
- (void)_freeze;
@property(readonly) NSArray *fixableDiagnosticItems;
- (void)_setRepresentedMessage:(id)arg1 force:(BOOL)arg2;
@property(readonly) NSArray *filteredSubissues; // @synthesize filteredSubissues=_filteredSubissues;
- (void)_setSubissues:(id)arg1 force:(BOOL)arg2;
- (void)_setSequenceNumber:(unsigned long long)arg1;
- (id)initWithIssueProvider:(id)arg1 message:(id)arg2 wasFetchedFromCache:(BOOL)arg3;
- (id)initWithIssueProvider:(id)arg1 message:(id)arg2 originatingLogRecord:(id)arg3 wasFetchedFromCache:(BOOL)arg4;
- (id)initWithIssueProvider:(id)arg1 documentLocations:(id)arg2 issueTypeIdentifier:(id)arg3 fullMessage:(id)arg4 severity:(unsigned long long)arg5 representedMessage:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

