//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProcessInfo.h>

@class NSString;

@interface NSProcessInfo (PBXFoundationExtra)
- (id)darwinUserCacheDirectoryPath;
- (id)darwinUserTemporaryDirectoryPath;
- (id)darwinUserDirectoryPath;
@property(readonly) NSString *shortGroupName;
@property(readonly) NSString *shortUserName;
- (id)xc_cachedEnvironmentAsMacroDefinitionTable;
@end

