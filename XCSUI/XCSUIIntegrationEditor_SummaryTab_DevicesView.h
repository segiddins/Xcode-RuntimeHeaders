//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSNib, NSStackView, NSTextField, XCSIntegration;

@interface XCSUIIntegrationEditor_SummaryTab_DevicesView : NSTableCellView
{
    NSTextField *_devicesLabel;
    BOOL _didLayoutDevices;
    NSNib *_deviceNib;
    NSStackView *_stackView;
    XCSIntegration *_integration;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (void)_layoutDevices;

@end

