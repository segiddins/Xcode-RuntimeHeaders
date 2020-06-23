//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IDEXcode3ProjectItemRenaming-Protocol.h>

@class DVTFilePath, NSString;

@interface IBDocumentItemRenamer : NSObject <IDEXcode3ProjectItemRenaming>
{
    DVTFilePath *_targetDocument;
    DVTFilePath *_exportedStringsFile;
    NSString *_tempDirPathString;
    NSString *_originalName;
}

- (void).cxx_destruct;
- (void)renameCompleted;
- (BOOL)renameItems:(id)arg1 error:(id *)arg2;
- (BOOL)_saveDictionaryAsStringsFile:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)renameableItemsForFile:(id)arg1 currentName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

