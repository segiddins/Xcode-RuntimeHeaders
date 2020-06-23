//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRMobileAgentQueueStop.h>

@class NSMutableArray, NSMutableSet, XRMobileAgent;
@protocol XRMobileAgentOwner;

@interface XRWaitingRoom : XRMobileAgentQueueStop
{
    id _ownerID;
    XRMobileAgent<XRMobileAgentOwner> *_visitingOwner;
    NSMutableArray *_unaffiliatedVisitorsWaiting;
    NSMutableSet *_teamMembersWaiting;
    NSMutableSet *_activeTeams;
    BOOL _abandoned;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)abandon;
- (void)setupOwnerVisit:(id)arg1 mode:(id)arg2;
- (void)setupOwnerVisit:(id)arg1 leaveWhenEmpty:(BOOL)arg2 mode:(id)arg3;
- (id)ownerTicketForAgent:(id)arg1 leaveWhenEmpty:(BOOL)arg2;
- (id)visitorTicketForAgent:(id)arg1 team:(id)arg2;
- (void)setupMeetingWithOwner:(id)arg1 worker:(id)arg2 team:(id)arg3 mode:(id)arg4;
- (void)setupMeetingWithOwner:(id)arg1 worker:(id)arg2 mode:(id)arg3;
- (void)_escortAgentToExit:(id)arg1 withTicket:(id)arg2;
- (void)_prepareAgentToExecute:(id)arg1 withTicket:(id)arg2;
- (BOOL)_holdReceivedAgent:(id)arg1 ticket:(id)arg2;
- (int)agentStopDiagnosticsTypeCode;
- (id)initWithOwner:(id)arg1 dispatchQueue:(id)arg2;
- (id)initWithDispatchQueue:(id)arg1 funnelTarget:(id)arg2;

@end

