//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray, AVAudioPCMBuffer, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RENetworkSourceAudioUnit : AUAudioUnit
{
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AVAudioPCMBuffer *_inputBuffer;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct unique_ptr<REJitterBuffer, std::__1::default_delete<REJitterBuffer>> _jitterBuffer;
    struct shared_ptr<REPacketEncoder> _encoder;
    long long _targetLatency;
    struct unique_ptr<REEncodePayloadPool, std::__1::default_delete<REEncodePayloadPool>> _payloadPool;
    struct unique_ptr<caulk::concurrent::messenger, std::__1::default_delete<caulk::concurrent::messenger>> _encoderMessenger;
    AVAudioPCMBuffer *_cannedRecordingBuffer;
    struct mutex _cannedRecordingMutex;
    BOOL _shortCircuit;
    BOOL _cannedRecording;
    NSObject<OS_dispatch_queue> *_sendQueue;
    CDUnknownBlockType _sendCompressedBytes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) BOOL cannedRecording; // @synthesize cannedRecording=_cannedRecording;
@property BOOL shortCircuit; // @synthesize shortCircuit=_shortCircuit;
@property(copy) CDUnknownBlockType sendCompressedBytes; // @synthesize sendCompressedBytes=_sendCompressedBytes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sendQueue; // @synthesize sendQueue=_sendQueue;
@property(readonly, nonatomic) int samplesPerPacket;
@property(readonly, nonatomic) int droppedPacketRecoveryLimit;
@property(readonly, nonatomic) unsigned long long decodedSampleCount;
@property(readonly, nonatomic) double currentPlaybackTime;
@property(readonly) unsigned int jitterBufferSize;
- (void)configureJitterBufferForTargetLatency:(long long)arg1;
- (CDUnknownBlockType)internalRenderBlock;
- (void)receiveCompressedBytes:(const char *)arg1 size:(unsigned int)arg2 timestamp:(double)arg3;
- (void)receiveCompressedBytes:(id)arg1 timestamp:(double)arg2;
- (void)receive:(const char *)arg1 size:(unsigned int)arg2 timestamp:(unsigned int)arg3;
- (void)receive:(id)arg1 timestamp:(unsigned int)arg2;
- (id)channelCapabilities;
- (void)deallocateRenderResources;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)arg1;
- (id)outputBusses;
- (id)inputBusses;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;

@end

