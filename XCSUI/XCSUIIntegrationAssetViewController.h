//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSImage, NSProgressIndicator, NSString, NSURLSessionDownloadTask, NSView, XCSIntegration, XCSIntegrationAsset, XCSUIIntegrationAssetView;

@interface XCSUIIntegrationAssetViewController : NSViewController
{
    XCSIntegration *_integration;
    NSView *_actionView;
    NSView *_archiveActionView;
    NSView *_iOSProductActionView;
    NSView *_downloadProgressView;
    NSProgressIndicator *_progressIndicator;
    NSURLSessionDownloadTask *_currentDownload;
}

@property __weak NSURLSessionDownloadTask *currentDownload; // @synthesize currentDownload=_currentDownload;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSView *downloadProgressView; // @synthesize downloadProgressView=_downloadProgressView;
@property(retain) NSView *iOSProductActionView; // @synthesize iOSProductActionView=_iOSProductActionView;
@property(retain) NSView *archiveActionView; // @synthesize archiveActionView=_archiveActionView;
@property(retain) NSView *actionView; // @synthesize actionView=_actionView;
@property(retain) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long assetType;
@property(retain, nonatomic) XCSIntegrationAsset *asset;
@property(retain) NSImage *icon;
@property(copy) NSString *title;
@property(readonly) XCSUIIntegrationAssetView *assetView;
- (void)downloadAndUnzipAssetToDirectory:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)saveAssetToDirectory:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)cancelDownload:(id)arg1;
- (void)installAsset:(id)arg1;
- (void)submitAsset:(id)arg1;
- (void)showAssetInOrganizer:(id)arg1;
- (void)downloadAsset:(id)arg1;
- (void)copyAssetInstallationLink:(id)arg1;
- (void)copyAssetDownloadLink:(id)arg1;
- (void)removeAllActionViews;
- (void)displayProgressView;
- (void)displayActionView;
- (void)loadView;

@end

