//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTDocumentLocation, NSString;

@protocol IDEJumpToLineDestination <NSObject>
- (NSString *)initialQueryForJumpToLine;
- (DVTDocumentLocation *)documentLocationForJumpToLineQuery:(NSString *)arg1;
@end

