//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface DVTSigningCertificateValidity : NSObject
{
    BOOL _isValid;
    NSError *_validityError;
}

+ (id)validityWithIsValid:(BOOL)arg1 error:(id)arg2;
@property(readonly) NSError *validityError; // @synthesize validityError=_validityError;
@property(readonly) BOOL isValid; // @synthesize isValid=_isValid;
- (void).cxx_destruct;
- (id)initWithIsValid:(BOOL)arg1 validityError:(id)arg2;

@end

