//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol IDEProvisioningSigningIdentity <NSObject>
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly, copy, nonatomic) NSString *teamMemberID;
@property(readonly, copy, nonatomic) NSString *certificateKind;
@property(readonly, nonatomic) NSString *serialNumber;
@end

