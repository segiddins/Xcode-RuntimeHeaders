//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IDEEnhancedProvisioningSigningIdentity;

@interface IDESigningIdentityActionCellViewContents : NSObject
{
    BOOL _busy;
    BOOL _manageable;
    id <IDEEnhancedProvisioningSigningIdentity> _signingIdentity;
}

@property(readonly, nonatomic, getter=isManageable) BOOL manageable; // @synthesize manageable=_manageable;
@property(readonly, nonatomic, getter=isBusy) BOOL busy; // @synthesize busy=_busy;
@property(readonly, nonatomic) id <IDEEnhancedProvisioningSigningIdentity> signingIdentity; // @synthesize signingIdentity=_signingIdentity;
- (void).cxx_destruct;
- (id)initWithSigningIdentity:(id)arg1 busy:(BOOL)arg2 manageable:(BOOL)arg3;

@end

