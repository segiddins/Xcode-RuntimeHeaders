//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@class XCSACL;

@interface XCSFetchACLOperation : XCSInitializationOperation
{
    XCSACL *_acl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XCSACL *acl; // @synthesize acl=_acl;
- (void)run;
- (id)statusDescription;

@end

