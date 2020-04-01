//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDESearchWindowLocation : NSObject
{
    CDStruct_7e09e69b _horizontalPosition;
    CDStruct_7e09e69b _verticalPosition;
}

+ (id)readFromWindow:(id)arg1;
+ (id)windowLocationFromPlistRepresentation:(id)arg1;
+ (id)locationPinningTopCenterOfWindow:(id)arg1;
+ (id)defaultWindowLocation;
- (struct CGRect)windowContentRectForContentSize:(struct CGSize)arg1 onScreen:(id)arg2;
- (id)plistRepresentation;
- (id)initWithVerticalPosition:(CDStruct_7e09e69b)arg1 horizontalPosition:(CDStruct_7e09e69b)arg2;

@end

