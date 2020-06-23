//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSDictionary;

@interface IDEProvisionableEntitlements : NSObject <NSCopying>
{
    NSDictionary *_signedEntitlements;
    NSDictionary *_simulatedEntitlements;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *simulatedEntitlements; // @synthesize simulatedEntitlements=_simulatedEntitlements;
@property(readonly, nonatomic) NSDictionary *signedEntitlements; // @synthesize signedEntitlements=_signedEntitlements;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSignedEntitlements:(id)arg1 simulatedEntitlements:(id)arg2;
- (id)initWithSignedEntitlements:(id)arg1;
- (id)init;

@end

