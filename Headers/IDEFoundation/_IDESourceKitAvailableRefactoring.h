//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDESourceKitAvailableRefactoring-Protocol.h>

@class NSString;

@interface _IDESourceKitAvailableRefactoring : NSObject <IDESourceKitAvailableRefactoring>
{
    long long _kind;
    long long _ident;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) long long ident; // @synthesize ident=_ident;
@property(readonly) long long kind; // @synthesize kind=_kind;
- (id)initWithKind:(long long)arg1 ident:(long long)arg2 name:(id)arg3;

@end

