//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SymlinkExtensions)
- (BOOL)forceCreateSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id *)arg3;
- (BOOL)symbolicLinkExistsAtPath:(id)arg1;
- (BOOL)fileExistsAtPath:(id)arg1 isSymbolicLink:(char *)arg2;
@end

