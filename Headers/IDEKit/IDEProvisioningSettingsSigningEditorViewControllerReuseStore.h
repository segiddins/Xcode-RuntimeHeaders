//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IDEProvisioningSettingsSigningEditorViewControllerReuseStore : NSObject
{
    long long _position;
    NSArray *_reusableViewControllers;
}

@property(retain, nonatomic) NSArray *reusableViewControllers; // @synthesize reusableViewControllers=_reusableViewControllers;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void).cxx_destruct;
@property(readonly) NSArray *discardedViewControllers;
- (id)popReusableViewController;
- (id)initWithReusableViewControllers:(id)arg1;

@end

