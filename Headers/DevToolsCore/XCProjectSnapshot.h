//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XCProjectSnapshot : NSObject
{
    NSString *_name;
    NSString *_path;
}

@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithInformationFromProject:(id)arg1;

@end

