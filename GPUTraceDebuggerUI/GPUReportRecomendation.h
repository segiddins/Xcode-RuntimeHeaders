//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSImage, NSString;

__attribute__((visibility("hidden")))
@interface GPUReportRecomendation : NSObject
{
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, retain, nonatomic) NSImage *image;
- (id)initWithRecomendationText:(id)arg1;

@end

