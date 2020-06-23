//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeltaFoundation/NSCopying-Protocol.h>

@interface DEFNVHashCache : NSObject <NSCopying>
{
    long long *_modifiedFNVHash;
    long long _modifiedFNVHashLength;
    long long *_originalFNVHash;
    long long _originalFNVHashLength;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setOriginalFNVHashLength:(long long)arg1;
- (long long)originalFNVHashLength;
- (void)setOriginalFNVHash:(long long *)arg1;
- (long long *)originalFNVHash;
- (void)setModifiedFNVHashLength:(long long)arg1;
- (long long)modifiedFNVHashLength;
- (void)setModifiedFNVHash:(long long *)arg1;
- (long long *)modifiedFNVHash;
- (id)init;
- (void)dealloc;

@end
