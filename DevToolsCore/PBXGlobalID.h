//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/NSCopying-Protocol.h>

@class PBXObject;

@interface PBXGlobalID : NSObject <NSCopying>
{
    unsigned char _bytes[12];
    PBXObject *_theObject;
}

+ (void)initialize;
+ (void)setCachesHexStrings:(BOOL)arg1;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (id)description;
- (id)hexString;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithHexString:(id)arg1;
- (id)init;
- (void)_cacheHexString:(id)arg1;
- (id)_cachedHexString;

@end

