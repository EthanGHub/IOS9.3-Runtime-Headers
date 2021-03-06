//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Search/MCProfileConnectionObserver-Protocol.h>
#import <Search/SPDaemonQueryDelegate-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSString, SPDaemonQueryToken, SPSearchResult, SPSearchResultSection;
@protocol OS_dispatch_queue, SPSearchAgentDelegate;

@interface SPSearchAgent : NSObject <SPDaemonQueryDelegate, MCProfileConnectionObserver>
{
    SPDaemonQueryToken *_currentToken;
    NSString *_prefixWithNoResults;
    NSArray *_sections;
    NSMutableArray *_mutableSections;
    NSArray *_searchDomains;
    unsigned int _resultCount;
    int _options;
    SPSearchResultSection *_topHitResultSection;
    SPSearchResult *_webSearchThroughResult;
    SPSearchResult *_appStoreSearchThroughResult;
    SPSearchResult *_mapsSearchThroughResult;
    _Bool _searchThroughAllowed;
    _Bool _observersAdded;
    _Bool _defaultSearchEnabled;
    _Bool _oneShotZKWSEnabled;
    NSString *_lastVoiceQuery;
    _Bool _voiceQueryHasBeenStable;
    _Bool _hasCachedUpdate;
    NSDictionary *_lastParsecResults;
    _Bool _isActivated;
    NSString *_previousQuery;
    NSString *_previousQueryAnySession;
    _Bool _queryComplete;
    NSObject<SPSearchAgentDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queryProcessor;
    int _currentZKWLevel;
    long long _updatesDisabled;
    struct WaitingResults_s *_deferredUpdate;
    NSString *_lastQueryString;
    int _seqNo;
    int _storedSeqNo;
    int _lastUpdateSeqNo;
    NSDate *_parsecNewsExpireTime;
    int _prefsToken;
    _Bool _newQuery;
    _Bool _willNotify;
    _Bool _liveAndCached;
    _Bool _shouldCacheResults;
    _Bool _activeCachedZKW;
    NSMutableArray *_cachedZKW1;
    NSMutableArray *_cachedZKW2;
    NSString *_fbq;
    NSString *_web_fbq;
}

+ (void)initialize;
+ (_Bool)hasSeenZKWApps;
+ (void)deactivate;
+ (void)activate;
@property(readonly) int currentZKWLevel; // @synthesize currentZKWLevel=_currentZKWLevel;
@property(readonly) NSString *web_fbq; // @synthesize web_fbq=_web_fbq;
@property(readonly) NSString *fbq; // @synthesize fbq=_fbq;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queryProcessor; // @synthesize queryProcessor=_queryProcessor;
@property(nonatomic) __weak NSObject<SPSearchAgentDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *searchDomains; // @synthesize searchDomains=_searchDomains;
@property(readonly, nonatomic) _Bool queryComplete; // @synthesize queryComplete=_queryComplete;
@property(nonatomic) int options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithZKWLevel:(int)arg1 andOptions:(int)arg2;
- (void)internetDomainsChanged;
- (void)stuffChangedNotification;
- (void)stuffChanged;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)updateSearchThroughSectionWithQuery:(id)arg1;
- (void)addSearchThroughSectionWithQuery:(id)arg1;
- (void)searchDaemonQueryCompleted:(id)arg1;
- (void)searchDaemonQueryReset:(id)arg1;
- (void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;
- (void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2;
- (void)cachedZKWAvailable:(_Bool)arg1;
- (_Bool)cleanupObsoleteResults;
- (_Bool)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 levelZKW:(int)arg4 allowInternet:(_Bool)arg5;
- (_Bool)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 levelZKW:(int)arg3 allowInternet:(_Bool)arg4;
- (_Bool)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 withResponse:(id)arg4 isStable:(_Bool)arg5;
- (_Bool)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 withResponse:(id)arg3 isStable:(_Bool)arg4;
- (_Bool)setQueryString:(id)arg1 withResponse:(id)arg2 keyboardLanguage:(id)arg3 keyboardPrimaryLanguage:(id)arg4 isStable:(_Bool)arg5 levelZKW:(int)arg6 allowInternet:(_Bool)arg7;
- (void)testRestoreCacheZKW;
- (void)testSaveCachedZKWPermUsers:(int)arg1 appLinks:(int)arg2 apps:(int)arg3;
- (void)testPermuteSection:(id)arg1 domain:(unsigned int)arg2 count:(int)arg3;
- (void)cacheZKWQueryLive:(_Bool)arg1 allowInternet:(_Bool)arg2;
- (void)performZKWQueryWithKeyboardLanguage:(id)arg1 allowInternet:(_Bool)arg2;
- (_Bool)hasParsecNewsHigh;
- (_Bool)hasParsecNews;
- (void)clearParsecResultsIfStale;
- (void)postSearchAgentClearedResultsToDelegate;
- (void)postSearchAgentUpdatedResultsToDelegate;
- (long long)contentFilters;
- (_Bool)_shouldIgnoreQuery:(id)arg1;
- (id)queryId;
- (id)queryString;
- (void)retrieveImageDataForIdentifier:(id)arg1 inSection:(id)arg2 preferredSize:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)retrieveImageDataForResult:(id)arg1 inSection:(id)arg2 preferredSize:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)hasResults;
- (id)sectionAtIndex:(unsigned int)arg1;
- (unsigned long long)sectionCount;
@property(readonly) NSArray *sections;
- (int)levelZKW;
- (void)clear;
- (void)clearInternal:(int)arg1;
- (void)invalidateCurrentQuery;
- (void)cancelCurrentQuery;
- (void)addDeserializer:(id)arg1;
- (void)addSections:(id)arg1;
- (void)mergeSections;
- (void)updateResultsThroughDelegate;
- (void)updateResultsThroughDelegate:(_Bool)arg1;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)pushAndPostUpdates;
- (id)_indexesOfCompatibleSection:(id)arg1;
- (_Bool)sectionNeedsMoreMapsOption:(id)arg1;
- (void)handleOptionsForNewSections:(id)arg1;
- (void)handleHiddenResult:(id)arg1 shownResult:(id)arg2 inSection:(id)arg3;
- (_Bool)promoteCachedQuery;
- (void)deactivate;
- (void)activate;
- (int)currentQuerySeqNo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

