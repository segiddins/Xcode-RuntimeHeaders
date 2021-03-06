//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSKeyedUnarchiver.h>

#import <IDESceneKitEditor/NSKeyedUnarchiverDelegate-Protocol.h>

@class NSString;
@protocol NSKeyedUnarchiverDelegate;

@interface SKESceneCustomClassKeyedUnarchiver : NSKeyedUnarchiver <NSKeyedUnarchiverDelegate>
{
    id <NSKeyedUnarchiverDelegate> _clientDelegate;
}

- (void).cxx_destruct;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (id)initForReadingWithData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

