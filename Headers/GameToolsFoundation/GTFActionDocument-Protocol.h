//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameToolsFoundation/GTFActionEditorClientDocument-Protocol.h>

@class GTFActionLibrary, GTFActionTimelineModel, NSString;

@protocol GTFActionDocument <GTFActionEditorClientDocument>
@property(readonly, nonatomic) GTFActionLibrary *actionLibrary;
- (NSString *)addActionTimeline:(GTFActionTimelineModel *)arg1 withName:(NSString *)arg2;
@end

