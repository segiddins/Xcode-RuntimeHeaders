//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DTDKCertificateService.h>

@class NSArray;

@interface DTDKListCSRsService : DTDKCertificateService
{
}

+ (id)keyPathsForValuesAffectingCertRequests;
+ (id)serviceForCertificateType:(unsigned long long)arg1 team:(id)arg2 andPlatform:(id)arg3;
@property(readonly) NSArray *certRequests;

@end

