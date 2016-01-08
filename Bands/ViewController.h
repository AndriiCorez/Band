//
//  ViewController.h
//  Bands
//
//  Created by Andres on 1/8/16.
//  Copyright (c) 2016 Andres. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CBABand.h"

@interface ViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic, strong) CBABand *bandObj;
@property (nonatomic, weak) IBOutlet UILabel *titleLabel;
@property (nonatomic, weak) IBOutlet UITextField *nameTextField;



@end

