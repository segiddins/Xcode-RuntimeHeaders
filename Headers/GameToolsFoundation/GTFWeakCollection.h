//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface GTFWeakCollection : NSObject
{
    NSMutableSet *_entries;
}

+ (id)weakCollection;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSSet *allObjects;
- (void)_removeEntryWithHash:(unsigned long long)arg1;
- (void)removeObject:(id)arg1;
- (void)addWeakObject:(id)arg1;
- (id)init;

@end

