//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceControlUI/NSObject-Protocol.h>

@class IDESelection, IDEWorkspaceTabController;

@protocol IDESelectionSource <NSObject>
@property(nonatomic, readonly) IDEWorkspaceTabController *workspaceTabController;
@property(nonatomic, readonly) IDESelection *contextMenuSelection;
@property(nonatomic, readonly) IDESelection *outputSelection;
@end

