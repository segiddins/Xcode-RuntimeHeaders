//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBSceneUpdateProcessingRequest.h>

@class NSObject, NSString;

@interface IBSetValueForKeyProcessingRequest : IBSceneUpdateProcessingRequest
{
    NSObject *_object;
    NSString *_keyPath;
    NSObject *_value;
}

@property(retain, nonatomic) NSObject *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (BOOL)requiresSynchronousResultProcessing;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3 postProcessingBlock:(CDUnknownBlockType)arg4;

@end

