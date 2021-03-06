//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/NSCopying-Protocol.h>
#import <GPUToolsServices/NSSecureCoding-Protocol.h>

@class NSAttributedString;

@interface DYInvestigatorRecommendationInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSAttributedString *_text;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void)debugPrintFormatted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithAttributedString:(id)arg1;
- (id)init;
- (id)description;

@end

