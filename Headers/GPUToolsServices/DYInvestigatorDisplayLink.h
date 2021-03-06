//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/NSCopying-Protocol.h>
#import <GPUToolsServices/NSSecureCoding-Protocol.h>

@interface DYInvestigatorDisplayLink : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _running;
    unsigned int _identifier;
    unsigned int _targetFPS;
    unsigned long long _timeStamp;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) unsigned int targetFPS; // @synthesize targetFPS=_targetFPS;
@property(nonatomic) BOOL running; // @synthesize running=_running;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned int)arg1 withRunning:(BOOL)arg2 withTargetFPS:(unsigned int)arg3;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

