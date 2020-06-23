//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>

@class IBCustomViewDrawingDescription, NSString;

@interface IBPlaceholderDrawingAttributes : NSObject <IBBinaryArchiving>
{
    BOOL _drawTopEdgeShadow;
    NSString *_title;
    NSString *_subtitle;
    NSString *_explanatoryText;
    long long _style;
    IBCustomViewDrawingDescription *_customViewDrawingDescription;
}

@property(nonatomic) BOOL drawTopEdgeShadow; // @synthesize drawTopEdgeShadow=_drawTopEdgeShadow;
@property(retain, nonatomic) IBCustomViewDrawingDescription *customViewDrawingDescription; // @synthesize customViewDrawingDescription=_customViewDrawingDescription;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *explanatoryText; // @synthesize explanatoryText=_explanatoryText;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

