//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;
@protocol IBBinaryArchivableColor;

@interface IBUISimulatedNavigationItemMetrics : NSObject <IBBinaryArchiving>
{
    NSString *_title;
    NSString *_backButtonTitle;
    id <IBBinaryArchivableColor> _backButtonTintColor;
    long long _largeTitleDisplayMode;
}

@property(nonatomic) long long largeTitleDisplayMode; // @synthesize largeTitleDisplayMode=_largeTitleDisplayMode;
@property(copy, nonatomic) id <IBBinaryArchivableColor> backButtonTintColor; // @synthesize backButtonTintColor=_backButtonTintColor;
@property(copy, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (BOOL)isEqualToNavigationItemMetrics:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 backButtonTitle:(id)arg2 backButtonTintColor:(id)arg3 largeTitleDisplayMode:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

