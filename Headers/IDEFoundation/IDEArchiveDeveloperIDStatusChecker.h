//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTFuture, DVTStackBacktrace, IDEArchiveDistributionRecord, IDEITunesConnect, NSString;

@interface IDEArchiveDeveloperIDStatusChecker : NSObject <DVTInvalidation>
{
    DVTFuture *_status;
    IDEArchiveDistributionRecord *_record;
    IDEITunesConnect *_iTunesConnect;
}

+ (id)statusCheckerForDistributionRecord:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) IDEITunesConnect *iTunesConnect; // @synthesize iTunesConnect=_iTunesConnect;
@property(readonly, nonatomic) IDEArchiveDistributionRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) DVTFuture *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithRecord:(id)arg1;
- (void)primitiveInvalidate;
- (id)logAspect;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

