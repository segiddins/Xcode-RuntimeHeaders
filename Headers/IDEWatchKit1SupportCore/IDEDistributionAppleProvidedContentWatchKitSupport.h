//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDEDistributionAppleProvidedContent-Protocol.h"

@class NSString;

@interface IDEDistributionAppleProvidedContentWatchKitSupport : NSObject <IDEDistributionAppleProvidedContent>
{
}

@property(readonly) NSString *mainAppStubCopySubpath;
@property(readonly) NSString *packagePath;
@property(readonly) NSString *archivePath;
@property(readonly) NSString *archiveOperationDestinationBuildSettingName;
- (BOOL)shouldCopySidecarContentFromArchive:(id)arg1;
- (BOOL)shouldRemoveForAppStoreDistributionDistributionItem:(id)arg1 shouldRemoveParentDirectory:(char *)arg2;
- (id)isAppleProvidedContent:(id)arg1 archive:(id)arg2 error:(id *)arg3;
- (BOOL)shouldCodeSignDistributionItem:(id)arg1;

@end

