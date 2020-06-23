//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>
#import <IBCocoaTouchToolFoundation/NSCoding-Protocol.h>
#import <IBCocoaTouchToolFoundation/NSCopying-Protocol.h>

@class IBOffsetWrapper, IBUIFontDescription, NSColor, NSString;
@protocol IBBinaryArchiving;

@interface IBUITextAttributes : NSObject <NSCopying, NSCoding, IBBinaryArchiving>
{
    IBUIFontDescription *_fontDescription;
    NSColor<IBBinaryArchiving> *_textColor;
    NSColor<IBBinaryArchiving> *_textShadowColor;
    IBOffsetWrapper *_textShadowOffset;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IBOffsetWrapper *textShadowOffset; // @synthesize textShadowOffset=_textShadowOffset;
@property(readonly, copy, nonatomic) NSColor<IBBinaryArchiving> *textShadowColor; // @synthesize textShadowColor=_textShadowColor;
@property(readonly, copy, nonatomic) NSColor<IBBinaryArchiving> *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) IBUIFontDescription *fontDescription; // @synthesize fontDescription=_fontDescription;
- (id)ibAdditionalTraitStoragesWithObjectID:(id)arg1 keyPath:(id)arg2 targetOSVersion:(id)arg3 platform:(id)arg4;
- (BOOL)isEmpty;
- (id)textAttributesWithTextShadowOffset:(id)arg1;
- (id)textAttributesWithTextShadowColor:(id)arg1;
- (id)textAttributesWithTextColor:(id)arg1;
- (id)textAttributesWithFontDescription:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributeDictionary;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFontDescription:(id)arg1 textColor:(id)arg2 textShadowColor:(id)arg3 textShadowOffset:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
