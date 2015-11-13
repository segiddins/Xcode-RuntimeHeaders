//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSPopUpButton, NSString, NSTextField;

@interface SKEBakeSettingsWindowController : NSWindowController
{
    NSPopUpButton *bakingType;
    NSPopUpButton *bakeDestination;
    NSTextField *sizeField;
    NSTextField *rayCountField;
    NSTextField *blurRadiusField;
    NSTextField *textureLocationField;
    NSString *_resourceEnclosingFolderPath;
}

- (void).cxx_destruct;
- (void)choose:(id)arg1;
- (void)changeDestinationType:(id)arg1;
- (void)cancel:(id)arg1;
- (void)bake:(id)arg1;
@property(retain, nonatomic) NSString *resourceEnclosingFolderPath;
- (void)windowDidLoad;
@property(readonly) CDStruct_862f26a3 settings;

@end

