//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPUMTLLabelCacheEntry : NSObject
{
    NSMutableDictionary *_labelMap;
    int _firstFunctionIndex;
}

- (void).cxx_destruct;
- (id)firstLabel;
- (id)labelForFunctionIndex:(int)arg1;
- (id)_findClosestFunctionIndex:(int)arg1;
- (void)setLabel:(id)arg1 forFunctionIndex:(int)arg2;
- (id)init;

@end
