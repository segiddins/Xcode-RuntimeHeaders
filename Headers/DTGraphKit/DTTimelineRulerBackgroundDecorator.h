//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTTimelineDecorator.h>

@class NSDictionary;

@interface DTTimelineRulerBackgroundDecorator : DTTimelineDecorator
{
    NSDictionary *_attributes;
}

@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (void)setDefaultsForPlane:(id)arg1;
- (void)decorateContainer:(struct DTTimelineDecorationContainer *)arg1 qualityOfService:(unsigned int)arg2 priority:(int)arg3 group:(id)arg4;
- (id)init;
- (id)initWithTimeLabelAttributes:(id)arg1;
- (BOOL)mustDecorateOnMainThread;

@end

