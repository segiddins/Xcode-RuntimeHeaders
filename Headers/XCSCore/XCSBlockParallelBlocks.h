//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface XCSBlockParallelBlocks : NSObject
{
    NSMutableDictionary *_tasks;
}

@property(retain, nonatomic) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)identifiers;
- (BOOL)stopOnFailureForIdentifier:(id)arg1;
- (CDUnknownBlockType)blockForIdentifier:(id)arg1;
- (void)addBlock:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2 stopOnFailure:(BOOL)arg3;
- (void)addBlock:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (id)init;

@end

