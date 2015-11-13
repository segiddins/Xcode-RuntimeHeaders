//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLMeshBufferZone-Protocol.h>

@class NSString;
@protocol MDLMeshBufferAllocator;

@interface MDLMeshBufferZoneDefault : NSObject <MDLMeshBufferZone>
{
    unsigned long long _usedCapacity;
    unsigned long long _capacity;
    id <MDLMeshBufferAllocator> _allocator;
}

@property(readonly, retain, nonatomic) id <MDLMeshBufferAllocator> allocator; // @synthesize allocator=_allocator;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (void)cancelMemory:(unsigned long long)arg1;
- (BOOL)reserveMemory:(unsigned long long)arg1 allocator:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

