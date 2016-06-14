//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEStructureEditingHelper : NSObject
{
}

+ (BOOL)moveOrCopyContainerItems:(id)arg1 andURLs:(id)arg2 intoFolderPath:(id)arg3 workspace:(id)arg4 intentToCopy:(BOOL)arg5 intentToMove:(BOOL)arg6 addedPaths:(id *)arg7;
+ (void)_performHoldingLock:(id)arg1 errors:(id)arg2 operation:(CDUnknownBlockType)arg3;
+ (void)_ensureDestinationFolderPathExists:(id)arg1;
+ (BOOL)_divideUpURLs:(id)arg1 inWorkspace:(id)arg2 toCopy:(id)arg3 orMove:(id)arg4 intentToCopy:(BOOL)arg5 intentToMove:(BOOL)arg6;
+ (id)_distinctFolderRootPathsInWorkspace:(id)arg1;
+ (id)urlsFromContainerItems:(id)arg1;
+ (void)computeLocationsForSourceURLs:(id)arg1 intoDstFolderPath:(id)arg2 srcPaths:(id)arg3 dstPaths:(id)arg4 addPaths:(id)arg5 allURLs:(id)arg6 shouldCheckAncestry:(BOOL)arg7;
+ (id)distinctFilePathForCopyOf:(id)arg1;
+ (id)distinctFilePathForNewFileIn:(id)arg1 withName:(id)arg2 andExtension:(id)arg3;
+ (id)distinctFilePathForNewUntitledFolderIn:(id)arg1;
+ (id)distinctFilePathInParent:(id)arg1 withProposedName:(id)arg2 andExtension:(id)arg3;

@end

