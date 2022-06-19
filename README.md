#                                                        \*\*\*\*\*\*\*\*\*\*\*\*\*\*INCOMPLETE**************

המטלה נכתבה במקור ע"י יואב גרוס ואלעד נביאי, סטודנטים משנים קודמות.

# ליגת כדורסל

*** קראו את המטלה עד סופה לפני שתתחילו לעבוד, בייחוד את סעיף ההערות ***

במטלה זו נממש מחלקות המייצגות ליגת כדורסל ובה קבוצות, משחקים, טבלת הליגה וניתוחים סטטיסטיים.

 ## ממשו את המחלקות הבאות:

 - Team - מחלקה המייצגת קבוצה. לכל קבוצה שם ייחודי ורמת כישרון המיוצגת ע"י מספר (בין 0 ל-1)

 - Game - במשחק מתמודדות שתי קבוצות, קבוצת בית וקבוצת חוץ. למשחק יש תוצאה הנקבעת עפ"י כמות הנקודות שכל קבוצה קלעה. הקבוצה שקלעה יותר נקודות מנצחת. אם המשחק הסתיים בתיקו תבחרו את הקבוצה המנצחת לפי ראות עיניכם. (במהלך ההצגה תתבקשו להסביר את ההיגיון). 

 - Leauge - מחלקה המייצגת ליגת כדורסל. בליגה יש 20 קבוצות עם שמות יחודיים.
 המחלקה מייצרת את סט הקבוצות שלה באחד מהאופנים הבאים:  
 א. מקבלת מבחוץ סט קבוצות נתון
 ב. לא מקבלת קבוצות מבחוץ ומייצרת 20 קבוצות באופן רנדומלי
 ג. שילוב של שני הסעיפים הקודמים (לקבל חלק מבחוץ וחלק לאתחל רנדומלית). 

 - Schedule - לוח המשחקים של הליגה. לוח המשחקים מחולק למחזורים וכל קבוצה בליגה משחקת בכל מחזור בדיוק פעם אחת. לוח המשחקים מייצג עונה שלמה ולכן כל זוג קבוצות משחקות אחת נגד השנייה פעמיים בדיוק כאשר במחזור אחד קבוצה א' היא הקבוצה הביתית ובמחזור אחר קבוצה ב' היא הביתית. 
 אתם יכולים להיעזר במאמר הזה: https://en.wikipedia.org/wiki/Round-robin_tournament 

 ## דרישות נוספות:

### הגרלת תוצאות המשחקים  

המשחקים בליגה שלנו יהיו דומים למשחקים בליגת כדורסל אמיתית. ולכן, נגריל תוצאות שעונות על הדרישות הבאות.

1. תוצאה בסיסית היא מספר בין 50 ל-100
2. תוצאה של קבוצה ביתית היא בין 55 ל-100
3. בהתאם לפרמטר הכישרון של הקבוצה, לאחר ההגרלה הראשונית יתווספו לה עד 10 נקודות בונוס. 

את התוצאות תקבעו עפ"י התפלגות נורמלית סביב ממוצע מסויים עם סטיית תקן מסויימת, לפי ראות עיניכם. 
 
עיינו בקישור הבא: https://en.cppreference.com/w/cpp/numeric/random/normal_distribution 

### ניתוח סטטיסטי:  

לאחר שנגמרה העונה, תהיה לנו היכולת להציג את טבלת הניקוד בסיום העונה. הטבלה מסודרת לפי שני פרמטרים לפי סדר החשיבות הבא:  
1. יחס נצחונות והפסדים
2. הפרש סלים (נקודות שהקבוצה קלעה פחות נקודות שהקבוצה ספגה)

לאחר שקיבלנו תוצאות, נרצה לדעת את הנתונים הבאים:  

1. מי הן הקבוצות המובילות הליגה (מספר הקבוצות שתחזירו יהיה לפי פרמטר שתקבלו מבחוץ)
2. מה היה אורכו של רצף הנצחונות הארוך ביותר בעונה?
3. מה היה אורכו של רצף ההפסדים הארוך ביותר בעונה?
4. כמה קבוצות קלעו יותר נקודות מאשר ספגו?

הוסיפו עוד שני נתונים סטטיסטיים שמעניין אותכם להציג. 

## הערות

1. בשונה מהמטלות אותן הגשתן במהלך הסמסטר, מטלה זו אינה מחולקת לשני חלקים ויש לכם שבועיים לעבוד עליה. 
2. מטלה זו לא תיבדק אוטומטית אלא תקבלו עליה ציון מהצגות בלבד.
3. למרות זאת, עדיין עליכם לכתוב בדיקות מקיפות לעבודה שלכם.
4. בהתאם לכך, לא הגדרנו במדוייק את כל התכנית שתכתבו. לא סיפקנו בעבורכם את שמות כל המחלקות והפונקציות שעליכם לכתוב מאחר ואת הבדיקות היחידות שתצטרכו לעבור, אתם תכתבו לעצמכם. עליכם למלא את הדרישות הכתובות במטלה, אך מבנה התכנית גמיש יותר מאשר היה במטלות הקודמות. 
**שימו לב**, הגמישות יכולה להקל עליכם במקומות מסויימים ולהקשות באחרים. נסו לבנות את המערכת שלכם לפי העקרונות ההנדסיים שלמדתם במהלך הסמסטר, והתואר בכלל.
5. מאחר ואת מבנה התכנית תקבעו בעצמכם, המייקפייל המצורף הוא רק תבנית שאתם יכולים להשתמש בה ולשנות כראות עיניכם. אתם לא חייבים להשתמש בו.

זוהי המטלה האחרונה לקורס, נסו להשתמש בכמה שיותר כלים אותם למדתם במהלך הסמסטר, היו יצירתיים, תלמדו ותיהנו מהדרך.

בהצלחה, 
טל זיכלינסקי
