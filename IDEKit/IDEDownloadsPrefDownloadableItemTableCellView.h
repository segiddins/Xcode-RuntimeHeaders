//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class DVTGauge, IDECombinedDownloadsPrefPaneController, IDEComponentDownloadsPrefPaneItem, IDEDownloadableCapsuleViewController, NSButton, NSTextField, NSTrackingArea;

@interface IDEDownloadsPrefDownloadableItemTableCellView : NSTableCellView
{
    NSButton *_downloadButton;
    NSTextField *_downloadSizeField;
    DVTGauge *_progressGauge;
    IDECombinedDownloadsPrefPaneController *_controller;
    IDEComponentDownloadsPrefPaneItem *_downloadableItem;
    IDEDownloadableCapsuleViewController *_capsuleController;
    NSTrackingArea *_trackingArea;
}

@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property __weak IDEDownloadableCapsuleViewController *capsuleController; // @synthesize capsuleController=_capsuleController;
@property __weak IDEComponentDownloadsPrefPaneItem *downloadableItem; // @synthesize downloadableItem=_downloadableItem;
@property __weak IDECombinedDownloadsPrefPaneController *controller; // @synthesize controller=_controller;
@property(retain) DVTGauge *progressGauge; // @synthesize progressGauge=_progressGauge;
@property(retain) NSTextField *downloadSizeField; // @synthesize downloadSizeField=_downloadSizeField;
@property(retain) NSButton *downloadButton; // @synthesize downloadButton=_downloadButton;
- (void).cxx_destruct;
- (void)download:(id)arg1;
- (void)awakeFromNib;

@end

