//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class DVTNotificationToken, NSImage;

@interface Xcode3TargetNavigableItem : IDEKeyDrivenNavigableItem
{
    NSImage *_targetImage;
    DVTNotificationToken *_testableImageNotificationToken;
}

+ (id)keyPathsForValuesAffectingName;
- (void).cxx_destruct;
- (id)image;
- (id)name;
- (void)_setImageFromTarget;
- (void)primitiveInvalidate;
- (id)initWithRepresentedObject:(id)arg1;

@end
