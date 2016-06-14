//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCEActivity.h>

@class NSHashTable, NSPointerArray;

@interface XCESignal : XCEActivity
{
    id _representedObject;
    id _bufferedObject;
    NSPointerArray *_receivers;
    NSHashTable *_receiversStrong;
    CDUnknownBlockType _verificationBlock;
    struct {
        unsigned int triggerWhenValueChanges:1;
        unsigned int triggerEvenWhenSettingSameValue:1;
        unsigned int bufferedObject:1;
        unsigned int executedWithCurrentObject:1;
        unsigned int _reserved:28;
    } _sFlags;
}

@property(copy) CDUnknownBlockType verificationBlock; // @synthesize verificationBlock=_verificationBlock;
- (void)dealloc;
- (void)receiveXCESignal:(id)arg1;
- (id)receivers;
- (void)removeReceiver:(id)arg1;
- (void)addReceiver:(id)arg1 strongRef:(BOOL)arg2;
- (void)execute;
@property(retain, nonatomic) id representedObject; // @dynamic representedObject;
- (BOOL)_assignValue:(id)arg1;
- (id)init;
@property(nonatomic) BOOL triggerEvenWhenSettingSameValue;
@property(nonatomic) BOOL triggerWhenValueChanges;

@end

