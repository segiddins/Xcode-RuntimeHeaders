//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@interface IBMemberPropertyValue : NSObject <NSCoding>
{
    id _value;
}

+ (id)memberPropertyValueWithValue:(id)arg1;
+ (id)nilValue;
- (void).cxx_destruct;
- (id)ibTransformValueBeforeApplyingFromUndoStack;
- (id)ibTransformValueBeforePushingOntoUndoStackWithDocument:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPropertyValue:(id)arg1;
- (unsigned long long)hash;
- (id)evaluate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1;

@end

