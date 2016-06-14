//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSViewAnimationContext : NSObject
{
    NSArray *_viewAnimations;
    long long _animationCount;
    id _completionHandler;
}

@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property(retain, nonatomic) NSArray *viewAnimations; // @synthesize viewAnimations=_viewAnimations;
- (void)dealloc;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

