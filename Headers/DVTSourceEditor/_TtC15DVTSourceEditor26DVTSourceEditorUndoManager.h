//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_$s12SourceEditor0aB11UndoManagerCN.h"

#import <DVTSourceEditor/DVTUndo-Protocol.h>

@class MISSING_TYPE;
@protocol DVTUndoManagerDelegate;

@interface _TtC15DVTSourceEditor26DVTSourceEditorUndoManager : _$s12SourceEditor0aB11UndoManagerCN <DVTUndo>
{
    MISSING_TYPE *willAutomaticallyUndoNextChangeGroup;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)invalidate;
- (void)automaticallyUndoNextChangeGroup;
@property(nonatomic, retain) id <DVTUndoManagerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) BOOL willAutomaticallyUndoNextChangeGroup; // @synthesize willAutomaticallyUndoNextChangeGroup;

@end

