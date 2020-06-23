//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSImage, NSString;

@interface GPUBadgedText : NSObject
{
    int _badge;
    NSString *_text;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int badge; // @synthesize badge=_badge;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSColor *backgroundColor;
@property(readonly, nonatomic) NSImage *image;
- (id)initWithText:(id)arg1 badgeType:(int)arg2;

@end

