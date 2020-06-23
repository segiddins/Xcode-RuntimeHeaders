//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUndoManager.h>

#import <DVTFoundation/DVTUndo-Protocol.h>

@class DVTStackBacktrace, NSMutableArray, NSString;
@protocol DVTUndoManagerDelegate;

@interface DVTUndoManager : NSUndoManager <DVTUndo>
{
    char *_delegateDescription;
    NSMutableArray *_undoGroupingBacktraces;
    NSMutableArray *_undoRegistrationBacktraces;
    long long _beginCount;
    long long _endCount;
    BOOL _willAutomaticallyUndoNextChangeGroup;
    id <DVTUndoManagerDelegate> _delegate;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property(retain, nonatomic) id <DVTUndoManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) BOOL willAutomaticallyUndoNextChangeGroup; // @synthesize willAutomaticallyUndoNextChangeGroup=_willAutomaticallyUndoNextChangeGroup;
- (void).cxx_destruct;
- (void)undoNestedGroup;
- (void)redo;
- (void)undo;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)enableUndoRegistration;
- (void)disableUndoRegistration;
- (void)dealloc;
- (void)primitiveInvalidate;
- (void)endUndoGrouping;
- (void)beginUndoGrouping;
- (void)_dvt_removeAllActions;
- (void)removeAllActions;
- (id)_undoRegistrationBacktraces;
- (id)_undoGroupingBacktraces;
- (void)_clearUndoGroupingBacktraces;
- (void)_setEndCount:(long long)arg1;
- (long long)_endCount;
- (void)_setBeginCount:(long long)arg1;
- (long long)_beginCount;
- (void)automaticallyUndoNextChangeGroup;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

