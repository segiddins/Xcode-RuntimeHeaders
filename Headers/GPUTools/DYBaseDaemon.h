//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DYBaseSocketTransport, NSString;
@protocol DYCaptureAPISupport;

@interface DYBaseDaemon : NSObject
{
    _Bool _ownsInferior;
    _Bool _capturingInferior;
    int _inferiorPid;
    DYBaseSocketTransport *_transport;
    NSString *_extensionSlot;
    id <DYCaptureAPISupport> _captureApiSupport;
}

@property(nonatomic) _Bool capturingInferior; // @synthesize capturingInferior=_capturingInferior;
@property(retain, nonatomic) id <DYCaptureAPISupport> captureApiSupport; // @synthesize captureApiSupport=_captureApiSupport;
@property(retain, nonatomic) NSString *extensionSlot; // @synthesize extensionSlot=_extensionSlot;
@property(nonatomic) _Bool ownsInferior; // @synthesize ownsInferior=_ownsInferior;
@property(nonatomic) int inferiorPid; // @synthesize inferiorPid=_inferiorPid;
@property(retain, nonatomic) DYBaseSocketTransport *transport; // @synthesize transport=_transport;
- (void)dealloc;
- (id)getAppIconData:(id)arg1;
- (BOOL)launchInferior:(id)arg1 finalEnvironment:(id *)arg2 error:(id *)arg3;
- (id)getApplications;
- (void)setApplications:(id)arg1;
- (BOOL)createInferiorTransportAndSetEnvironment:(id)arg1 error:(id *)arg2;
- (void)terminate:(int)arg1;
- (void)handleMessage:(id)arg1;
- (void)run;
- (BOOL)createInferiorTransportAndSetEnvironment:(id)arg1 withAPI:(unsigned int)arg2 error:(id *)arg3;
- (id)captureAPISupportForAPI:(unsigned int)arg1;
- (void)loadPluginsFromBundle:(id)arg1 pathExtension:(id)arg2;
- (void)observeInferior;

@end

