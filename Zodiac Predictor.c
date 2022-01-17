/*WELCOME TO ZODIAC PREDICTOR. 
THIS MINI PROJECT IS CREATED FOR ENTERTAINMENT PURPOSE ONLY. WE HAVE USED IF-ELSE LOOP IN THE CODE
SUBJECT: PPS (PROGRAMMING FOR PROBLEM SOLVING)
PROJECT CREATORS: ANNARHYSA ALBERT (RA2111047010144) & MRUNMAYEE RAVINDRA DATAR (RA2111047010173)
B.TECH - AI C*/

#include <stdio.h>
int main()
{int date, month;
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("                                            WELCOME TO ZODIAC PREDICTOR\n");
printf("*****************************************************************************************************************************\n");
printf(" \n");

/*TAKING USER INPUT*/

printf("Enter Your Birth Date(dd): ");
scanf("%d", &date);
printf("Enter Your Birth Month(mm): ");
scanf("%d", &month);

/*ARIES ZODIAC SIGN*/

if ((date>=21 && date<=31 && month == 3)|| (date>=1 && date<=19 && month == 4))
{
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("Your Zodiac Sign Is ARIES\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Personality Traits: \n");
printf("1) Aries are energetic and full of hope for the future.\n");
printf("2) They are passionate and brave for everything.\n");
printf("3) Friendly and genial to every friend around.\n");
printf("4) Fearless and Courageous.\n"); 
printf("______________________________________________________________________________________________________________________________\n");
printf("Your Zodiac Flower Is Honeysuckle\n"); 
printf("______________________________________________________________________________________________________________________________\n");
printf("Celebrity That Shares The Same Zodiac Sign: Jackie Chan [7th April]\n");}

/*TAURUS ZODIAC SIGN*/

else if ((date>=20 && date<=30 && month == 4)|| (date>=1 && date<=20 && month == 5))
{
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("Your Zodiac Sign Is TAURUS\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Personality Traits: \n");
printf("1) People under this sign are prudent and romantic.\n");
printf("2) Generally, they are diligent and smart.\n");
printf("3) They are more patient than people under other signs.\n");
printf("4) Tenacious and Perseverant.\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Your Zodiac Flower Is Poppy\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Celebrity That Shares The Same Zodiac Sign: Megan Fox [16th May]\n");}
 
/*GEMINI ZODIAC SIGN*/

else if ((date>=21 && date<=31 && month == 5)|| (date>=1 && date<=21 && month == 6))
{
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("Your Zodiac Sign Is GEMINI\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Personality Traits: \n");
printf("1) This sign features a distinctive diversity.\n");
printf("2) Geminians are good at making up stories without any trace or anything that others can hold against.\n");
printf("3) They have excellent eloquence and rapid response.\n");
printf("4) Easy going and Adjustable.\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Your Zodiac Flower Is Lavender\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Celebrity That Shares The Same Zodiac Sign: Madhavan R. [1st June]\n");}

/*CANCER ZODIAC SIGN*/

else if ((date>=22 && date<=30 && month == 6)|| (date>=1 && date<=22 && month == 7))
{
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("Your Zodiac Sign Is CANCER\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Personality Traits: \n");
printf("1) Prudent, persistent and persevering.\n");
printf("2) They have a strong sixth sense and subjective judgment and are very imaginative.\n");
printf("3) Shrewd and good at reading others' mind.\n");
printf("4) Intuitive, Loyal and Protective.\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Your Zodiac Flower Is White Rose\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Celebrity That Shares The Same Zodiac Sign: Priyanka Chopra [18th July]\n");}

/*LEO ZODIAC SIGN*/

else if ((date>=23 && date<=31 && month == 7)|| (date>=1 && date<=22 && month == 8))
{
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("Your Zodiac Sign Is LEO\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Personality Traits: \n");
printf("1) Leo folks are sunny, enthusiastic, loyal, kind, confident and generous.\n");
printf("2) Popular and loved by everyone.\n");
printf("3) Don't like to tell lies.\n");
printf("4) Ambitious and Attention-seeking.\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Your Zodiac Flower Is Sunflower\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Celebrity That Shares The Same Zodiac Sign: Barack Obama [4th August]\n");}

/*VIRGO ZODIAC SIGN*/

else if ((date>=23 && date<=31 && month == 8)|| (date>=1 && date<=22 && month == 9))
{
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("Your Zodiac Sign Is VIRGO\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Personality Traits: \n");
printf("1) Virgo people are unapproachable and have the sense of Mysophobia.\n");
printf("2) They are systematic and clear-minded.\n");
printf("3) Very practical, complementing their character of loving fantasy.\n");
printf("4) Ambitious and Perfectionists.\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Your Zodiac Flower Is Buttercup\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Celebrity That Shares The Same Zodiac Sign: Beyoncé [4th September]\n");}

/*LIBRA ZODIAC SIGN*/

else if ((date>=23 && date<=30 && month == 9)|| (date>=1 && date<=23 && month == 10))
{
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("Your Zodiac Sign Is LIBRA\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Personality Traits: \n");
printf("1) The mind of Librans is just like the sensitive scales swinging between the right and the wrong.\n");
printf("2) Often think the matter over and over again.\n");
printf("3) Good at telling lies plausibly and boldly, making you feel that they are not wrong but you.\n");
printf("4) Social Butterflies.\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Your Zodiac Flower Is Rose\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Celebrity That Shares The Same Zodiac Sign: Amitabh Bachchan [11th October]\n");}

/*SCORPIO ZODIAC SIGN*/

else if ((date>=24 && date<=31 && month == 10)|| (date>=1 && date<=21 && month == 11))
{
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("Your Zodiac Sign Is SCORPIO\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Personality Traits: \n");
printf("1) Mystery is a pronoun of Scorpius people.\n");
printf("2) Strong logical judgment ability.\n");
printf("3) Specially known for their rational, independent and disciplinary trait..\n");
printf("4) Assertive and Opinionated.\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Your Zodiac Flower Is Geranium\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Celebrity That Shares The Same Zodiac Sign: Juhi Chawla [13th November]\n");}


/*SAGITTARIUS ZODIAC SIGN*/

else if ((date>=22 && date<=30 && month == 11)|| (date>=1 && date<=21 && month == 12))
{
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("Your Zodiac Sign Is SAGITTARIUS\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Personality Traits: \n");
printf("1) Sagittarius people are free, brave, decisive and independent and like the challenges.\n");
printf("2) They are always popular among people and stand out in others.\n");
printf("3) Have a wide range of interests in life, allowing them to keep forever young.\n");
printf("4) Honest and Compassionate.\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Your Zodiac Flower Is Carnation\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Celebrity That Shares The Same Zodiac Sign: Charlie Puth [2nd December]\n");}

/*CAPRICORN ZODIAC SIGN*/

else if ((date>=22 && date<=31 && month == 12)|| (date>=1 && date<=19 && month == 1))
{
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("Your Zodiac Sign Is CAPRICORN\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Personality Traits: \n");
printf("1) Quality of being firm, tolerant, practical and reliable, giving people the strong sense of security.\n");
printf("2) Their optimism often influences a lot of friends around.\n");
printf("3) They speak based on fact, stand by their words and don't like to lie.\n");
printf("4) Reliable and Disciplined.\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Your Zodiac Flower Is Pansy\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Celebrity That Shares The Same Zodiac Sign: Michelle Obama [17th January]\n");}

/*AQUARIUS ZODIAC SIGN*/

else if ((date>=20 && date<=31 && month == 1)|| (date>=1 && date<=18 && month == 2))
{
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("Your Zodiac Sign Is AQUARIUS\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Personality Traits: \n");
printf("1) With lofty ideals, Aquarius people are certainly the good friends.\n");
printf("2) They are quite popular due to their unique foresight.\n");
printf("3) Aquarius people are honest, silent and diligent, just like the model workers.\n");
printf("4) Independent, Inquisitve and Intellectual.\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Your Zodiac Flower Is Orchid\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Celebrity That Shares The Same Zodiac Sign: Urmila Matondkar [4th February]\n");}

/*PISCES ZODIAC SIGN*/

else if ((date>=19 && date<=29 && month == 2)|| (date>=1 && date<=20 && month == 3))
{
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("Your Zodiac Sign Is PISCES\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Personality Traits: \n");
printf("1) Pisces people are neurotic, oblivious, sentimental, self-deceiving, responsible and imaginative in personality.\n");
printf("2) They are very cheerful but they are always very sad when alone.\n");
printf("3) Love to daydream and always cannot distinguish reality from fantasy.\n");
printf("4) Highly Sociable, Intuitive and Genuine.\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Your Zodiac Flower Is Water Lily\n");
printf("______________________________________________________________________________________________________________________________\n");
printf("Celebrity That Shares The Same Zodiac Sign: Shankar Mahadevan [3rd March]\n");}

else
{
printf("\n");
printf("*****************************************************************************************************************************\n");
printf("                                                         INVALID INPUT\n");}
 
printf("______________________________________________________________________________________________________________________________\n");
printf("                                                THANK YOU FOR USING ZODIAC PREDICTOR\n");

return 0;
}
