//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCBuildSettingEditorModule.h>

@class NSTextField, NSTextView;

@interface XCStringEditorModule : XCBuildSettingEditorModule
{
    NSTextField *_titleField;
    NSTextView *_stringTextView;
}

- (void)keyUp:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (void)viewDidLoad;
- (id)moduleWindowFrameAutosaveName;
- (id)stringEditorModule;

@end
