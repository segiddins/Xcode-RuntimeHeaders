//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisioningBasicSigningIdentity-Protocol.h>

@class NSString;

@interface IDEProvisioningBasicSigningIdentity : NSObject <IDEProvisioningBasicSigningIdentity>
{
    NSString *_identifier;
    NSString *_userDescription;
}

@property(readonly) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 userDescription:(id)arg2;

@end

