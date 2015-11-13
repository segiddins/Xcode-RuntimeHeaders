//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/NSCoding-Protocol.h>
#import <GPUToolsServices/NSCopying-Protocol.h>

@class DYInvestigatorRecommendationInfo, DYInvestigatorRecommendationSection, NSMutableDictionary;

@interface DYInvestigatorRecommendation : NSObject <NSCopying, NSCoding>
{
    NSMutableDictionary *_sectionsDict;
    DYInvestigatorRecommendationSection *_currentSection;
    DYInvestigatorRecommendationInfo *_summary;
}

@property(retain, nonatomic) DYInvestigatorRecommendationInfo *summary; // @synthesize summary=_summary;
- (void).cxx_destruct;
- (void)printFormatted;
- (void)addAdditionalSectionItem:(id)arg1;
- (void)addSpecificSectionItem:(id)arg1;
- (void)addGeneralSectionItem:(id)arg1;
@property(readonly, nonatomic) DYInvestigatorRecommendationSection *additionalSection; // @dynamic additionalSection;
@property(readonly, nonatomic) DYInvestigatorRecommendationSection *specificSection; // @dynamic specificSection;
@property(readonly, nonatomic) DYInvestigatorRecommendationSection *generalSection; // @dynamic generalSection;
- (void)setOrdered:(BOOL)arg1;
- (void)setPreamble:(id)arg1;
- (void)selectSection:(id)arg1;
- (void)setSummaryWithString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)description;

@end

