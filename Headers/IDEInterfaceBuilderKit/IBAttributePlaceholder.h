//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class NSString;

@interface IBAttributePlaceholder : NSObject <NSCoding>
{
    id _object;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) id object; // @synthesize object=_object;
- (void)didCompileDocument:(id)arg1;
- (void)willCompileDocument:(id)arg1;
- (id)archiveConnection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 andName:(id)arg2;

@end

