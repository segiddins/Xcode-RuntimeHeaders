//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface DTTapMessage : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_plist;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) int kind;
- (id)plist;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initAsKind:(int)arg1;
- (id)init;

@end

