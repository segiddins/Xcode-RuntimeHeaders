//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSUI/NSObject-Protocol.h>

@class DVTDocumentLocation, DVTFindBar, DVTFindResult, NSArray;

@protocol DVTFindBarFindable <NSObject>

@optional
- (struct _NSRange)selectedRangeForFindBar:(DVTFindBar *)arg1;
- (DVTDocumentLocation *)startingLocationForFindBar:(DVTFindBar *)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(DVTFindBar *)arg1 didUpdateCurrentResult:(DVTFindResult *)arg2;
- (void)dvtFindBar:(DVTFindBar *)arg1 didUpdateResults:(NSArray *)arg2;
@end
