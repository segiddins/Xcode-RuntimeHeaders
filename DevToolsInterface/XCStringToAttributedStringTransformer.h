//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/PBXSourceLexerDelegate-Protocol.h>

@class NSMutableAttributedString;

@interface XCStringToAttributedStringTransformer : NSObject <PBXSourceLexerDelegate>
{
    NSMutableAttributedString *_attributedString;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (void)_highlightLinksInAttributedString;
- (void)gotSyntaxClass:(int)arg1 forRange:(struct _NSRange)arg2;
- (void)_setURLLink:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)dealloc;
- (id)init;

@end

