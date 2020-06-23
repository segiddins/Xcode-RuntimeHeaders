//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SKIndex/NSCopying-Protocol.h>

@class IDEBoltIndexDatabase;

__attribute__((visibility("hidden")))
@interface IDEBoltIndexImportSession : NSObject <NSCopying>
{
    BOOL _hasEnded;
    IDEBoltIndexDatabase *_database;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasEnded; // @synthesize hasEnded=_hasEnded;
@property(readonly, nonatomic) IDEBoltIndexDatabase *database; // @synthesize database=_database;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)didEnd;
- (void)endSession;
- (void)removePendingIndexJob:(id)arg1;
- (void)addPendingIndexJob:(id)arg1;
- (BOOL)shouldIndexJob:(id)arg1;
- (id)initWithDatabase:(id)arg1;

@end

