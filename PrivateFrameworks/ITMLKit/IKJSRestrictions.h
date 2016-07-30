//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSRestrictions-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class NSString;

@interface IKJSRestrictions : IKJSObject <IKJSRestrictions, JSExport>
{
}

+ (id)restrictionsDidChangeNotificationName;
- (id)_contentRestrictionsCountryCode;
- (id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3;
@property(readonly, nonatomic) _Bool allowsExplicit;
@property(readonly, nonatomic) _Bool allowsErotica;
@property(readonly, nonatomic) _Bool allowArtistActivity;
- (id)maxTVShowRatingForCountry:(id)arg1;
- (id)maxMovieRatingForCountry:(id)arg1;
@property(readonly, nonatomic) _Bool appAnalyticsAllowed;
@property(readonly, nonatomic) _Bool appInstallationAllowed;
@property(readonly, nonatomic) NSString *maxAppRating;
@property(readonly, nonatomic) long long maxTVShowRank;
@property(readonly, nonatomic) long long maxMovieRank;
@property(readonly, nonatomic) long long maxAppRank;

@end
