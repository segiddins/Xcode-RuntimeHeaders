//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelEditor/NSCoding-Protocol.h>
#import <IDEModelEditor/NSCopying-Protocol.h>

@class NSUndoManager, XDGraphic;

@interface XDDrawingStyle : NSObject <NSCoding, NSCopying>
{
    XDGraphic *_graphic;
}

+ (id)defaultDrawingStyle;
+ (void)initialize;
- (void).cxx_destruct;
- (void)drawInView:(id)arg1;
- (void)drawGraphic:(id)arg1 inView:(id)arg2;
@property(readonly) NSUndoManager *undoManager;
@property(retain, setter=_setGraphic:) XDGraphic *graphic;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithGraphic:(id)arg1;

@end

