//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/NSObject-Protocol.h>

@class NSSet;
@protocol IDEProvisioningProfileSourceDelegate;

@protocol IDEProvisioningProfileSource <NSObject, DVTInvalidation>
@property(retain, nonatomic) id <IDEProvisioningProfileSourceDelegate> delegate;
- (NSSet *)provisioningProfiles;
@end

