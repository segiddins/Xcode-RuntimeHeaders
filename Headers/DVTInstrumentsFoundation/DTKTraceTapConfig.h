//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapConfig.h>

@interface DTKTraceTapConfig : DTTapConfig
{
    unsigned int _kdebugTriggerIndex;
    CDUnknownBlockType _sessionHandler;
    CDUnknownBlockType _stackshotHandler;
}

+ (BOOL)localMachineSupportsPMI;
+ (BOOL)localMachineSupportsPMC;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned int kdebugTriggerIndex; // @synthesize kdebugTriggerIndex=_kdebugTriggerIndex;
@property(copy, nonatomic) CDUnknownBlockType stackshotHandler; // @synthesize stackshotHandler=_stackshotHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionHandler; // @synthesize sessionHandler=_sessionHandler;
- (int)addTriggerConfig:(id)arg1;
- (int)_addTriggerConfig:(id)arg1;
- (unsigned long long)triggerConfigCount;
- (void)enumerateTriggerConfigs:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL bufferSizeOverrideClamping;
@property(nonatomic) unsigned long long bufferSizeOverride;
@property(nonatomic) unsigned char recordingPriority;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

