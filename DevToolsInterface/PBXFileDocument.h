//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

@class NSDate, NSString, PBXFileType;

@interface PBXFileDocument : NSDocument
{
    struct {
        unsigned int autoClose:1;
        unsigned int isManipulatable:1;
        unsigned int openForUI:1;
        unsigned int isClosing:1;
        unsigned int needsDiskCheck:1;
        unsigned int isWritable:1;
        unsigned int representsFileOnDisk:1;
        unsigned int allowsEditingOverridden:1;
        unsigned int RESERVED:25;
    } _fdFlags;
    NSDate *_lastModDate;
    unsigned long long _diskContentsTimestamp;
    NSString *_userVisibleTitle;
    PBXFileType *_pbxFileType;
}

+ (id)fileDocumentForFile:(id)arg1 loadIfNeeded:(BOOL)arg2;
+ (id)fileDocumentForFileReference:(id)arg1 loadIfNeeded:(BOOL)arg2 ignoringExternalEditors:(BOOL)arg3;
+ (id)fileDocumentForFileReference:(id)arg1 loadIfNeeded:(BOOL)arg2;
+ (id)_fileDocumentForFileReference:(id)arg1 file:(id)arg2 loadIfNeeded:(BOOL)arg3;
+ (id)_fileDocumentForFileReference:(id)arg1 file:(id)arg2 loadIfNeeded:(BOOL)arg3 ignoringExternalEditors:(BOOL)arg4;
+ (unsigned long long)flushPathToDocumentCache;
+ (BOOL)supportsMultipleEditors;
+ (Class)defaultFileEditorSubclass;
+ (void)_applicationDidBecomeActive:(id)arg1;
+ (void)checkDiskStateForFileDocuments;
+ (void)_referenceFileDidMove:(id)arg1;
+ (void)_referenceWillBeRemoved:(id)arg1;
+ (void)_fileDocument:(id)arg1 shouldClose:(BOOL)arg2 contextInfo:(void *)arg3;
+ (void)_referenceDidChangeSCMState:(id)arg1;
+ (void)setShouldPreserveResourceForksOnSave:(BOOL)arg1;
+ (BOOL)shouldPreserveResourceForksOnSave;
+ (void)setShouldPreserveFinderInfoOnSave:(BOOL)arg1;
+ (BOOL)shouldPreserveFinderInfoOnSave;
+ (void)setShouldSaveFilesWritable:(BOOL)arg1;
+ (BOOL)shouldSaveFilesWritable;
+ (void)setShouldPreservePosixPermissionsOnSave:(BOOL)arg1;
+ (BOOL)shouldPreservePosixPermissionsOnSave;
+ (void)initialize;
- (void)setPrintInfo:(id)arg1;
- (id)printInfo;
- (BOOL)isInProject:(id)arg1;
- (id)bookmarkInProject:(id)arg1;
- (id)pbxFileType;
- (void)setPBXFileType:(id)arg1;
- (id)bestFileReference;
- (id)fileReferenceInProject:(id)arg1;
- (long long)comparePaths:(id)arg1;
- (BOOL)showAndMakeActiveWithProjectDocument:(id)arg1;
- (BOOL)showAndMakeActive;
- (BOOL)showAndSelectLine:(unsigned long long)arg1;
- (BOOL)showAndSelectFromLine:(unsigned long long)arg1 toLine:(unsigned long long)arg2;
- (BOOL)showAndMakeActiveWithBookmark:(id)arg1;
- (void)setFileName:(id)arg1;
- (id)displayName;
- (id)userVisibleTitle;
- (void)setUserVisibleTitle:(id)arg1;
- (void)_handleDocumentFileChanges:(id)arg1;
- (void)saveDocument:(id)arg1;
- (void)revert;
- (void)revertIfNeeded;
- (unsigned long long)timestampForContentsOnDisk;
- (void)_needsDiskCheck;
- (BOOL)_checkDiskState;
- (void)updateDiskStateInfo;
- (void)_setRepresentsFileOnDisk:(BOOL)arg1;
- (BOOL)representsFileOnDisk;
- (void)setFileIsWritable:(BOOL)arg1;
- (BOOL)isFileWritable;
- (void)overrideAllowsEditing;
- (BOOL)allowsEditingOverridden;
- (int)diskState;
- (void)updateChangeCount:(unsigned long long)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)isDocumentManipulated;
- (BOOL)managesFileDocument:(id)arg1;
- (BOOL)isManipulatable;
- (void)setManipulatable:(BOOL)arg1;
- (BOOL)isAutoClose;
- (void)setAutoClose:(BOOL)arg1;
- (void)removeWindowController:(id)arg1;
- (BOOL)isOpenForUI;
- (void)openForUI;
- (void)close;
- (id)windowForSheet;
- (BOOL)checkAddWindowController:(id)arg1;
- (void)addWindowController:(id)arg1;
- (void)makeWindowControllers;
- (BOOL)writeWithBackupToFile:(id)arg1 ofType:(id)arg2 saveOperation:(unsigned long long)arg3;
- (BOOL)writeToFile:(id)arg1 ofType:(id)arg2 originalFile:(id)arg3 saveOperation:(unsigned long long)arg4;
- (id)fileAttributesToWriteToFile:(id)arg1 ofType:(id)arg2 saveOperation:(unsigned long long)arg3;
- (void)_addFileToProjectSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_addFileToProject:(id)arg1;
- (BOOL)_shouldFileBeAddedToProject;
- (id)_projectByLookingForDocumentInFileNavigators;
- (id)fileName;
- (id)noteNewRecentDocumentKey;
- (void)dealloc;
- (id)init;
- (id)initWithFileReference:(id)arg1 ignoringExternalEditors:(BOOL)arg2;
- (id)initWithFileReference:(id)arg1;
- (id)initWithFileReference:(id)arg1 usingType:(id)arg2;
- (BOOL)documentHasEditor;
- (id)smallFlatGenericEditedIconImage;
- (id)smallFlatGenericIconImage;
- (id)smallEditedIconImage;
- (id)editedIconImage;
- (id)smallIconImage;
- (id)iconImage;

@end

