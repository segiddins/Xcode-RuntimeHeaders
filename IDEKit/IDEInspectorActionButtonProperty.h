//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorAbstractActionProperty.h>

@class IDEInspectorKeyPath, NSButton, NSString;

@interface IDEInspectorActionButtonProperty : IDEInspectorAbstractActionProperty
{
    IDEInspectorKeyPath *_targetKeyPath;
    IDEInspectorKeyPath *_titleKeyPath;
    NSString *_title;
    SEL _action;
    NSButton *_button;
}

@property(retain, nonatomic) NSButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)broadcastAction:(id)arg1;
- (void)refreshTitle:(id)arg1;
- (double)baseline;

@end

