//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class DVTTypeCompletionHandler, NSString;

@protocol DVTTypeCompletionHandlerDelegate <NSObject>

@optional
- (void)typeCompletionHandlerCompletionDisplayShouldExpire:(DVTTypeCompletionHandler *)arg1;
- (void)typeCompletionHandlerCompletionWillExpire:(DVTTypeCompletionHandler *)arg1;
- (NSString *)typeCompletionHandler:(DVTTypeCompletionHandler *)arg1 typeCompletionStringForObject:(id)arg2;
@end

