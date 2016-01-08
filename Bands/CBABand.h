//
//  CBABand.h
//  Bands
//
//  Created by Andres on 1/8/16.
//  Copyright (c) 2016 Andres. All rights reserved.
//

#ifndef Bands_CBABand_h
#define Bands_CBABand_h

typedef enum{
    CBATouringStatusOnTour,
    CBATouringStatusOffTour,
    CBATouringStatusDisabled
}CBATouringStatus;


@interface CBABand : NSObject
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *notes;
@property (nonatomic, assign) int rating;
@property (nonatomic, assign) CBATouringStatus touringStatus;
@property (nonatomic, assign) BOOL haveSeenLive;

@end
#endif
