//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRMobileAgent.h>

#import <DVTInstrumentsFoundation/DTOSLogLoaderVisitor-Protocol.h>

@class DTOSLogLoader, NSData, NSError, NSPredicate, XRMobileAgentDock;

@interface DTActivityTraceTapLocalShuttle : XRMobileAgent <DTOSLogLoaderVisitor>
{
    id _commonFetchTicket;
    BOOL fetchComplete;
    BOOL _didPrepare;
    BOOL _shouldStart;
    BOOL _didStart;
    BOOL _shouldStop;
    BOOL _didStop;
    BOOL _shouldFetch;
    unsigned int lostEventsSinceLastVisit;
    NSData *nextOutputBytes;
    unsigned long long lastMachContinuousTime;
    NSError *failureReason;
    unsigned long long _signpostConfig;
    unsigned long long _exclusions;
    unsigned long long _logLoaderMode;
    double _fetchWindow;
    NSPredicate *_predicate;
    DTOSLogLoader *_loaderStop;
    XRMobileAgentDock *_ownersDock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XRMobileAgentDock *ownersDock; // @synthesize ownersDock=_ownersDock;
@property(retain, nonatomic) DTOSLogLoader *loaderStop; // @synthesize loaderStop=_loaderStop;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) double fetchWindow; // @synthesize fetchWindow=_fetchWindow;
@property(nonatomic) unsigned long long logLoaderMode; // @synthesize logLoaderMode=_logLoaderMode;
@property(nonatomic) unsigned long long exclusions; // @synthesize exclusions=_exclusions;
@property(nonatomic) unsigned long long signpostConfig; // @synthesize signpostConfig=_signpostConfig;
@property(nonatomic) BOOL shouldFetch; // @synthesize shouldFetch=_shouldFetch;
@property(nonatomic) BOOL didStop; // @synthesize didStop=_didStop;
@property(nonatomic) BOOL shouldStop; // @synthesize shouldStop=_shouldStop;
@property(nonatomic) BOOL didStart; // @synthesize didStart=_didStart;
@property(nonatomic) BOOL shouldStart; // @synthesize shouldStart=_shouldStart;
@property(nonatomic) BOOL didPrepare; // @synthesize didPrepare=_didPrepare;
@property(retain, nonatomic) NSError *failureReason; // @synthesize failureReason;
@property(nonatomic) unsigned int lostEventsSinceLastVisit; // @synthesize lostEventsSinceLastVisit;
@property(nonatomic) unsigned long long lastMachContinuousTime; // @synthesize lastMachContinuousTime;
@property(nonatomic, getter=isFetchComplete) BOOL fetchComplete; // @synthesize fetchComplete;
@property(retain, nonatomic) NSData *nextOutputBytes; // @synthesize nextOutputBytes;
- (void)executeStopOnItinerary:(id)arg1;

@end

