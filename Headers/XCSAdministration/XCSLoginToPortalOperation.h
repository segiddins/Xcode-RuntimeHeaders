//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

#import <XCSAdministration/XCSServicesSessionProvider-Protocol.h>

@protocol DVTServicesSession, DVTServicesSessionProvider;

@interface XCSLoginToPortalOperation : XCSInitializationOperation <XCSServicesSessionProvider>
{
    id <DVTServicesSessionProvider> _sessionProvider;
    id <DVTServicesSession> _session;
}

@property(retain, nonatomic) id <DVTServicesSession> session; // @synthesize session=_session;
@property(retain, nonatomic) id <DVTServicesSessionProvider> sessionProvider; // @synthesize sessionProvider=_sessionProvider;
- (void).cxx_destruct;
- (void)run;
- (id)statusDescription;

@end

