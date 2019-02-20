//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSColor, NSFont, NSMutableDictionary, NSString;

@interface PBXTextAttributes : NSObject
{
    NSString *_defaultsKeyPrefixString;
    NSFont *_font;
    NSColor *_color;
    NSMutableDictionary *_attributeDictionary;
    BOOL _attributeDictionaryValid;
}

- (id)attributeDictionary;
- (id)attributedStringWithAttributes:(id)arg1;
- (void)copyAttributesFrom:(id)arg1;
- (id)color;
- (id)font;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)retreiveFromDefaultsWithDefaultFont:(id)arg1 color:(id)arg2;
- (void)saveAttributesToDefaults;
- (id)defaultsKeyPrefixString;
- (void)setDefaultsKeyPrefixString:(id)arg1;
- (id)_colorDefaultsKey;
- (id)_fontSizeDefaultsKey;
- (id)_fontNameDefaultsKey;
- (void)_invalidateAttributeDictionary;
- (void)_validateAttributeDictionary;
- (void)dealloc;
- (id)init;

@end
