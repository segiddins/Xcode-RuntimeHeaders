//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/DVTBasicDevice-Protocol.h>

@class NSArray, NSImage;

@protocol DVTBasicDeviceUI <DVTBasicDevice>
@property(readonly) int deviceWindowCategory;
@property(readonly) BOOL showCompanionUI;
@property(readonly) NSImage *proxyDeviceImage;
@property(readonly) NSImage *image;
@property(readonly) NSArray *deviceSummaryPropertyDictionaries;
@end
