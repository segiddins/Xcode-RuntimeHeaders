//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol DVTPathCellItem;

@protocol _TtP6DVTKit25DVTPathCellItemDataSource_
- (void)loadPathCellItems:(void (^)(NSArray *))arg1 completion:(void (^)(void))arg2;
- (void)cancel;
@property(nonatomic, readonly) BOOL isCancelled;
@property(nonatomic, readonly) BOOL isFinished;
@property(nonatomic, readonly) id <DVTPathCellItem> parentItem;
@end

