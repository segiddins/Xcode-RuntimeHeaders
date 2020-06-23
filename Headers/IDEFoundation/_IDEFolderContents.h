//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDEFolder, NSArray;

@interface _IDEFolderContents : NSObject
{
    IDEFolder *_folder;
    DVTFilePath *_filePath;
    NSArray *_fileNames;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSArray *fileNames; // @synthesize fileNames=_fileNames;
@property(retain) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void)_updateContentsFromFileSystem;
- (void)_teardown;
- (id)initWithFilePath:(id)arg1 folder:(id)arg2;

@end
