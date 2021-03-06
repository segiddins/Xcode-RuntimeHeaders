//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GLToolsExpert/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DYGLExpertRationaleTranslation : NSObject <NSSecureCoding>
{
    NSString *_subject;
    NSString *_verb;
    NSString *_object;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *object; // @synthesize object=_object;
@property(readonly, nonatomic) NSString *verb; // @synthesize verb=_verb;
@property(readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (id)translationWithEvidence:(id)arg1;
- (id)translation;
- (id)_substituteVerbString:(id)arg1 withEvidence:(id)arg2;
- (id)_substituteSubjectObjectString:(id)arg1 withEvidence:(id)arg2;
- (void)_substituteWithEvidence:(id)arg1;
- (void)debugPrintFormatted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithSubject:(id)arg1 withVerb:(id)arg2 withObject:(id)arg3;

@end

