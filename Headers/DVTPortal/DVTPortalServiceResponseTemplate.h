//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPortalCode, DVTServicesType, NSString;

@interface DVTPortalServiceResponseTemplate : NSObject
{
    BOOL _deserializesMultiple;
    NSString *_portalKey;
    DVTPortalCode *_code;
    DVTServicesType *_deserializedType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL deserializesMultiple; // @synthesize deserializesMultiple=_deserializesMultiple;
@property(readonly, nonatomic) DVTServicesType *deserializedType; // @synthesize deserializedType=_deserializedType;
@property(readonly, nonatomic) DVTPortalCode *code; // @synthesize code=_code;
@property(readonly, nonatomic) NSString *portalKey; // @synthesize portalKey=_portalKey;
- (id)resultFromPayload:(id)arg1 resultCode:(long long)arg2 error:(id *)arg3;
- (BOOL)matchesPayload:(id)arg1 resultCode:(long long)arg2;
- (BOOL)_isValueYieldingResponse;
- (id)description;
- (id)initWithExtensionParameter:(id)arg1;

@end

