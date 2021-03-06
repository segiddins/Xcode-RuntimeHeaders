//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapMessage.h>

#import <DVTInstrumentsFoundation/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface DTSysmonTapMessage : DTTapMessage <NSSecureCoding>
{
    NSDictionary *_runningMetadata;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *runningMetadata; // @synthesize runningMetadata=_runningMetadata;
- (void)setSessionMetadata:(id)arg1;
- (id)sessionMetadata;
@property(nonatomic) unsigned int tapVersion;

@end

