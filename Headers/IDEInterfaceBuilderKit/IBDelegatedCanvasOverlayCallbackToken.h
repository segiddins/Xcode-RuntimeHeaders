//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBDelegatedCanvasOverlayCallbackToken : NSObject
{
    CDUnknownBlockType _callback;
    long long _priority;
}

- (void).cxx_destruct;
@property(readonly) long long priority; // @synthesize priority=_priority;
- (void)invoke;
- (long long)comparePriority:(id)arg1;
- (id)initWithCallback:(CDUnknownBlockType)arg1 priority:(long long)arg2;

@end

