//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButton.h>

@class IBDeviceConfiguration;

@interface IBDevicePickerConfigurationButton : NSButton
{
    BOOL _inBranchMode;
    IBDeviceConfiguration *_deviceConfiguration;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isInBranchMode) BOOL inBranchMode; // @synthesize inBranchMode=_inBranchMode;
@property(retain, nonatomic) IBDeviceConfiguration *deviceConfiguration; // @synthesize deviceConfiguration=_deviceConfiguration;
- (void)drawRect:(struct CGRect)arg1;

@end

