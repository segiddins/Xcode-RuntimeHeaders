//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XDInterface/NSCopying-Protocol.h>
#import <XDInterface/XDComponentIdentifying-Protocol.h>

@class NSBezierPath, NSString, XDGraphic;

@interface XDShape : NSObject <NSCopying, XDComponentIdentifying>
{
    NSString *_identifier;
    XDGraphic *_graphic;
    NSString *_name;
    NSBezierPath *_fillPath;
    NSBezierPath *_strokePath;
}

+ (id)defaultIdentifier;
+ (void)initialize;
- (id)strokePath;
- (void)setStrokePath:(id)arg1;
- (id)fillPath;
- (void)setFillPath:(id)arg1;
- (id)displayName;
- (id)name;
- (void)setName:(id)arg1;
- (id)graphic;
- (void)setGraphic:(id)arg1;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

