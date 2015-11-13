//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCPosixTask.h>

#import <DevToolsCore/PBXTSByteStreamConsuming-Protocol.h>
#import <DevToolsCore/PBXTSCharacterStreamConsuming-Protocol.h>
#import <DevToolsCore/PBXTSLineStreamConsuming-Protocol.h>

@class NSLock, NSString, PBXTSByteStream, PBXTSStream;
@protocol PBXTSStreamConsuming;

@interface XCByteStreamPosixTask : XCPosixTask <PBXTSByteStreamConsuming, PBXTSCharacterStreamConsuming, PBXTSLineStreamConsuming>
{
    PBXTSByteStream *_byteStream;
    PBXTSStream *_streamTail;
    id <PBXTSStreamConsuming> _finalConsumer;
    long long _consumerType;
    NSLock *_streamLock;
}

- (void)streamDidEnd:(id)arg1;
- (void)stream:(id)arg1 processLine:(id)arg2;
- (void)stream:(id)arg1 processCharacters:(id)arg2;
- (void)stream:(id)arg1 processBytes:(id)arg2;
- (void)receivedStderrObjectInBackground:(id)arg1;
- (void)receivedStdoutObjectInBackground:(id)arg1;
- (void)_sendBytesInBackground:(id)arg1;
- (void)receivedStderrObject:(id)arg1;
- (void)receivedStdoutObject:(id)arg1;
- (void)outputComplete;
- (void)_detachConsumerFromBackground;
- (void)_attachConsumerOnBackground;
- (void)dealloc;
- (id)initWithLaunchInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

