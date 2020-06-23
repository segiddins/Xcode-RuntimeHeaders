//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUI/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface XCSXPCSettingsPayload : NSObject <NSSecureCoding>
{
    NSString *_smtpHost;
    NSString *_replyToName;
    NSString *_replyToAddress;
    NSString *_fromName;
    NSString *_fromAddress;
    NSNumber *_integrationTimeout;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *integrationTimeout; // @synthesize integrationTimeout=_integrationTimeout;
@property(copy, nonatomic) NSString *fromAddress; // @synthesize fromAddress=_fromAddress;
@property(copy, nonatomic) NSString *fromName; // @synthesize fromName=_fromName;
@property(copy, nonatomic) NSString *replyToAddress; // @synthesize replyToAddress=_replyToAddress;
@property(copy, nonatomic) NSString *replyToName; // @synthesize replyToName=_replyToName;
@property(copy, nonatomic) NSString *smtpHost; // @synthesize smtpHost=_smtpHost;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

