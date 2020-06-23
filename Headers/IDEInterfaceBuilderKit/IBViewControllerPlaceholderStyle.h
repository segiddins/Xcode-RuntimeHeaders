//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSDictionary, NSShadow;

@interface IBViewControllerPlaceholderStyle : NSObject
{
    NSShadow *_barShadow;
    NSColor *_backgroundColor;
    NSDictionary *_titleAttributes;
    NSDictionary *_subtitleAttributes;
    NSDictionary *_explanationAttributes;
}

+ (id)styleWithTheme:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *explanationAttributes; // @synthesize explanationAttributes=_explanationAttributes;
@property(retain, nonatomic) NSDictionary *subtitleAttributes; // @synthesize subtitleAttributes=_subtitleAttributes;
@property(retain, nonatomic) NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSShadow *barShadow; // @synthesize barShadow=_barShadow;

@end

