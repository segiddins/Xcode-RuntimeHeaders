//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEBuildFolderSettings : NSObject
{
    int buildLocationStyle;
    NSString *sharedBuildFolderName;
    int customBuildLocationType;
    NSString *customBuildProductsPath;
    NSString *customBuildIntermediatesPath;
}

+ (id)buildFolderSettingsForWorkspaceSettings:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end

