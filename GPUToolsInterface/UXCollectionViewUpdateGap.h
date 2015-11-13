//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UXCollectionViewUpdateItem;

__attribute__((visibility("hidden")))
@interface UXCollectionViewUpdateGap : NSObject
{
    UXCollectionViewUpdateItem *_firstUpdateItem;
    UXCollectionViewUpdateItem *_lastUpdateItem;
    NSMutableArray *_deleteItems;
    NSMutableArray *_insertItems;
    struct CGRect _beginningRect;
    struct CGRect _endingRect;
}

+ (id)gapWithUpdateItem:(id)arg1;
@property(nonatomic) struct CGRect endingRect; // @synthesize endingRect=_endingRect;
@property(nonatomic) struct CGRect beginningRect; // @synthesize beginningRect=_beginningRect;
@property(readonly, nonatomic) NSArray *insertItems; // @synthesize insertItems=_insertItems;
@property(readonly, nonatomic) NSArray *deleteItems; // @synthesize deleteItems=_deleteItems;
@property(retain, nonatomic) UXCollectionViewUpdateItem *lastUpdateItem; // @synthesize lastUpdateItem=_lastUpdateItem;
@property(retain, nonatomic) UXCollectionViewUpdateItem *firstUpdateItem; // @synthesize firstUpdateItem=_firstUpdateItem;
@property(readonly, nonatomic) BOOL isSectionBasedGap;
@property(readonly, nonatomic) NSArray *updateItems;
@property(readonly, nonatomic) BOOL hasInserts;
@property(readonly, nonatomic) BOOL isDeleteBasedGap;
- (void)dealloc;
- (void)addUpdateItem:(id)arg1;
- (id)description;
- (id)init;

@end

