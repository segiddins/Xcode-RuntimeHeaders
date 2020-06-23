//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSProgressIndicator;

@interface _IDETestReportAttachmentCellView : NSTableCellView
{
    NSButton *_quickLookButton;
    NSProgressIndicator *_loadingProgress;
}

@property __weak NSProgressIndicator *loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property __weak NSButton *quickLookButton; // @synthesize quickLookButton=_quickLookButton;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)setBackgroundStyle:(long long)arg1;
- (void)awakeFromNib;

@end

