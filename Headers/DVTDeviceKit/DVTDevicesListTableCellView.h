//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSProgressIndicator;

@interface DVTDevicesListTableCellView : NSTableCellView
{
    NSProgressIndicator *_busyIndicator;
}

@property(retain) NSProgressIndicator *busyIndicator; // @synthesize busyIndicator=_busyIndicator;
- (void).cxx_destruct;
- (void)_updateBusyIndicator;
- (void)viewDidChangeEffectiveAppearance;
- (void)setBackgroundStyle:(long long)arg1;

@end

