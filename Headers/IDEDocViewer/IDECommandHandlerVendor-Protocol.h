//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEDocViewer/NSObject-Protocol.h>

@protocol IDECommandHandler, IDESelectionSource;

@protocol IDECommandHandlerVendor <NSObject>
+ (id <IDECommandHandler>)handlerForAction:(SEL)arg1 withSelectionSource:(id <IDESelectionSource>)arg2;
@end

