//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSImageView, NSMenu, NSString, NSTextField, XCSIntegrationAsset;

@interface XCSUIIntegrationAssetView : NSView
{
    NSString *_title;
    NSImage *_icon;
    XCSIntegrationAsset *_asset;
    unsigned long long _assetType;
    NSTextField *_titleField;
    NSTextField *_filenameField;
    NSTextField *_filesizeField1;
    NSTextField *_filesizeField2;
    NSTextField *_filesizeField3;
    NSImageView *_iconView;
    NSMenu *_productMenu;
    NSMenu *_genericMenu;
}

- (void).cxx_destruct;
@property(retain) NSMenu *genericMenu; // @synthesize genericMenu=_genericMenu;
@property(retain) NSMenu *productMenu; // @synthesize productMenu=_productMenu;
@property __weak NSImageView *iconView; // @synthesize iconView=_iconView;
@property __weak NSTextField *filesizeField3; // @synthesize filesizeField3=_filesizeField3;
@property __weak NSTextField *filesizeField2; // @synthesize filesizeField2=_filesizeField2;
@property __weak NSTextField *filesizeField1; // @synthesize filesizeField1=_filesizeField1;
@property __weak NSTextField *filenameField; // @synthesize filenameField=_filenameField;
@property __weak NSTextField *titleField; // @synthesize titleField=_titleField;
@property(nonatomic) unsigned long long assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) XCSIntegrationAsset *asset; // @synthesize asset=_asset;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property(copy) NSString *title; // @synthesize title=_title;
- (void)refreshUI;
- (id)applicationIconForExtension:(id)arg1;

@end

