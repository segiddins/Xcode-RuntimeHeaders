//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSArray, NSButton, NSPopUpButton, NSTextField, SKESceneImportOptions;

@interface SKEImportSheetController : NSWindowController
{
    SKESceneImportOptions *_importOptions;
    NSArray *_folders;
    NSButton *_convertToYUp;
    NSButton *_convertUnits;
    NSButton *_preserveOriginalTopology;
    NSButton *_generateNormals;
    NSTextField *_preferredUnits;
    NSButton *_shouldCopyImages;
    NSPopUpButton *_imageDestination;
}

- (void).cxx_destruct;
@property __weak NSPopUpButton *imageDestination; // @synthesize imageDestination=_imageDestination;
@property __weak NSButton *shouldCopyImages; // @synthesize shouldCopyImages=_shouldCopyImages;
@property __weak NSTextField *preferredUnits; // @synthesize preferredUnits=_preferredUnits;
@property __weak NSButton *generateNormals; // @synthesize generateNormals=_generateNormals;
@property __weak NSButton *preserveOriginalTopology; // @synthesize preserveOriginalTopology=_preserveOriginalTopology;
@property __weak NSButton *convertUnits; // @synthesize convertUnits=_convertUnits;
@property __weak NSButton *convertToYUp; // @synthesize convertToYUp=_convertToYUp;
- (void)cancel:(id)arg1;
- (void)import:(id)arg1;
@property(retain, nonatomic) NSArray *availableFoldersForImages;
- (void)windowDidLoad;
@property(readonly) SKESceneImportOptions *importOptions;

@end
