//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTToolbarViewController.h>

@class DVTSegmentedControl;

@interface DVTDevicesWindowToolbarViewController : DVTToolbarViewController
{
    DVTSegmentedControl *_segmentedControl;
}

@property(retain) DVTSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (void)selectSegment:(long long)arg1;
- (void)_segmentStateDidChange:(id)arg1;
- (void)_setStateForTag:(unsigned long long)arg1;
- (id)initWithToolbarItemIdentifier:(id)arg1 window:(id)arg2;

@end

