//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSButton;

@interface SKEInspectorButtonActionProperty : IDEInspectorProperty
{
    NSButton *_button;
    IDEInspectorKeyPath *_targetKeyPath;
    IDEInspectorKeyPath *_argumentKeyPath;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)action:(id)arg1;

@end
