//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTDocumentation/DVTCancellable-Protocol.h>

@interface _TtC16DVTDocumentation30DVTDocumentationFetchOperation : NSObject <DVTCancellable>
{
    // Error parsing type: , name: _taskList
    // Error parsing type: , name: _manager
    // Error parsing type: , name: replyOnMainQueue
    // Error parsing type: , name: completionBlock
    // Error parsing type: , name: qualityOfService
    // Error parsing type: , name: language
}

- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (BOOL)isCancelled;

// Remaining properties
@property(nonatomic, readonly) BOOL cancelled;

@end

