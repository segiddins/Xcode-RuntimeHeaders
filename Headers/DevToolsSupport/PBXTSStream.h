//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTWeakInterposer, NSString;
@protocol PBXTSStreamConsuming;

@interface PBXTSStream : NSObject
{
    NSString *_name;
    PBXTSStream *_upstreamStream;
    struct {
        unsigned int retainConsumer:1;
        unsigned int consumerIsStream:1;
    } _flags;
    id <PBXTSStreamConsuming> _retainedStreamConsumer;
    DVTWeakInterposer *_unretainedStreamConsumer_dvtWeakInterposer;
}

+ (id)stream;
- (void).cxx_destruct;
@property(retain) PBXTSStream *upstreamStream; // @synthesize upstreamStream=_upstreamStream;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)sendStreamDidEnd;
@property(readonly) PBXTSStream *sourceStream;
@property id <PBXTSStreamConsuming> streamConsumer;
- (void)dealloc;
- (id)init;
@property __weak id <PBXTSStreamConsuming> unretainedStreamConsumer;

@end

