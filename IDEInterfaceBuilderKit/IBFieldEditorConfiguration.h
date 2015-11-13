//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>

@class NSAttributedString, NSFont, NSString, NSValue;

@interface IBFieldEditorConfiguration : NSObject <NSCopying>
{
    NSAttributedString *initialAttributedValue;
    NSString *initialValue;
    NSValue *anchor;
    NSValue *minimumSize;
    NSValue *maximumSize;
    NSFont *font;
    unsigned long long alignment;
    double lineFragmentPadding;
    BOOL bordered;
    BOOL richText;
    BOOL growsToFitBounds;
    BOOL usesFontPanel;
    BOOL wraps;
    BOOL importsGraphics;
    BOOL allowsEditingTextAttributes;
}

+ (id)fieldEditorConfigurationFromCell:(id)arg1;
@property BOOL allowsEditingTextAttributes; // @synthesize allowsEditingTextAttributes;
@property BOOL importsGraphics; // @synthesize importsGraphics;
@property BOOL usesFontPanel; // @synthesize usesFontPanel;
@property BOOL growsToFitBounds; // @synthesize growsToFitBounds;
@property(getter=isRichText) BOOL richText; // @synthesize richText;
@property(getter=isBordered) BOOL bordered; // @synthesize bordered;
@property BOOL wraps; // @synthesize wraps;
@property double lineFragmentPadding; // @synthesize lineFragmentPadding;
@property(copy) NSValue *maximumSize; // @synthesize maximumSize;
@property(copy) NSValue *minimumSize; // @synthesize minimumSize;
@property unsigned long long alignment; // @synthesize alignment;
@property(copy) NSAttributedString *initialAttributedValue; // @synthesize initialAttributedValue;
@property(copy) NSString *initialValue; // @synthesize initialValue;
@property(copy) NSValue *anchor; // @synthesize anchor;
@property(copy) NSFont *font; // @synthesize font;
- (void).cxx_destruct;
- (id)effectiveInitalAttributedValue;
- (CDUnion_31865a80)effectiveAnchor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

