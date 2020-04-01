//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUI/NSCoding-Protocol.h>

@class SFAuthorization, SFAuthorizationView;

@interface XCSUIAuthorizationViewHelper : NSObject <NSCoding>
{
    SFAuthorizationView *authorizationView;
    SFAuthorization *_sfAuth;
    BOOL _currentlyAuthorized;
    BOOL _isAuthorized;
    CDUnknownBlockType _authChangedCallback;
}

@property(nonatomic) BOOL isAuthorized; // @synthesize isAuthorized=_isAuthorized;
@property(copy, nonatomic) CDUnknownBlockType authChangedCallback; // @synthesize authChangedCallback=_authChangedCallback;
- (void).cxx_destruct;
- (BOOL)authorizationViewShouldDeauthorize:(id)arg1;
- (void)authorizationViewDidDeauthorize:(id)arg1;
- (void)authorizationViewDidAuthorize:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateAuthorizationView;
- (void)attemptToAuthorize;
- (void)tearDown;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end

