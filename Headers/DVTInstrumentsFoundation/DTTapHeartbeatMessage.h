//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapMessage.h>

#import <DVTInstrumentsFoundation/NSSecureCoding-Protocol.h>

@interface DTTapHeartbeatMessage : DTTapMessage <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long heartbeatTime;
- (id)init;

@end

