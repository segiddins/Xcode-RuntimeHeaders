//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@interface IDEDocViewerDocument : IDEEditorDocument
{
}

+ (BOOL)autosavesInPlace;
+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
- (int)readOnlyStatus;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end

