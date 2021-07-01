#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>

string ari(string);


void test1() {
  string s1="The town was large enough to support three inns, and all their common rooms were rife with rumors. Arianne sent her men into each of them, to hear what they might hear. In the Broken Shield, Daemon Sand was told that the great septry on the Holf of Men had been burned and looted by raiders from the sea, and a hundred young novices from the motherhouse on Maiden Isle carried off into slavery.";
  assert(strcmp(ari(s1), "Eleventh Grade") == 0);
}

void test2() { 
 string s2="A mouse took a stroll through the deep dark wood. A fox saw the mouse, and the mouse looked good. Where are you going to, little brown mouse? Come and have lunch in my underground house.";
  assert(strcmp(ari(s2), "Third Grade") == 0);
}

void test3() {
  string s3="Exhaled respiratory particles can build-up within enclosed spaces with inadequate ventilation. The risk of COVID-19 infection increases especially in spaces where people engage in physical exertion or raise their voice (e.g., exercising, shouting, singing) as this increases exhalation of respiratory droplets. Prolonged exposure to these conditions, typically more than 15 minutes, leads to higher risk of infection.";
  assert(strcmp(ari(s3), "Professor") == 0);
 }

int main(void) {
  test1();
  test2();
  test3();
}
#include<stdio.h>
#include<stdlib.h>

void ssort(int arr[],int l)
{
    int i;

    for(i=0;i<l;i++)
    {
        swap_max(arr,l,i);
    }
}

void swap_max(int arr[],int l,int n)
{
    int j,k;
    int temp;

    for(j=k=n;j<l;j++)
    {
        if(arr[j] > arr[k])
        {
            k = j;
        }
    }

    temp = arr[n];
    arr[n] = arr[k];
    arr[k] = temp;
}
