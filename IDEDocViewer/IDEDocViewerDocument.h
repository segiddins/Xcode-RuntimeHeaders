//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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

