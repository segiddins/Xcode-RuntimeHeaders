//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface USKToken : NSObject
{
    struct TfToken _token;
}

+ (id)tokenWithSchemaType:(id)arg1;
+ (id)tokenWithDataType:(id)arg1;
+ (id)tokenWithRoleType:(id)arg1;
+ (id)tokenWithNodeType:(id)arg1;
+ (id)dataTypeWithTfToken:(struct TfToken)arg1;
+ (id)roleTypeWithTfToken:(struct TfToken)arg1;
+ (id)nodeTypeWithTfToken:(struct TfToken)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)stringValue;
- (id)initWithString:(id)arg1;
- (id)initWithTfToken:(struct TfToken)arg1;
- (id)init;
- (struct TfToken)token;

@end

