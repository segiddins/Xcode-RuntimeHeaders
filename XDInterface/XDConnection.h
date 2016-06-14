//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XDInterface/NSCoding-Protocol.h>

@class XDGraphic;

@interface XDConnection : NSObject <NSCoding>
{
    XDGraphic *_graphic;
    XDGraphic *_targetGraphic;
    struct _XDConnectionFlags _cFlags;
}

+ (void)initialize;
- (void)invalidate;
- (id)targetGraphic;
- (void)setTargetGraphic:(id)arg1;
- (id)graphic;
- (void)_setGraphic:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

