//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCoding-Protocol.h>
#import <SpriteKit/NSCopying-Protocol.h>

@class NSString, SKTexture;

@interface SKUniform : NSObject <NSCopying, NSCoding>
{
    long long _type;
    NSString *_name;
    unsigned long long _seed;
    SKTexture *_textureValue;
    union {
        float _floatValue;
        union _GLKVector2 _floatVector2Value;
        union _GLKVector3 _floatVector3Value;
        union _GLKVector4 _floatVector4Value;
        union _GLKMatrix2 _floatMatrix2Value;
        union _GLKMatrix3 _floatMatrix3Value;
        union _GLKMatrix4 _floatMatrix4Value;
    } _value;
}

+ (id)uniformWithName:(id)arg1 texture:(id)arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix4:(union _GLKMatrix4)arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix3:(union _GLKMatrix3)arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix2:(union _GLKMatrix2)arg2;
+ (id)uniformWithName:(id)arg1 floatVector4:(union _GLKVector4)arg2;
+ (id)uniformWithName:(id)arg1 floatVector3:(union _GLKVector3)arg2;
+ (id)uniformWithName:(id)arg1 floatVector2:(union _GLKVector2)arg2;
+ (id)uniformWithName:(id)arg1 float:(float)arg2;
+ (id)uniformWithName:(id)arg1;
@property unsigned long long _seed; // @synthesize _seed;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) long long uniformType;
@property float floatValue;
@property(retain, nonatomic) SKTexture *textureValue;
@property union _GLKMatrix4 floatMatrix4Value;
@property union _GLKMatrix3 floatMatrix3Value;
@property union _GLKMatrix2 floatMatrix2Value;
@property union _GLKVector4 floatVector4Value;
@property union _GLKVector3 floatVector3Value;
@property union _GLKVector2 floatVector2Value;
- (id)initWithName:(id)arg1 floatMatrix4:(union _GLKMatrix4)arg2;
- (id)initWithName:(id)arg1 floatMatrix3:(union _GLKMatrix3)arg2;
- (id)initWithName:(id)arg1 floatMatrix2:(union _GLKMatrix2)arg2;
- (id)initWithName:(id)arg1 floatVector4:(union _GLKVector4)arg2;
- (id)initWithName:(id)arg1 floatVector3:(union _GLKVector3)arg2;
- (id)initWithName:(id)arg1 floatVector2:(union _GLKVector2)arg2;
- (id)initWithName:(id)arg1 texture:(id)arg2;
- (id)initWithName:(id)arg1 float:(float)arg2;
- (id)initWithName:(id)arg1;
- (id)description;

@end

