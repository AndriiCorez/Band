//
//  ViewController.m
//  Bands
//
//  Created by Andres on 1/8/16.
//  Copyright (c) 2016 Andres. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSLog(@"titleLabel.text=%@", self.titleLabel.text);
    
    self.bandObj = [[CBABand alloc] init];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
