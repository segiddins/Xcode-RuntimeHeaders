//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _DYNSKVCMutableCollectionPropertyBinding : NSObject
{
    NSString *_key;
    NSString *_underlyingIvarName;
}

@property(readonly, copy, nonatomic) NSString *underlyingIvarName; // @synthesize underlyingIvarName=_underlyingIvarName;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)underlyingIvarValueForObject:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(id)arg1 underlyingIvarName:(id)arg2;

@end

