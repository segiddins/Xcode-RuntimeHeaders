//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBUIColor, IBUIImageSymbolConfiguration, NSAttributedString, NSImage, NSString;

@interface IBUIButtonPerStateAttributes : NSObject
{
    NSString *_title;
    NSAttributedString *_attributedTitle;
    IBUIColor *_titleColor;
    IBUIColor *_titleShadowColor;
    NSImage *_image;
    NSImage *_backgroundImage;
    IBUIImageSymbolConfiguration *_preferredSymbolConfiguration;
}

@property(retain, nonatomic) IBUIImageSymbolConfiguration *preferredSymbolConfiguration; // @synthesize preferredSymbolConfiguration=_preferredSymbolConfiguration;
@property(retain, nonatomic) NSImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) IBUIColor *titleShadowColor; // @synthesize titleShadowColor=_titleShadowColor;
@property(copy, nonatomic) IBUIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

