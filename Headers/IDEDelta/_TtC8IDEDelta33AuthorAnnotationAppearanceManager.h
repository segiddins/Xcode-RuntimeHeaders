//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSColor, NSDateFormatter, NSFont;

@interface _TtC8IDEDelta33AuthorAnnotationAppearanceManager : NSObject
{
    MISSING_TYPE *dateFormatter;
    MISSING_TYPE *fontSize;
    MISSING_TYPE *defaultFont;
    MISSING_TYPE *boldFont;
    MISSING_TYPE *subtitleColor;
    MISSING_TYPE *subtitleLinkColor;
    MISSING_TYPE *uncommittedCircleColor;
    MISSING_TYPE *titleColor;
    MISSING_TYPE *borderColor;
    MISSING_TYPE *currentTheme;
    MISSING_TYPE *themeObserver;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(nonatomic, retain) NSColor *borderColor; // @synthesize borderColor;
@property(nonatomic, retain) NSColor *titleColor; // @synthesize titleColor;
@property(nonatomic, retain) NSColor *uncommittedCircleColor; // @synthesize uncommittedCircleColor;
@property(nonatomic, retain) NSColor *subtitleLinkColor; // @synthesize subtitleLinkColor;
@property(nonatomic, retain) NSColor *subtitleColor; // @synthesize subtitleColor;
@property(nonatomic, retain) NSFont *boldFont; // @synthesize boldFont;
@property(nonatomic, retain) NSFont *defaultFont; // @synthesize defaultFont;
@property(nonatomic) double fontSize; // @synthesize fontSize;
@property(nonatomic, readonly) NSDateFormatter *dateFormatter; // @synthesize dateFormatter;

@end
