//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSImage, NSNumber;

@interface IBDeviceBezel : NSObject
{
    BOOL _drawsInPreview;
    long long _bezelStyle;
    NSColor *_bezelColor;
    double _cornerRadius;
    NSNumber *_cornerRadiusInset;
    NSImage *_bezelImage;
    double _bezelStrokeWidth;
    CDStruct_c519178c _bezelInset;
}

+ (id)artworkBezelWithInset:(CDStruct_c519178c)arg1 bezelImage:(id)arg2;
+ (id)colorBezelWithInset:(CDStruct_c519178c)arg1 cornerRadius:(double)arg2 cornerRadiusInset:(id)arg3 drawsInPreview:(BOOL)arg4 bezelColor:(id)arg5 bezelStrokeWidth:(double)arg6;
- (void).cxx_destruct;
@property(nonatomic) double bezelStrokeWidth; // @synthesize bezelStrokeWidth=_bezelStrokeWidth;
@property(retain, nonatomic) NSImage *bezelImage; // @synthesize bezelImage=_bezelImage;
@property(nonatomic) BOOL drawsInPreview; // @synthesize drawsInPreview=_drawsInPreview;
@property(retain, nonatomic) NSNumber *cornerRadiusInset; // @synthesize cornerRadiusInset=_cornerRadiusInset;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSColor *bezelColor; // @synthesize bezelColor=_bezelColor;
@property(nonatomic) CDStruct_c519178c bezelInset; // @synthesize bezelInset=_bezelInset;
@property(nonatomic) long long bezelStyle; // @synthesize bezelStyle=_bezelStyle;
- (id)initBezelStyle:(long long)arg1 inset:(CDStruct_c519178c)arg2 cornerRadius:(double)arg3 cornerRadiusInset:(id)arg4 drawsInPreview:(BOOL)arg5 bezelColor:(id)arg6 bezelImage:(id)arg7 bezelStrokeWidth:(double)arg8;

@end

