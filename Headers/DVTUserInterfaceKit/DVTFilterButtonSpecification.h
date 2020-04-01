//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface DVTFilterButtonSpecification : NSObject
{
    NSString *_expressionIdentifier;
    NSImage *_offStateImage;
    NSImage *_onStateImage;
    NSString *_tooltip;
    NSString *_accessibilityDescription;
    NSString *_allowedKeyPath;
}

@property(readonly) NSString *allowedKeyPath; // @synthesize allowedKeyPath=_allowedKeyPath;
@property(readonly) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property(readonly) NSString *tooltip; // @synthesize tooltip=_tooltip;
@property(readonly) NSImage *onStateImage; // @synthesize onStateImage=_onStateImage;
@property(readonly) NSImage *offStateImage; // @synthesize offStateImage=_offStateImage;
@property(readonly) NSString *expressionIdentifier; // @synthesize expressionIdentifier=_expressionIdentifier;
- (void).cxx_destruct;
- (id)initWithFilterExpressionIdentifier:(id)arg1 image:(id)arg2 alternateImage:(id)arg3 toolTip:(id)arg4 accessibilityDescription:(id)arg5 allowedKeyPath:(id)arg6;

@end

