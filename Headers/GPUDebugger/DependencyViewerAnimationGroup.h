//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface DependencyViewerAnimationGroup : NSObject
{
    NSMutableSet *_actions;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)runAction:(id)arg1 onNode:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

