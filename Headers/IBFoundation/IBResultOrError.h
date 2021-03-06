//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class NSError, NSString;
@protocol IBBinaryArchiving;

@interface IBResultOrError : NSObject <IBBinaryArchiving>
{
    id <IBBinaryArchiving> _result;
    NSError *_error;
}

+ (id)wrapperForResultOfBlock:(CDUnknownBlockType)arg1;
+ (id)wrapperForResult:(id)arg1 orError:(id)arg2;
+ (id)wrapperForError:(id)arg1;
+ (id)wrapperForResult:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id <IBBinaryArchiving> result; // @synthesize result=_result;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithResult:(id)arg1 orError:(id)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

