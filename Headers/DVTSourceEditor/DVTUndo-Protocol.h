//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTSourceEditor/DVTInvalidation-Protocol.h>

@protocol DVTUndoManagerDelegate;

@protocol DVTUndo <DVTInvalidation>
@property(nonatomic, retain) id <DVTUndoManagerDelegate> delegate;
@property(nonatomic, readonly) BOOL willAutomaticallyUndoNextChangeGroup;
- (void)automaticallyUndoNextChangeGroup;
@end

