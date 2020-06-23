//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol IDEBindableDeclarativeInspectorController;

@protocol IDEInspectorValueElement <NSObject>
- (id)aggregateReplacementBySettingValue:(id)arg1 forKeyPath:(NSString *)arg2 onObject:(id)arg3 fromKeyPath:(NSString *)arg4 ofObject:(id)arg5;
- (NSArray *)inspectedArrayControllerKeys;
- (id)valueForKeyPath:(NSString *)arg1;
- (id <IDEBindableDeclarativeInspectorController>)inspectorController;
@end

