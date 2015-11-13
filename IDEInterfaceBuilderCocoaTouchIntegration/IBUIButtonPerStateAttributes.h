//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSColor, NSImage, NSString;

@interface IBUIButtonPerStateAttributes : NSObject
{
    NSString *title;
    NSAttributedString *attributedTitle;
    NSColor *titleColor;
    NSColor *titleShadowColor;
    NSImage *image;
    NSImage *backgroundImage;
}

@property(retain, nonatomic) NSImage *backgroundImage; // @synthesize backgroundImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image;
@property(copy, nonatomic) NSColor *titleShadowColor; // @synthesize titleShadowColor;
@property(copy, nonatomic) NSColor *titleColor; // @synthesize titleColor;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;

@end
