//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinBoard/BBObserverBulletinUpdate.h>

@interface BBObserverBulletinUpdateAdd : BBObserverBulletinUpdate
{
    _Bool _shouldPlayLightsAndSirens;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool shouldPlayLightsAndSirens; // @synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBulletin:(id)arg1 updateType:(long long)arg2 transactionID:(unsigned long long)arg3 shouldPlayLightsAndSirens:(_Bool)arg4;
- (id)initWithBulletin:(id)arg1 updateType:(long long)arg2 transactionID:(unsigned long long)arg3;

@end
