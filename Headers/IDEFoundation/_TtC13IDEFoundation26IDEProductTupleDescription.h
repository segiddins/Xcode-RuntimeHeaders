//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, _TtC13IDEFoundation18IDEDestinationInfo;

@interface _TtC13IDEFoundation26IDEProductTupleDescription : NSObject
{
    MISSING_TYPE *displayName;
    MISSING_TYPE *productName;
    MISSING_TYPE *identifier;
    MISSING_TYPE *bundleIdentifier;
    MISSING_TYPE *destination;
    MISSING_TYPE *containingSchemes;
    MISSING_TYPE *iconPath;
    MISSING_TYPE *rawProductType;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *rawProductType;
@property(nonatomic, readonly) NSString *iconPath;
@property(nonatomic, readonly) NSArray *containingSchemes;
@property(nonatomic, readonly) _TtC13IDEFoundation18IDEDestinationInfo *destination; // @synthesize destination;
@property(nonatomic, readonly) NSString *bundleIdentifier;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *productName;
@property(nonatomic, readonly) NSString *displayName;

@end

