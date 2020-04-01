//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IDEDistributionItem, NSNumber, NSString;
@protocol IDEDistributable;

@protocol IDEDistributionAppleProvidedContent
@property(readonly) NSString *mainAppStubCopySubpath;
@property(readonly) NSString *packagePath;
@property(readonly) NSString *archivePath;
@property(readonly) NSString *archiveOperationDestinationBuildSettingName;
- (NSNumber *)isAppleProvidedContent:(IDEDistributionItem *)arg1 archive:(id <IDEDistributable>)arg2 error:(id *)arg3;
- (BOOL)shouldCopySidecarContentFromArchive:(id <IDEDistributable>)arg1;
- (BOOL)shouldRemoveForAppStoreDistributionDistributionItem:(IDEDistributionItem *)arg1 shouldRemoveParentDirectory:(char *)arg2;
- (BOOL)shouldCodeSignDistributionItem:(IDEDistributionItem *)arg1;
@end

