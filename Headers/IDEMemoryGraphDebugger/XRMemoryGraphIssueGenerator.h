//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEDebugSession, NSArray, NSMutableArray;

@interface XRMemoryGraphIssueGenerator : NSObject
{
    NSMutableArray *_allIssues;
    IDEDebugSession *_debugSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak IDEDebugSession *debugSession; // @synthesize debugSession=_debugSession;
@property(readonly, nonatomic) NSArray *allIssues; // @synthesize allIssues=_allIssues;
- (void)_issuesChanged;
- (void)clearAllIssues;
- (void)addLeakedItems:(id)arg1 abandonedItems:(id)arg2;
- (id)initWithDebugSession:(id)arg1;

@end

