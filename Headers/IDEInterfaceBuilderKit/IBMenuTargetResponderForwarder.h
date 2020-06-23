//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSResponder.h>

@class NSMutableSet, NSSet;

@interface IBMenuTargetResponderForwarder : NSResponder
{
    NSMutableSet *_actionWhitelist;
    NSResponder *_targetResponder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *actionWhitelist; // @synthesize actionWhitelist=_actionWhitelist;
@property(retain, nonatomic) NSResponder *targetResponder; // @synthesize targetResponder=_targetResponder;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)responderChainTargetForSelector:(SEL)arg1;
- (BOOL)wantsToHandleAction:(SEL)arg1;
- (void)addActionsToWhitelist:(id)arg1;
- (id)init;

@end

