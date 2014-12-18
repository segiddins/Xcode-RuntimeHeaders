//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTExtension, NSImage, NSString;

@interface IDEToolbarItemProxy : NSObject
{
    NSString *_toolbarItemIdentifier;
    BOOL _providesItems;
    NSString *_toolbarItemLabel;
    NSString *_toolbarItemPaletteLabel;
    NSString *_toolbarItemTooltip;
    SEL _toolbarItemAction;
    NSImage *_toolbarItemImage;
    DVTExtension *_commandDefinitionExtension;
    Class _providerClass;
}

+ (id)proxyForToolbarItemElement:(id)arg1 errorMessage:(id *)arg2;
@property Class providerClass; // @synthesize providerClass=_providerClass;
@property(retain) DVTExtension *commandDefinitionExtension; // @synthesize commandDefinitionExtension=_commandDefinitionExtension;
@property(retain) NSImage *toolbarItemImage; // @synthesize toolbarItemImage=_toolbarItemImage;
@property SEL toolbarItemAction; // @synthesize toolbarItemAction=_toolbarItemAction;
@property(copy) NSString *toolbarItemTooltip; // @synthesize toolbarItemTooltip=_toolbarItemTooltip;
@property(copy) NSString *toolbarItemPaletteLabel; // @synthesize toolbarItemPaletteLabel=_toolbarItemPaletteLabel;
@property(copy) NSString *toolbarItemLabel; // @synthesize toolbarItemLabel=_toolbarItemLabel;
@property BOOL providesItems; // @synthesize providesItems=_providesItems;
@property(copy) NSString *toolbarItemIdentifier; // @synthesize toolbarItemIdentifier=_toolbarItemIdentifier;
- (void).cxx_destruct;
- (id)toolbarItemForToolbarInWindow:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1;

@end

