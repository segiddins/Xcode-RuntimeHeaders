//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class NSString;

@protocol NSAccessibilityElement <NSObject>
- (id)accessibilityParent;
- (struct CGRect)accessibilityFrame;

@optional
- (NSString *)accessibilityIdentifier;
- (BOOL)isAccessibilityFocused;
@end

