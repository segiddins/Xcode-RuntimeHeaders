//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESceneKitEditor/NSObject-Protocol.h>

@class NSArray, NSImage, NSString, SKEContentsPickerPopUpButton;

@protocol SKEContentsPickerPopUpButtonDataSource <NSObject>
- (NSImage *)imageForContentsPickerImageName:(NSString *)arg1;
- (NSArray *)suggestedImagesForContentsPicker:(SKEContentsPickerPopUpButton *)arg1;
@end

