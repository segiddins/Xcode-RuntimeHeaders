//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class NSValue;

@interface IBArchivableValue : NSObject <NSCoding>
{
    NSValue *value;
}

+ (id)archivableValueWithValue:(id)arg1;
- (void).cxx_destruct;
- (id)value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1;

@end

