//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProfileQualifier-Protocol.h>

@class IDEProfileQualifierResult, NSString;

@interface IDEProfileBlockQualifier : NSObject <IDEProfileQualifier>
{
    BOOL _onlyDisplayOnError;
    NSString *_userFacingName;
    NSString *_debugDescription;
    IDEProfileQualifierResult *_result;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) IDEProfileQualifierResult *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *debugDescription; // @synthesize debugDescription=_debugDescription;
@property(nonatomic) BOOL onlyDisplayOnError; // @synthesize onlyDisplayOnError=_onlyDisplayOnError;
@property(readonly, nonatomic) NSString *userFacingName; // @synthesize userFacingName=_userFacingName;
- (id)description;
- (BOOL)qualify;
- (id)initWithUserFacingName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithUserFacingName:(id)arg1 onlyDisplayOnError:(BOOL)arg2 block:(CDUnknownBlockType)arg3;

@end

