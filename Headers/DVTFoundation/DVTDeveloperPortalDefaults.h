//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTServiceDefaults.h>

@class DVTDispatchLock, NSString;

@interface DVTDeveloperPortalDefaults : DVTServiceDefaults
{
    DVTDispatchLock *_lock;
    NSString *_portalServiceXcodeClientID;
    NSString *_portalServiceXcodeServerClientID;
    NSString *_portalServiceProtocolVersion;
    NSString *_portalServiceHostname;
    NSString *_portalServiceCertificateHostname;
}

+ (id)sharedDefaults;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *portalServiceCertificateHostname; // @synthesize portalServiceCertificateHostname=_portalServiceCertificateHostname;
@property(readonly, copy, nonatomic) NSString *portalServiceHostname; // @synthesize portalServiceHostname=_portalServiceHostname;
@property(readonly, copy, nonatomic) NSString *portalServiceProtocolVersion; // @synthesize portalServiceProtocolVersion=_portalServiceProtocolVersion;
@property(readonly, copy, nonatomic) NSString *portalServiceXcodeServerClientID; // @synthesize portalServiceXcodeServerClientID=_portalServiceXcodeServerClientID;
@property(readonly, copy, nonatomic) NSString *portalServiceXcodeClientID; // @synthesize portalServiceXcodeClientID=_portalServiceXcodeClientID;
- (id)_stringForKey:(id)arg1 legacyKey:(id)arg2;
- (id)init;

@end
