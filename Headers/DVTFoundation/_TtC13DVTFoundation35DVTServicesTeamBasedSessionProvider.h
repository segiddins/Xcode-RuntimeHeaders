//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTServicesSessionProvider-Protocol.h>

@class MISSING_TYPE, NSString;

@interface _TtC13DVTFoundation35DVTServicesTeamBasedSessionProvider : NSObject <DVTServicesSessionProvider>
{
    MISSING_TYPE *credential;
    MISSING_TYPE *userDescription;
}

- (void).cxx_destruct;
- (id)init;
- (id)servicesSessionWithError:(id *)arg1;
- (id)initWithCredential:(id)arg1;
@property(nonatomic, readonly) NSString *userDescription;

@end
