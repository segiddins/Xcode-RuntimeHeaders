//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceControlUI/NSObject-Protocol.h>

@class NSError;

@protocol IDESourceControlFilePickerDelegate <NSObject>
- (void)displayError:(NSError *)arg1;
- (void)stopLoading;
- (void)startLoading;
@end
