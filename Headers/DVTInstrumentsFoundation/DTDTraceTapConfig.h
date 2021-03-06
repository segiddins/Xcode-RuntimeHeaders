//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapConfig.h>

@class NSDictionary, NSString, NSURL;

@interface DTDTraceTapConfig : DTTapConfig
{
    NSURL *_archivingURL;
    _Bool _createdArchivingURL;
    CDUnknownBlockType _sessionHandler;
    const struct AuthorizationOpaqueRef *_authorization;
}

+ (id)dtraceDataFileName;
- (void).cxx_destruct;
@property(nonatomic) const struct AuthorizationOpaqueRef *authorization; // @synthesize authorization=_authorization;
@property(copy, nonatomic) CDUnknownBlockType sessionHandler; // @synthesize sessionHandler=_sessionHandler;
- (BOOL)setArchivingURL:(id)arg1 error:(id *)arg2;
- (id)archivingURL;
@property(nonatomic) unsigned int maxStackDepth;
@property(retain, nonatomic) NSString *preprocessorPath;
@property(retain, nonatomic) NSDictionary *scriptTextByIdentifier;
@property(readonly, nonatomic) BOOL isAllProcesses;
@property(nonatomic) int targetPid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

