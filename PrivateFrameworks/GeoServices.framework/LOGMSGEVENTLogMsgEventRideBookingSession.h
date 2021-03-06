/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface LOGMSGEVENTLogMsgEventRideBookingSession : PBCodable <NSCopying> {
    GEOLatLng * _destinationBlurred;
    double  _distanceToPickupInMeters;
    double  _durationOfSessionInSeconds;
    int  _endState;
    int  _endView;
    NSMutableArray * _errorMessages;
    bool  _exploredOtherOptions;
    struct { 
        unsigned int distanceToPickupInMeters : 1; 
        unsigned int durationOfSessionInSeconds : 1; 
        unsigned int timestamp : 1; 
        unsigned int endState : 1; 
        unsigned int endView : 1; 
        unsigned int numberOfAvailableExtensions : 1; 
        unsigned int exploredOtherOptions : 1; 
        unsigned int installedApp : 1; 
        unsigned int movedPickupLocation : 1; 
        unsigned int paymentIsApplePay : 1; 
        unsigned int showedSurgePricingAlert : 1; 
        unsigned int switchedApp : 1; 
        unsigned int unavailable : 1; 
    }  _has;
    bool  _installedApp;
    bool  _movedPickupLocation;
    unsigned int  _numberOfAvailableExtensions;
    GEOLatLng * _originBlurred;
    bool  _paymentIsApplePay;
    NSString * _rideAppId;
    NSString * _rideBookingSessionId;
    NSString * _rideType;
    bool  _showedSurgePricingAlert;
    bool  _switchedApp;
    long long  _timestamp;
    bool  _unavailable;
}

@property (nonatomic, retain) GEOLatLng *destinationBlurred;
@property (nonatomic) double distanceToPickupInMeters;
@property (nonatomic) double durationOfSessionInSeconds;
@property (nonatomic) int endState;
@property (nonatomic) int endView;
@property (nonatomic, retain) NSMutableArray *errorMessages;
@property (nonatomic) bool exploredOtherOptions;
@property (nonatomic, readonly) bool hasDestinationBlurred;
@property (nonatomic) bool hasDistanceToPickupInMeters;
@property (nonatomic) bool hasDurationOfSessionInSeconds;
@property (nonatomic) bool hasEndState;
@property (nonatomic) bool hasEndView;
@property (nonatomic) bool hasExploredOtherOptions;
@property (nonatomic) bool hasInstalledApp;
@property (nonatomic) bool hasMovedPickupLocation;
@property (nonatomic) bool hasNumberOfAvailableExtensions;
@property (nonatomic, readonly) bool hasOriginBlurred;
@property (nonatomic) bool hasPaymentIsApplePay;
@property (nonatomic, readonly) bool hasRideAppId;
@property (nonatomic, readonly) bool hasRideBookingSessionId;
@property (nonatomic, readonly) bool hasRideType;
@property (nonatomic) bool hasShowedSurgePricingAlert;
@property (nonatomic) bool hasSwitchedApp;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUnavailable;
@property (nonatomic) bool installedApp;
@property (nonatomic) bool movedPickupLocation;
@property (nonatomic) unsigned int numberOfAvailableExtensions;
@property (nonatomic, retain) GEOLatLng *originBlurred;
@property (nonatomic) bool paymentIsApplePay;
@property (nonatomic, retain) NSString *rideAppId;
@property (nonatomic, retain) NSString *rideBookingSessionId;
@property (nonatomic, retain) NSString *rideType;
@property (nonatomic) bool showedSurgePricingAlert;
@property (nonatomic) bool switchedApp;
@property (nonatomic) long long timestamp;
@property (nonatomic) bool unavailable;

+ (Class)errorMessageType;

- (int)StringAsEndState:(id)arg1;
- (int)StringAsEndView:(id)arg1;
- (void)addErrorMessage:(id)arg1;
- (void)clearErrorMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationBlurred;
- (id)dictionaryRepresentation;
- (double)distanceToPickupInMeters;
- (double)durationOfSessionInSeconds;
- (int)endState;
- (id)endStateAsString:(int)arg1;
- (int)endView;
- (id)endViewAsString:(int)arg1;
- (id)errorMessageAtIndex:(unsigned long long)arg1;
- (id)errorMessages;
- (unsigned long long)errorMessagesCount;
- (bool)exploredOtherOptions;
- (bool)hasDestinationBlurred;
- (bool)hasDistanceToPickupInMeters;
- (bool)hasDurationOfSessionInSeconds;
- (bool)hasEndState;
- (bool)hasEndView;
- (bool)hasExploredOtherOptions;
- (bool)hasInstalledApp;
- (bool)hasMovedPickupLocation;
- (bool)hasNumberOfAvailableExtensions;
- (bool)hasOriginBlurred;
- (bool)hasPaymentIsApplePay;
- (bool)hasRideAppId;
- (bool)hasRideBookingSessionId;
- (bool)hasRideType;
- (bool)hasShowedSurgePricingAlert;
- (bool)hasSwitchedApp;
- (bool)hasTimestamp;
- (bool)hasUnavailable;
- (unsigned long long)hash;
- (bool)installedApp;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)movedPickupLocation;
- (unsigned int)numberOfAvailableExtensions;
- (id)originBlurred;
- (bool)paymentIsApplePay;
- (bool)readFrom:(id)arg1;
- (id)rideAppId;
- (id)rideBookingSessionId;
- (id)rideType;
- (void)setDestinationBlurred:(id)arg1;
- (void)setDistanceToPickupInMeters:(double)arg1;
- (void)setDurationOfSessionInSeconds:(double)arg1;
- (void)setEndState:(int)arg1;
- (void)setEndView:(int)arg1;
- (void)setErrorMessages:(id)arg1;
- (void)setExploredOtherOptions:(bool)arg1;
- (void)setHasDistanceToPickupInMeters:(bool)arg1;
- (void)setHasDurationOfSessionInSeconds:(bool)arg1;
- (void)setHasEndState:(bool)arg1;
- (void)setHasEndView:(bool)arg1;
- (void)setHasExploredOtherOptions:(bool)arg1;
- (void)setHasInstalledApp:(bool)arg1;
- (void)setHasMovedPickupLocation:(bool)arg1;
- (void)setHasNumberOfAvailableExtensions:(bool)arg1;
- (void)setHasPaymentIsApplePay:(bool)arg1;
- (void)setHasShowedSurgePricingAlert:(bool)arg1;
- (void)setHasSwitchedApp:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUnavailable:(bool)arg1;
- (void)setInstalledApp:(bool)arg1;
- (void)setMovedPickupLocation:(bool)arg1;
- (void)setNumberOfAvailableExtensions:(unsigned int)arg1;
- (void)setOriginBlurred:(id)arg1;
- (void)setPaymentIsApplePay:(bool)arg1;
- (void)setRideAppId:(id)arg1;
- (void)setRideBookingSessionId:(id)arg1;
- (void)setRideType:(id)arg1;
- (void)setShowedSurgePricingAlert:(bool)arg1;
- (void)setSwitchedApp:(bool)arg1;
- (void)setTimestamp:(long long)arg1;
- (void)setUnavailable:(bool)arg1;
- (bool)showedSurgePricingAlert;
- (bool)switchedApp;
- (long long)timestamp;
- (bool)unavailable;
- (void)writeTo:(id)arg1;

@end
