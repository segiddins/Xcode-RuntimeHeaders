//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/NSObject-Protocol.h>

@class NSMenu;
@protocol DTObjectGridGraph, DTObjectGridNode, DTObjectGridReference;

@protocol DTObjectGridGraphDelegate <NSObject>
- (void)objectGridGraph:(id <DTObjectGridGraph>)arg1 willDisplayReference:(id <DTObjectGridReference>)arg2;
- (void)objectGridGraph:(id <DTObjectGridGraph>)arg1 willDisplayNode:(id <DTObjectGridNode>)arg2;

@optional
- (NSMenu *)objectGridGraph:(id <DTObjectGridGraph>)arg1 contextMenuForNode:(id <DTObjectGridNode>)arg2;
- (void)objectGridGraph:(id <DTObjectGridGraph>)arg1 didDoubleClickReference:(id <DTObjectGridReference>)arg2;
- (void)objectGridGraph:(id <DTObjectGridGraph>)arg1 didDoubleClickNode:(id <DTObjectGridNode>)arg2;
- (void)objectGridGraph:(id <DTObjectGridGraph>)arg1 didCmdClickReference:(id <DTObjectGridReference>)arg2;
- (void)objectGridGraph:(id <DTObjectGridGraph>)arg1 didClickReference:(id <DTObjectGridReference>)arg2;
- (void)objectGridGraph:(id <DTObjectGridGraph>)arg1 didCmdClickNode:(id <DTObjectGridNode>)arg2;
- (void)objectGridGraph:(id <DTObjectGridGraph>)arg1 didClickNode:(id <DTObjectGridNode>)arg2;
@end
