//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DTKPKDebugCodeWithName : NSObject
{
    CDUnion_1678db3a _kdebugCode;
    NSString *_name;
}

@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CDUnion_1678db3a kdebugCode; // @synthesize kdebugCode=_kdebugCode;
- (void).cxx_destruct;
- (id)initWithValue:(unsigned int)arg1 name:(id)arg2;

@end

