//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTFActionCachedDataStore : NSObject
{
}

+ (id)sharedDataStore;
@property(nonatomic) double timeScaleSliderPosition;
@property(retain, nonatomic) NSString *filterTypeName;
@property(nonatomic) double widthOfNodeOverviewArea;
@property(nonatomic) double heightOfActionEditorArea;
@property(nonatomic) BOOL isActionEditorShown;
- (id)init;

@end

