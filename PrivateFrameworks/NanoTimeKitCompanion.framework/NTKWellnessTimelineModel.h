/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWellnessTimelineModel : NSObject {
    HKAnchoredObjectQuery * _calorieGoalAnchoredObjectQuery;
    HKQuantityType * _calorieGoalType;
    HKUnit * _countUnit;
    HKCurrentActivityCacheQuery * _currentActivityCacheAndStatisticsQuery;
    _HKCurrentActivitySummaryQuery * _currentActivitySummaryQuery;
    _HKDelayedOperation * _delayedProcessingOperation;
    HKHealthStore * _healthStore;
    HKUnit * _kcalUnit;
    HKUnit * _minuteUnit;
    NSObject<OS_dispatch_queue> * _queue;
    HKSortedSampleArray * _queue_calorieGoals;
    HKActivitySummary * _queue_currentActivitySummary;
    NSArray * _queue_exerciseActivityStatisticsQuantityInfos;
    NSArray * _queue_moveActivityStatisticsQuantityInfos;
    NSArray * _queue_sortedEntriesKeys;
    NSArray * _queue_standActivityStatisticsStandHourInfos;
    NSMutableDictionary * _queue_wellnessEntriesByDate;
    NSObject<OS_dispatch_queue> * _subscriber_queue;
    NSHashTable * _subscribers;
}

+ (id)sharedModel;

- (void).cxx_destruct;
- (void)_broadcastCurrentEntryUpdate:(id)arg1 toSubscriber:(id)arg2;
- (void)_broadcastCurrentEntryUpdateToSubscribers:(id)arg1;
- (void)_broadcastHistoricalDataLoaded:(bool)arg1 toSubscriber:(id)arg2;
- (void)_broadcastHistoricalDataWasUpdatedToSubscribers;
- (void)_broadcastToAllSubscribersHistoricalDataLoaded:(bool)arg1;
- (void)_handleTimeChange;
- (id)_queue_calorieGoalSampleForDate:(id)arg1;
- (bool)_queue_historicalDataLoaded;
- (void)_queue_processMoveActivityStatistics:(id)arg1 exerciseActivityStatistics:(id)arg2 standActivityStatistics:(id)arg3;
- (void)_queue_processNewCalorieGoals:(id)arg1;
- (id)_queue_standHourForDate:(id)arg1;
- (void)_queue_startQueries;
- (void)_queue_stopQueries;
- (void)_queue_updateMoveActivityStatistics:(id)arg1 exerciseActivityStatistics:(id)arg2 standActivityStatistics:(id)arg3;
- (id)_statisticsCollectionQueryForType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 prediate:(id)arg4 intervalComponents:(id)arg5;
- (id)_wellnessEntryModelFromActivitySummary:(id)arg1;
- (void)addSubscriber:(id)arg1;
- (void)dealloc;
- (void)getCurrentWellnessEntryWithHandler:(id /* block */)arg1;
- (void)getWellnessEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)getWellnessEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)init;
- (void)removeSubscriber:(id)arg1;
- (id)timelineEndDate;
- (id)timelineStartDate;

@end