//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSImageView, NSTextField;

@interface SKEImagePreviewProperty : IDEInspectorProperty
{
    NSImageView *_imageView;
    NSTextField *_label;
    IDEInspectorKeyPath *_valueKeyPath;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;

@end

